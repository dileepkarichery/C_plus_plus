#include <iostream>

class A {
    public:
    virtual ~A(){std::cout << "A's destructor" << std::endl;}
};

class B : public A {
    public:
    ~B(){std::cout << "B's destructor" << std::endl;}
};

int main() {
    A* a = new B;
    delete a;
}