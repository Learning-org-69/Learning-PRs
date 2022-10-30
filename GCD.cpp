#include<iostream>
using namespace std;

int GCD(int a,int b) {
    int n=0;
    while(b!=0) {
        n=a%b;
        a=b;
        b=n;
    }
    return a;
}

int main() 
{
    int a,b;
    cin>>a>>b;

    cout<<GCD(a,b);

    return 0;
}