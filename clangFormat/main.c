#define M(a,b,c) \
  blah(a) \
blah(c) \
blah(b)

extern void foo(int a, int b, int c,  int d, int e, int ** f, int * h);

int main()
{
  int i;
  foo(a,
      b, c, d, e, f,
      h);
  for(int i =0; i< 5; ++i){
    printf("i == %d\n",i);
  }
}

