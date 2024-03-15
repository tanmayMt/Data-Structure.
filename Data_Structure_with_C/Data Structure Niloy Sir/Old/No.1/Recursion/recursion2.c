#include <stdio.h>
int multiplication(int,int);
int main()
{
    int a,b,c;
    printf("Enter two integer for multiplication:");
    scanf("%d%d",&a,&b);
    c=multiplication(a,b);
    printf("The result of %d times %d=%d",b,a,c);
    return 0;
}
int multiplication(int x,int y)
{
    if(x==0 || y==0)
      return 0;
    return x+multiplication(x,y-1);
}