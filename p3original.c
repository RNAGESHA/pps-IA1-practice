#include<stdio.h>
int input_n()
{
  int n;
printf("enter the numbers to add:\n");
scanf("%d",&n);
return n;
}
int sum_n(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum +=i;
  }
  return sum;
} 
void output(int n, int sum)
{
  int i;
  for(int i=1;i<=n;i++)
  {
    printf("%d +",i);
  }
  printf("sum of %d is %d\n",n,sum);
}
int main()
{
  int a,b;
  a=input_n();
  b=sum_n(a);
  output(a,b);
  return 0;
}