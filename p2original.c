#include<stdio.h>
int input()
{
  int x;
  printf("enter the three number\n");
  scanf("%d",&x);
  return x;
}
int cmp(int a,int b,int c)
{
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
  return 0;
}
int output(int a,int b,int c,int largest)
{
  if(largest==a)
  {
    printf("%d is largest  of  all\n",largest);
  }
  else if(largest==b)
  {
    printf("%d is largest  of  all\n",largest);
  }
  else
  {
    printf("%d is largest of  all the three numbers\n",largest);
  }
  return 0;
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest = cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}