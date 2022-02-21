#include <stdio.h>

int global = 10; /* Uninitialized variable stored in bss*/
 
int main(void)
{
    static int i = 20; /* Initialized static variable stored in DS*/
    int j;

    return 0;
}