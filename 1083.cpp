#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    int k = 0;
    for(int i = 0; i<str.size(); i++){
        k++;
    }

    int fact = 0;
        for(int i = 0; (n-i*k)>0; i++){
            if(i==0){
                fact =fact+n;
            }
            else{
                fact = fact*(n-(i*k));
            }
        }
    cout<<fact<<endl;
    return 0;
}
