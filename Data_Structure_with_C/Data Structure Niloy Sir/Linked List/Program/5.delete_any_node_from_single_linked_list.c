#include<stdio.h>
#include<stdlib.h>
#include "print_elements_of_linked_list.c"
struct node* create(struct node*);
struct node
{
    int info;
    struct node* link;
};

int main()
{
    struct node* head;
    head=create(head);
    print_elements_of_linked_list(head);
}

struct node* create(struct node* start)
{
    struct node* temp;
    char ans;
    start=malloc(sizeof(struct node));
    temp=start;

    while (1)
    {
        printf("Enter the number for linked list:");
        scanf("%d",&temp->info);
        fflush(stdin);

        printf("Continue(Y/N)?:");
        scanf("%c",&ans);

        if(ans=='Y' || ans=='y')
        {
            temp->link=malloc(sizeof(struct node));
            temp=temp->link;
        }
        else
        {
            temp->link=NULL;
            return start;
        }
    }
}