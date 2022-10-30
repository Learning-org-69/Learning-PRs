#include<iostream> 
using namespace std;

   int alpha(char b)
   {
    int a=int(b);
    if((a>=65 && a<=90) || (a>=97 && a<=122))
    {
        cout<<"It is an alphabet. \n";
    }
    else
    {
        cout<<"It is not an alphabet. \n";
    }
    return a;
   }  

    int main()
    {
    char n;
    cout<<"Enter a alphabet. \n";
    cin>>n;

    alpha(n);    

    return 0;
   }