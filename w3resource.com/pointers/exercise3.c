/* 
3. Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z          
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("m = %d  \nfx = %f  \ncht = %c  \n\n", m, fx, cht);
    printf("address of m = %p  \naddress of fx = %p  \naddress of cht = %p\n\n", &m, &fx, &cht);

    int *mPointer = &m;
    float *fxPointer = &fx;
    char *chtPointer = &cht;

    printf("value at address of m = %d  \nfx = %f  \ncht = %c  \n\n", *(&m), *(&fx), *(&cht));  // INTERESTING DEMONSTRATION OF GRABBING THE VALUE AT A MEMORY ADDRESS WITHOUT EVEN USING A DECLARED POINTER
    printf("address of m = %p  \naddress of fx = %p  \naddress of cht = %p  \n\n", mPointer, fxPointer, chtPointer);
    printf("value at address of m = %d  \nfx = %f  \ncht = %c  \n\n", *mPointer, *fxPointer, *chtPointer);

    return 0;
}
