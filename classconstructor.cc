#include <iostream>
#include <string>
using namespace std;

class test
{
    
    
    public:
         test(string name){
             setName(name);
         }
         void setName(string x){
             name = x;
         }

         string getName(){
             return name;
         }

    private:
    string name;
    
};

int main()
{
    test testobj("Buckey Roberts");
    cout << testobj.getName()<<endl;

    test testobj1("Dileep kumar");
    cout << testobj1.getName();
    return 0;
}