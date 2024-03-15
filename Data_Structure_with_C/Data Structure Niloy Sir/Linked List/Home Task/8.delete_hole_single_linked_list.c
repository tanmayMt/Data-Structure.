#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements.c"
struct node* delete_hole_single_linked_list(struct node*);

void main()
{
    struct node* head;
    head=create_single_linked_list(head);
    printf("Linked list before delete node:\n");
    print_elements(head);

    head=delete_hole_single_linked_list(head);

    printf("Linked list after delete all nodes\n");
    print_elements(head);
}

struct node* delete_hole_single_linked_list(struct node* start)
{
    struct node* ptr;
    ptr=start;
    while (ptr!=NULL)
    {
        ptr=ptr->link;
        free(start);
        start=ptr;
    }
}
