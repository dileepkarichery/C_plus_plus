#include <iostream>
using namespace std;

template <class buckey>

buckey addCrap(buckey x,buckey y){
        
            return x+y;
       }

int main()
{
    double a = 43,b = 21.12;
    cout<<"Sum :"<<addCrap(a,b)<<endl;

    return 0;
}