#include <cstdio>
#include <cstring>

using namespace std;

#define MAX 164000

bool prime[MAX];
int ans[15000],sz;

int main(){
    memset(prime,true,sizeof(prime));
    prime[0] = prime[1] = false;

    ans[0] = 2; sz = 1;

    for(int i = 3;i<MAX && sz<15000;i += 2){
        if(prime[i]){
            ans[sz] = i; ++sz;
            if(i<MAX/i)
                for(int j = i*i;j<MAX;j += i)
                    prime[j] = false;
        }
    }

    int t,n;
    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        printf("%d\n",ans[n-1]);
    }

    return 0;
}
