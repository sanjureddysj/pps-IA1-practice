#include<stdio.h>

int input()
{
  int n;
  printf("Enter n:\n ");
  scanf("%d", &n);
  return n;
}

int add(int n)
{
  int sum=0,i;
  for(i=0;i>n;i++)
  {
    sum=sum+i;
  }
  return sum;
}

void output(int n,int sum)
{
  printf("The Sum of %d numbers is %d", n, sum);
}

int main()
{
 int n, sum;
 n=input();
 sum=add(n);
 output(n,sum);
 return 0;
}