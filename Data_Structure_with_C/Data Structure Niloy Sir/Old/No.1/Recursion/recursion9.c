#include<stdio.h>
long factTailRecursive(int,long);
int main()
{
    int n;
    long f;
    printf("Enter an integer:");
    scanf("%d",&n);
    f=factTailRecursive(n,1);
    printf("Factorial=%d\n",f);
}
long factTailRecursive(int n,long accumulator)
{
    if(n==0)
      return accumulator;
    return factTailRecursive(n-1,accumulator*n);
}