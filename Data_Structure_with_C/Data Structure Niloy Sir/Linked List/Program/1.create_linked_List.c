#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
struct node* create(struct node*);

int main()
{
    struct node* head;
    head=NULL;
    head=create(head);
    return 0;
}
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