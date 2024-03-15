#include<stdio.h>
#include<stdlib.h>
#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "insert_at_begin_of_linked_list.c"
#include "print_elements.c"

int main()
{
    struct node* head;
    head=create(head);
    printf("Before calling insert_at_begining_of_linked_list() function--\n");
    print_elements(head);
    
    printf("\n");
    
    head=insert_at_begin_of_linked_list(head);
    print_elements(head);

    return 0;
}