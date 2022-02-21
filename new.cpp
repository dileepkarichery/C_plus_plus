#include <iostream>
using namespace std;
int main()
{
    int x,y,sum;
    int *p = new int;
    *p = 100;

    cout << *p << endl;

    delete p;
    p = new int(200);

    cout << *p <<endl;

    cout << "Enter the first number:" << endl;
    cin >> x;
    cout << "Enter the Second number:" << endl;
    cin >> y;

    sum = x + y;
    
    x = x - y;
    cout << "Value of x now is:" << x << endl;
    cout << "The sum of he numbers are:" << sum <<endl;
    return 0;
}