#include<iostream>
using namespace std;

int swap(int num1,int num2)
{
    int i=num1,j=num2;
    i=num2;
    j=num1;
    cout<<"1st number:"<<i<<endl;
    cout<<"2nd number:"<<j<<endl;
    return i,j;
}

int main()
{
    int a,b;
    cout<<"Enter 2 numbers. \n";
    cin>>a>>b;

    swap(a,b);
    return 0;
}