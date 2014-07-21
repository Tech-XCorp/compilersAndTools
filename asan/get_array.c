#include <stdlib.h>

int *get_array(int n)
{
  return malloc(n * sizeof(int));
}

void free_array(int** arr)
{
  free(*arr);
  *arr = 0;
}

