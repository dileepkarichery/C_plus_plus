#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream buckyFile("beef.txt");

    if (buckyFile.is_open()){
        cout <<"the file is open\n";
    }
    else{
        
      cout <<"you messed up";
    }
    
    buckyFile << "I love beef\n";


    buckyFile.close();
}
