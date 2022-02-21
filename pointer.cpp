#include<iostream>
using namespace std;
void passbyValue(int x);
void passbyReference(int *x,int *z);

int main()
{
    char c[10];
    //cout<<sizeof(c)<<endl;
    static int z = 30;
    int x = 10;
    int y = 22;
    passbyValue(x);
    passbyReference(&y,&z);
    cout<<x<<"\t"<<y<<"\t"<<z<<endl;
    return 0;
}

void passbyValue(int x)
{
     x = 33;
}

void passbyReference(int *y,int *z)
{
   *y = 45;
   *z = 55;
}