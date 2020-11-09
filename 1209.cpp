#include<iostream>

using namespace std;

int main(void)
{
    long long int n,count=0,i=1,ans,j,arr[65540];

    for(j=0; j<65540; j++){
        arr[j] = i;
        count++;
        i +=count;
    }

    cin>>n;

    while(n--){
        ans = 0;

        long long int k,mid = 0,lo = 0,hig = 65540-1;
        cin>>k;

        while(lo<=hig){
            mid = lo+(hig-lo)/2;

            if(arr[mid]==k){
              ans = 1;
              break;
            }

            if(arr[mid]<k)
                lo = mid+1;
            else
                hig = mid - 1;
        }
        cout<<ans<<" ";
    }
}
