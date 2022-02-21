#include <iostream>
using namespace std;

template <class T>
class Buckey{
    T first,second;
    
    public:
       Buckey(T a, T b)
      {
          first = a;
          second = b;
          
      }
      T bigger();
};

template <class T>
T Buckey<T>::bigger()
{
    return(first>second?first:second);
}

int main()
{
    int a = 5, b = 12;

    Buckey <int> bo(a,b);
    cout<<bo.bigger()<<endl;
    
   // cout<<bo.sum(a,b)<<endl;
}
