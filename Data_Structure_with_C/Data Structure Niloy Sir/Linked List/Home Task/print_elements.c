#include<stdio.h>
void print_elements(struct node*);

void print_elements(struct node* start)
{
    struct node* ptr;
    ptr=start;

    while (ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
    printf("\n");
}