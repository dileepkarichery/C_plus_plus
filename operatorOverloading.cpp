/*#include<iostream>
using namespace std;
class Sally{
    public:
      int num;
      Sally();
      Sally(int);
      Sally operator+(Sally);
};

Sally::Sally(){}
Sally::Sally(int a){
    num = a;
}

Sally Sally::operator+(Sally aso){
    Sally brandNew;
    brandNew.num = num + aso.num;
    return brandNew;
}

int main()
{
    Sally a(34);
    Sally b(21);
    Sally c;
    c = a + b;

    cout<<c.num<<endl;
} */

#include <iostream>
using namespace std;

class Shape
{
    private:
      int length,breadth;
    public:
      Shape(int l,int b){
          length = l;
          breadth =b;
      }

      double Area()
      {
        return length*breadth;
      }

      int operator+(Shape aso)
      {
        
          return Area() + aso.Area();
          
      }
};

int main()
{
    Shape a(3,5);
    Shape b(8,3);
    int total = a + b;

    cout << "total Area is: "<<total<<endl;
}