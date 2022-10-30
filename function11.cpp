#include<iostream>
using namespace std;

void vote(int n)
{
    if(n>=18)
    {
        cout<<"You can vote. \n";
    }
    else
    {
        cout<<"You cannot vote. \n";
    }
    return ;
}

int main()
{
    int n;
    cout<<"Input your age. \n";
    cin>>n;

    vote(n);

    return 0;
}