#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number. \n";                                
    cin>>a;

    for(int n=1;n<=a;n++)
    {
        if(n%2==0)                           //  i is even
        {continue;}
        cout<<n<<endl;
    }

    return 0;
}