#include "node_for_single_linked_list.c"
#include "create_single_linked_list.c"
#include "print_elements.c"
#include "insert_at_a_particular_position.c"

int main()
{
    struct node* head;
    head=create(head);
    print_elements(head);

    head=insert_at_a_particular_position(head);
    print_elements(head);
}