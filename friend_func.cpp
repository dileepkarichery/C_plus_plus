#include <iostream>
using namespace std;

class Buckey
{
    private:
       int a,b;
    public:
       void input()
       {
           cout<<"Enter the value of a and b\n";
           cin>>a>>b;
       }
       
       friend int multiply(Buckey B);
};

int multiply(Buckey B)
{
    int x=B.a * B.b;
    return x;
}

int main()
{
    Buckey B;
    B.input();
    cout<<"The result is: "<<multiply(B)<<endl;
}