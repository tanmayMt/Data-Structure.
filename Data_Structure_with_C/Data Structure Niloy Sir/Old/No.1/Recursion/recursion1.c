#include<stdio.h>

void display(int);
int sum(int);
int power(int,int);

int main()
{
  int n;
  printf("Enter an integer ");
  scanf("%d",&n);

  display(n);

  int c;
  c=sum(n);
  printf("Sum of 1 to %d = %d\n",n,c);
  

  int a,b,p;
  printf("Enter the base and exponent ");
  scanf("%d%d",&a,&b);
  p=power(a,b);
  printf("%d raised to the power %d = %d\n",a,b,p);
  
  return 0;
}

void display(int n)
{
  if(n==0)
    return;
  display(n-1);
  printf("%d\n",n);
}

int sum(int n)
{
  if(n==0)
    return 0;
  return n + sum(n-1);
}

int power(int a,int b)
{
  if(b==0)
    return 1;
  return a*power(a,b-1);
}