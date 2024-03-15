#include<stdio.h>
// Factorial of using Iteration & Recursion      5=1*2*3*4*5
long factIterative(int); //Prototype decleration of the function
long factRecursive(int);

int main()
{
  int n;
  long f,g;
  printf("Enter an integer ");
  scanf("%d",&n);

  f=factIterative(n);
  printf("Factorial using iterative method = %ld\n",f);

  g=factRecursive(n);
  printf("Factorial using recursive method = %ld\n",g);
  return 0;
}

long factIterative(int n)
{
  int i;
  long f;
  f=1;
  for(i=1;i<=n;i++)
    f=f*i;          
  return f;
}

long factRecursive(int n)
{
  if(n==0)
    return 1;
  return n*factRecursive(n-1);
}

/*
 n! = n * (n-1)!
 4! = 4 * (4-1)! = 4 * 3! = 4 * 6 = 24
 
 0! = 1
 1! = 1
 2! = 1*2
 3! = 1*2*3 = 6
 4! = 1*2*3*4 = 24
*/
