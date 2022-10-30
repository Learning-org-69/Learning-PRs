#include<iostream>
using namespace std;

void max(int a,int b,int c)
{
    if(a>b && a>c)
    {
        cout<<a<<" is the biggest. \n";
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is the biggest. \n";
    }
    else
    {
        cout<<c<<" is the biggest. \n";
    }
    return ;
}

void min(int a,int b,int c)
{
    if(a<b && a<c)
    {
        cout<<a<<" is the smallest. \n";
    }
    else if(b<a && b<c)
    {
        cout<<b<<" is the smallest. \n";
    }
    else
    {
        cout<<c<<" is the smallest. \n";
    }
    return ;
}

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers. \n";
    cin>>a>>b>>c;

    max(a,b,c);
    min(a,b,c);

    return 0;
}