#include <iostream>
using namespace std;

int Buckey(int n)
{
    int fact;
    if (n==1)
     return 1;
    else
     {
      
     return(Buckey(n-1)*n);
      //return fact;

     }
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<Buckey(n)<<endl;
}