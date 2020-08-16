#include<iostream>
using namespace std;
int main()
{
    int n,i,m,sum=0;
    cin>>n;
    if(n>1){
        m = n;
        n = 1;
    }
    else{
        m = 1;
    }
    for(i=n; i<=m; i++){
        sum = sum+i;
    }
    cout<<sum<<endl;
    return 0;
}
