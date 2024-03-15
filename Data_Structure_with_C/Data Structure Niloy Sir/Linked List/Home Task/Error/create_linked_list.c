#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node* link;
};

void create_linked_list(struct node** head)
{
    struct node* temp;
    char ans;
    temp=(struct node*)malloc(sizeof(struct node));
    *head=temp;
    while (1)
    {
        printf("Enter elements for linked List: ");
        scanf("%d",&temp->info);
        fflush(stdin);
        
        printf("Continue(Y/N)?: ");
        scanf("%c",&ans);

        if (ans=='Y' || ans=='y')
        {
            temp->link=(struct node*)malloc(sizeof(struct node));
            temp=temp->link;
        }
        else
        {
            temp->link=NULL;
            break;
        }   
    }
}