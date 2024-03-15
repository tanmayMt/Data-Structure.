#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
struct node* create(struct node*);
struct node* insert_begin(struct node*,int);
void print_items(struct node*);

int main()
{
    struct node* head;
    head=NULL;

    head=create(head);
    
    int n;
    printf("Entre the element which will enter at begninnig of the list: ");
    scanf("%d",&n);
    head=insert_begin(head,n);

    print_items(head);
}

struct node*create(struct node* start)
{
    struct node* temp;
    int count;
    char ans;
    count=1;

    start=(struct node*)malloc(sizeof(struct node));
    temp=start;

    while (1)
    {
        printf("Enter %dst element for liked list: ",count);
        scanf("%d",&temp->info);
        fflush(stdin);

        printf("Continue(Y/N)?:");
        scanf("%c",&ans);

        if(ans == 'Y' || ans == 'y')
        {
            temp->link=(struct node*)malloc(sizeof(struct node));
            temp=temp->link;
        }
        else
        {
            temp->link=NULL;
            return start;
        }
        count++;
    }
}

struct node* insert_begin(struct node* start,int n)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));

    temp->info=n;
    temp->link=start;

    start=temp;
    return start;
}

void print_items(struct node* start)
{
    int count;
    count=0;
    if(start==NULL)
      printf("Linked list is empty!\n");

    struct node* ptr=start;
    while (ptr != NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
    printf("\n");
}