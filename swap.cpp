#include<iostream>
using namespace std;
void swap(int *x,int *y);
void nswap(int x, int y);
int main()
{
    int x,y;
    cout<<"Enter the value of X and Y"<<endl;
    cin>>x>>y;

    cout<<"The values are:"<<x<<"\t"<<y<<endl;

    nswap(x,y);
    cout<<"The values after nswap:"<<x<<"\t"<<y;

    swap(&x,&y);

    cout<<"The Values after swap:"<<x<<"\t"<<y<<endl;

    

}

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void nswap(int x,int y)
{
    int temp1;
    temp1 = x;
    x = y;
    y = temp1;
}