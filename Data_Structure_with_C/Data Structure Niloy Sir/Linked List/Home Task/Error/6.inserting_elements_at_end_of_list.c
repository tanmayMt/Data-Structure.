#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
struct node* create(struct node*);
void print_elements(struct node*);
struct node* insert_end(struct node*,int);

int main()
{
    struct node* head;
    head=NULL;

    head=create(head);
    print_elements(head);
    
    int n;
    printf("Enter the element to be inserted at end of list: ");
    scanf("%d",&n);
    head=insert_end(head,n);
    print_elements(head);
}

struct node* create(struct node* start)
{
    struct node* temp;
    int count;
    char ans;

    count=0;
    temp=(struct node*)malloc(sizeof(struct node));
    start=temp;

    while (1)
    {
        printf("Enter element(%d): ",++count);
        scanf("%d",&temp->info);
        fflush(stdin);

        printf("Continue(Y/N)?:");
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

void print_elements(struct node* start)
{
    struct node* temp;
    temp=start;
    
    if(temp==NULL)
    {
        printf("Linked list is Empty\n");
        exit(1);
    }
    while(temp != NULL)
    {
        printf("%d ",temp->info);
        temp=temp->link;
    }
    printf("\n");
}

struct node* insert_end(struct node* start,int n)
{
    struct node* temp;
    struct node* ptr;

    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=n;
    temp->link=NULL;

    ptr=start;
    while (ptr != NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
    return start;
}