#include<stdio.h>
int main()
{
    int fibo(int); /*Function Prototype*/
    int n,f,r;
    printf("Enter the term number:");
    scanf("%d",&n);
    f=fibo(n);   /* Function Call*/
    r=n%10;
    if(n>=11 && n<=13)
      printf("The %dth term is %d\n",n,f);
  else
  {
    switch(r)
    {
      case 1: printf("The %dst term is %d\n",n,f);
              break;
      case 2: printf("The %dnd term is %d\n",n,f);
              break;
      case 3: printf("The %drd term is %d\n",n,f);
              break;
      default: printf("The %dth term is %d\n",n,f);      
    }
  }
    return 0;
}
int fibo(int n)
{
    if(n<=1)
      return n;
    return fibo(n-1)+fibo(n-2);

}