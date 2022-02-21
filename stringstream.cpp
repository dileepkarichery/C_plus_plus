#include <iostream>
#include <sstream>
#include <string>

int main()
{
   std::string stringlength;
   float inches = 0;
   float yards = 0;

   std::cout<<"Enter the number inches:"<<std::endl;
   std::getline (std::cin,stringlength);
   std::stringstream(stringlength) >> inches;
   std::cout<<"You entered "<<inches;
   return 0;

}

