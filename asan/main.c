#include <stdio.h>

extern int *get_array(int);
extern void free_array(int **);

int main()
{
  int *a;
  a = get_array(5);
  for (int i = 0; i < 6; ++i) {
    printf("i == %d, a[i] == %d\n", i, a[i]);
  }
}

