#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srandom(time(0));
    for(int x = 1; x < 10; x++){
      cout << 1 + (rand() % 6) <<endl;
    }
    
}