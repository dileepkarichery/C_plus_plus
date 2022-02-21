#include <iostream>
//#include <string>
using namespace std;

void printname(const string& name)
{
    cout<<"Name: "<<name<<endl;   // to make it accept both l and rvalue add const keyword, but there is an overloaded function
                                  // with && it will use that for rvalue
}

void printname(string&& name)
{
    cout<<"rvalueName: "<<name<<endl;
}

int main()
{
    string firstname = "Dileep";
    string lastname = "karichery";
    string fullname = firstname + lastname;
    printname(fullname);
    printname(firstname + lastname);
}
