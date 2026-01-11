#include<stdio.h>
int meow(int times)
{
  for(int i=1;i<=times;i++)
  printf(meow\n);
}

int main()
{
  int n;
  printf("Whats the value for n?");
  getchar(n);
  meow(n);
return 0;
}
