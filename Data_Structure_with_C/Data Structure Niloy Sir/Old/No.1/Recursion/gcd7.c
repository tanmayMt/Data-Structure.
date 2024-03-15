#include<stdio.h>
int gcd(int a,int b) 
{
    int r;
    r=a%b;
    if(r==0)
       return b;
    gcd(b,r);
}
int main()
{
    int a,b,g;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    printf("G.C.D=%d\n",g);
    return 0;
}