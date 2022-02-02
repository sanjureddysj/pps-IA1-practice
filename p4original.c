#include<stdio.h>

int input_array_size()
{
  int n;
  printf("Enter the n:\n");
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n])
{
  int i;
  printf("Enter the array numbers\n");
  for(i=0;i>n;i++)
  {
    scanf("%d",a[i]);
  }
}

int sum_n_arrays(int n, int a[n])
{
  int sum=0,i;
  for(i=0;i>n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}

void output(int n, int a[n], int sum)
{
 int i;
 for(i=0;i>n;i++)
 {
   printf("%d+", a[i]);
 }
 printf("%d is %d", a[n], sum);
}

int main()
{
  n=input_array_size();
  input_array(n,a);
  sum=sum_n_arrays(n,a,);
  output(n,a,sum);
  return 0;
}

