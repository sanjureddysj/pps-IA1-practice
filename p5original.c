#include<stdio.h>
#include<math.h>

float input()
{
  float n;
  printf("Enter the Numbers\n");
  scanf("%f", &n);
  return n;
}

float my_sqrt(float n)
{
  float root;
  root=sqrt(n);
}

void output(float n, float result)
{
  printf("The Square root of %f is %f", n, result);
}

int main()
{
  float n,result;
  n=input();
  result=my_sqrt(n);
  output(n,result);
  return 0;
}