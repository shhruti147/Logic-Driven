#include<stdio.h>
//using function
int meow(int times)
{
  for(int i=1;i<=times;i++)
  printf("meow\n");
}

int main()
{
  int n;
  printf("Whats the value for n?");
  n=getchar();
  meow(n);
  return 0;
}
