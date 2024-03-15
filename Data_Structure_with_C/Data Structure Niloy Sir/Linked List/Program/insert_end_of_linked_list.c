#include<stdio.h>
#include "create_linked_List.c"
struct node* insert_at_end_of_linked_list(struct node*,int);

void main()
{
    int n;
    struct node* head;
    struct node* ptr;

    printf("Enter a integer which will be inserted at the end of the linked list:");
    scanf("%d",&n);

    head=NULL;
    head=create(head);

    //printing elements of linked list
    ptr=head;
    while (ptr !=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
    
    head=insert_at_end_of_linked_list(head,n);
    
    //printing elements of linked list
    ptr=head;
    while (ptr !=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
}

struct node* insert_at_end_of_linked_list(struct node* start, int n)
{
    struct node* temp;
    struct node* ptr;

    temp=malloc(sizeof(struct node));
    temp->info=n;
    temp->link=NULL;

    ptr=start;
    while (ptr->link != NULL)
        ptr=ptr->link;
    ptr->link=temp;

    return start;
}