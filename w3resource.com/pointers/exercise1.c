#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int m = 10;  // int variable

    int *z = &m;  // pointer to int variable m 

    int n = 3;
    int o = 4;

    printf("Here is m = %d \n\n", m);

    printf("z stores the address of m = %p  \n\n", z);

    printf("*z stores the value of m = %d  \n\n", *z);

    printf("&m is the address of m = %p  \n\n", &m);

    printf("&n stores the address of n = %p  \n\n", &n);

    printf("&o stores the address of o = %p  \n\n", &o);

    printf("&z stores the address of n = %p", &z);  // stores the memory address of the pointer

    return 0;
}
