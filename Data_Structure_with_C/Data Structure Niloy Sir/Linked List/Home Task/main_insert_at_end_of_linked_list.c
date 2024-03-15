#include<stdio.h>
#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements.c"
#include "insert_at_end_of_linked_list.c"

int main()
{
    struct node* head;
    head=create(head);
    prints(head);
    
    head=insert_at_end_of_linked_list(head);
    prints(head);
}