#include<stdio.h>
#include "create_linked_list.c"

void delete_first_node_from_linked_list(struct node**);

void main()
{
    struct node* head;
    struct node* ptr;
    head=NULL;
    ptr=NULL;

    create_linked_list(&head);
    print_elements_of_linked_list(&head);

    delete_first_node_from_linked_list(&head);
    printf("After deleting first node from linked list.\n");
    
    ptr=head;
    while (ptr != NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
}

void delete_first_node_from_linked_list(struct node** head)
{
    struct node* temp;
    if(head==NULL)
       printf("Linked list is empty!\n");

    temp=*head;
    *head = *head->link;
    free(temp);
    temp=NULL;
}