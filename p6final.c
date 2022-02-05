#include<stdio.h>
void input_two_string(char *a, char *b)
{
  printf("enter the strings:\n");
  scanf("%s %s",a,b);
}
int strcmp(char *a, char *b)
{
 int g;
 while(*a==*b)
 {
   if(*a!=*b);
   break;
   *a++;
   *b++;
 }
 g=*a-*b;
 return g;
}
void output(char *a, char *b, int result)
{
  if(result>0)
  printf("%s is greater then %s\n",a,b);
  else if(result<0)
  printf("%s is greater then %s\n",b,a);
  else
  printf("%s is equal to %s\n",a,b);
}
int main()
{
  char c[25],d[25];
  int result;
  input_two_string(c,d);
  result=strcmp(c,d);
  output(c,d,result);
  return 0;
}