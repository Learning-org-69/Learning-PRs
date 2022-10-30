#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number. \n";
    cin>>a;

    int b=a;

    for(;a>1;a--){
        b*=(a-1); 
    }
    cout<<b;

    return 0;
}