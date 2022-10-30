#include<iostream>
using namespace std;

int oddeve(int n)
{
    if(n%2==0)
    { 
        cout<<"Even number' \n";
    }
    else{
        cout<<"Odd number' \n";
    }
    return n;
}
int main()
{
    int n;
    cout<<"Enter a number. \n";
    cin>>n;

    oddeve(n);

    return 0;
}