#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number . \n";
    cin>>n;

    int sum=0;
    int a=1;
    for(a;a<=n;a++)
    {
        sum=sum + a;
    }

    cout<<sum; 
     
    return 0;
}