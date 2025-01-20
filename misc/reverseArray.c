#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int length = 8;
  int *variable = (int*)malloc(length * sizeof(int));
  
  for (int i = 0; i < length; i++) 
  {
    variable[i] = i;
  }

  for (int i = 0; i < length / 2; i++)
  {
    int temp = variable[i];
    variable[i] = variable[length - 1 - i];
    variable[length - 1 - i] = temp;
  }
  
  for (int i = 0; i < length; i++) 
  {
    printf("variable[%d] = %d\n", i, variable[i]);
  }
  
  free(variable);
  
  return 0;
}
