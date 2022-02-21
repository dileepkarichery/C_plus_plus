#include <iostream>
//#include <cstdio>
using namespace std;

int main()
{
    char c;
    int count = 0,nochar=-1;
    FILE *fp;
    fp = fopen("beef.txt","r");
    if(fp == NULL)
    {
        cout<<"Error Opening File"<<endl;
        exit(1);
    }
    while((c=fgetc(fp)) != EOF)
    {
        nochar++;
        if (c == '\n')
        {
            count++;
            cout<<"Number of readable chars at line "<<count<<" is: "<<nochar<<endl;
            nochar = -1;
        }
       
    }
    fclose(fp);
    cout<<"Number of lines: " <<count<<endl;
   
}