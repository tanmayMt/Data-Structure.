#include<stdio.h>
struct node* create(struct node*);
struct node* insert_at_end_of_linked_list(struct node*,int);

struct node
{
    int info;
    struct node* link;
};


void main()
{
    int n;
    struct node* head;
    struct node* ptr;

    head=NULL;
    head=create(head);

    //printing elements of linked list before calling 'insert_at_end_of_linked_list()' function
    ptr=head;
    while (ptr !=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }

    printf("Enter a integer which will be inserted at the end of the linked list:");
    scanf("%d",&n);
    head=insert_at_end_of_linked_list(head,n);
    
    //printing elements of linked list after calling 'insert_at_end_of_linked_list()' function
    ptr=head;
    while (ptr !=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
}

//Create Liked List
struct node* create(struct node* start)
{
    struct node* temp;
    char ans;

    start=(struct node*)malloc(sizeof(struct node));
    temp=start;

    while (1)
    {
        printf("Enter an integer:");
        scanf("%d",&temp->info);
        fflush(stdin);

        printf("Continue(Y/N)?: ");
        scanf("%c",&ans);
        if(ans=='Y' || ans=='y')
        {
            temp->link=(struct node*)malloc(sizeof(struct node));
            temp=temp->link;
            
        }
        else
        {
            temp->link=NULL;
            return start;
        }
    }
}

//Insert element at the end of the linked list
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