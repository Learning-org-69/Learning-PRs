#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of the first number. \n" ;
    cin>>a;

    int b;
    cout<<"Enter the value of the second number. \n" ;
    cin>>b;

    int c;
    cout<<"Enter the value of the third number. \n" ;
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {cout<<"The biggest nunmber is:"<<a;}
        else
        {cout<<"The biggest nunmber is:"<<c;}
    }
    else
    {
        if(b>c)
        {cout<<"The biggest nunmber is:"<<b;}
        else
        {cout<<"The biggest nunmber is:"<<c;}
    }

    return 0;
}