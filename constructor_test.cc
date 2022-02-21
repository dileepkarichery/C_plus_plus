#include <iostream>

class A {
    public:
    int myInt = 10;

    //Default Constructor
    A() {
        std::cout << "Calling constructor" << std::endl;
    }
    
    //Constructor with parameter
    A(int a) {
        myInt = a;
        std::cout << "Calling another parameterized constructor"<< std::endl;
    }

    //Copy constructor
    /*
    A(const A& existingObj) {
        this->myInt = existingObj.myInt;
        std::cout << "Calling copy constructor"<< std::endl;
    }
    */
    
    //Assigment operator
    void operator = (const A& existingObject){
        std::cout << "Calling Assignment operator" << std::endl;
        //return this;
    }

    ~A(){std::cout << "Destrying myself"<< std::endl;}
};

int main() {
    //THis will call constructor
    A a;

    //This will call constructor with parameter
    A cc(20);

    //This will call copy constructor
    A b(cc);
    std::cout << b.myInt << std::endl;

    //This will call assignment operator
    A c;
    c = b;

    return 0;
}