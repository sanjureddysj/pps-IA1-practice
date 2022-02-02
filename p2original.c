#include<stdio.h>

int input()
{ 
  int a;
  printf("Enter 3 Numbers\n");
  scanf("%d", &a);
  return a;
}

int compare(int a, int b, int c)
{
  int largest;
  if ((a>b) && (a>c))
  {
     largest=a;
  }
  elseif ((b>a&&b>c))
  {
    largest=b;
  }
  else
  {
    largest=c;
  }
  return largest;
}

void output(int a, int b, int c, int largest)
{
  printf("The Greatest Number is %d", largest);
}

int main()
{
  int a, b, c, largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(a,b,c,largest);
  return 0;
}
