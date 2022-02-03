#include<stdio.h>
int input()
{
  int n;
  printf("enter the  number\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a, int b, int c)
{
  int largest;
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
void output(int a, int b, int c, int largest)
{
  if(largest==a)
  {
    printf("%d is the largest to all\n",largest);
  }
  else if(largest==b)
  {
    printf("%d is the largest to all\n",largest);
  }
  else
  {
    printf("%d is the largest to all three\n",largest);
  }
}
int main()
{
  int a, b, c, largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a ,b , c);
  output(a, b, c, largest);
  return 0;
}