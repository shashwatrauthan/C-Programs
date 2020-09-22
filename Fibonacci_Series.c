// Fibonacci Series

#include <stdio.h>

int main()
{
  int n,a = 0, b = 1,c;
  printf("Enter the term upto which you want fibonacci series :\n");
  scanf("%d",&n);
  if(n == 0)
  {
    printf("Nothing");
  }
  if(n >= 1)
  {
    printf("%d ",a);
  }
  if(n >= 2)
  {
    printf("%d ",b);
  }
  if(n >= 3)
  {
    for(int i=3;i<=n;i++)
    {
      c = a+b;
      a = b;
      b = c;
      printf("%d ",c);
    }
  }
  return 0;
}
