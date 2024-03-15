#include<stdio.h>
#include<stdlib.h>
struct st
{
    int info;
    struct st* linK;
};
struct st* create(struct st*);
int count_of_node(struct st*);

struct st* create(struct st* start)
{
    struct st* temp;
    char answare;

    start=(struct st*)malloc(sizeof(struct st));
    temp=start;

    while (1)
    {
        printf("Enter an integer:");
        scanf("%d",&temp->info);
        fflush(stdin);
        
        printf("Continue(Y/N)?:");
        scanf("%c",&answare);
        if(answare=='Y' || answare=='y')
        {
            temp->linK=(struct st*)malloc(sizeof(struct st));
            temp=temp->linK;
        }
        else
        {
            temp->linK=NULL;
            return start;
        }
    }
}
int count_of_node(struct st* head)
{
    int count;
    struct st* ptr;
    if(head==NULL)
       printf("Linked List is Empty");

    count=0;
    ptr=head;
    while (ptr != NULL)
    {
        count++;
        ptr=ptr->linK;
    }
    return count;
}
int main()
{
    struct st* head;
    int count;
    head=NULL;

    head=create(head);
    count=count_of_node(head);

    printf("Number of Nodes: %d",count);
}