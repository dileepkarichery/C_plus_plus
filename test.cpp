#include <iostream>
using namespace std;

double Average(double* array,int *count)
{
    double sum =0;
    for(int i=0; i < *count;i++)
    {
        sum = sum + *(array + i);
    }
     
    double avg = sum / *count;
    *count += 5;
    cout<<"In function the count value is: "<<*count<<endl;
    return avg;
}

int main()
{
    
    double a[] = {3.0,4.0,12.2,10.5};
    double result;
    int count = 5;
    result = Average(a,&count);

    cout<<"The Average:"<<result<<endl;

    cout<<"IN main the count value is : "<<count<<endl;


}