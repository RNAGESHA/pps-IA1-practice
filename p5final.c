#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter the value\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float x=n/2;
  float result;
  result=0.5 * (x + n/x);
  while(fabs(x-result)>0.000001)
  {
    x=result;
    result=0.5*(x +n/x);
  }
  return result;
}
void output(float n, float sqrt_result)
{
printf("The square root of %f is %f\n",n,sqrt_result);
}
int main()
{
  float n, result;
  n=input();
  result=my_sqrt(n);
  output(n,result);
  return 0;
}

