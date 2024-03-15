#include<stdio.h>
void display(int);
int main()
{
  display(0);
  return 0;
}
void display(int n)
{
  n++;
  if(n > 15)    /* Base case */
    return;
  printf("%d \n",n);
  display(n); //The display() function is called by itself
  printf("%d\n",n);
}
