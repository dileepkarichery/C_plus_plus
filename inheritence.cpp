#include<iostream>
using namespace std;
 
class Mother {
    public:
      Mother(){};
      void sayName();
};

class Daughter:public Mother
{
  public:
    Daughter(){};
};

void Mother::sayName()
{
    cout<<"I am Karichery"<<endl;
}

 

int main()
{
 //Mother mo;
 //mo.sayName();
  Daughter tina;
  tina.sayName();
}