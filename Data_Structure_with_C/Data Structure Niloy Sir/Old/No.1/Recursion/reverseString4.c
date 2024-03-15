#include<stdio.h>
void reverseString();
int main()
{
    printf("Enter a string:");
    reverseString();
    return 0;
}
void reverseString()
{
    char ch;
    if((ch=getchar())!='\n')
       reverseString();
    printf("%c",ch);
}