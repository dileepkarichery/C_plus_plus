#include <iostream>
using namespace std;

template <class FIRST,class SECOND>

FIRST smaller(FIRST a,SECOND b)
{
    return (a<b?a:b);
}

int main()
{
    double x = 2.45;
    int y = 12;

    cout<<"Smaller is: "<<smaller(x,y)<<endl;
}
