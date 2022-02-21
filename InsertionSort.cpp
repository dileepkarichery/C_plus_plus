#include <iostream>
using namespace std;

void InsertionSort(int A[], int n)
{
    int temp;
    for(int i=1;i<n;i++)
    {
        int j = i - 1;
        temp = A[i];

       
        while(j>=0 && temp < A[j])
        {
            A[j+1] = A[j];
            j--;

        }
        A[j+1] = temp;
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the Array: ";
    cin>>size;
    int a[size];
    cout<<"ENter the elements:" ;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
    cout<<endl;

    InsertionSort(a,size);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<size;i++)
     cout<<a[i]<<"\t";
}