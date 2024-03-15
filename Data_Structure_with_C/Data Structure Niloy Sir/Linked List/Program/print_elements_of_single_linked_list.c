#include<stdio.h>
// #include "node_for_single_linked_list.c"
struct node* print_elements_of_single_linked_list(struct node*);

struct node* print_elements_of_single_linked_list(struct node* start)
{
    struct node* ptr;
    ptr=start;
    if(ptr == NULL)
    {
        printf("Linked List is Empty!!!!!!!!!");
        exit(1);
    }
    printf("Elements of linked List: ");
    while (ptr != NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
    printf("\n");
    return start;
}