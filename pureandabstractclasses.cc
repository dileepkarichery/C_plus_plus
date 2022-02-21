#include <iostream>

class A {
    public:
    virtual void foo() = 0;
    
};

class B : public A {
    public:
    
    void foo() {}
    
};


int main() {
    B b;
    std::cout<<"Everything is executed as expected\n";
}