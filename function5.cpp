#include<iostream>
using namespace std;

int fact(int n)
{
    int a=1;
    for(int i=2;i<=n;i++){
        a*=i;
    }

    return a;
}

int main()
{
    int n,r;
    cout<<"Enter 2 numbers. \n";
    cin>>n>>r;

    int ans=fact(n)/(fact(n-r)*fact(r));
    cout<<ans<<endl;

    return 0;
}