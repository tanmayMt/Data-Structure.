#include<stdio.h>
#include<stdlib.h>

struct node
{
  struct node *prev;
  float info;
  struct node *next;
};

struct node * create(struct node *);
void display(struct node *);
struct node * insert_before(struct node *,float,float);

int main()
{
  struct node * head;
  int choice;
  float key,n;
  head = NULL; /* initially empty */
  
  while(1)
  {
    printf("\n------ MENU ------\n");
    printf("1. Create the list \n");
    printf("2. Display the list \n");
    printf("3. Insert at the beginning \n");
    printf("4. Insert at the end \n");
    printf("5. Insert before a node \n");
    printf("6. Insert after a node \n");
    printf("7. Delete a node \n");
    printf("8. Search a node \n");
    printf("9. Count number of nodes \n");
    printf("10. Exit \n\n");
    
    printf("Enter your choice ");
    scanf("%d",&choice);
    
    switch(choice)
    {
      case 1: head=create(head);
              break;
      case 2: display(head);
              break;
      case 3: break;
      case 4: break;
      case 5: printf("Enter the node before which the new node to be inserted ");
              scanf("%f",&key);
              printf("Enter the new node to be inserted ");
              scanf("%f",&n);
              head=insert_before(head,key,n);
              break;
      case 6: break;
      case 7: break;
      case 8: break;
      case 9: break;
      case 10: exit(0);
               break;
      default: printf("Wrong choice ");
    }
  }
  return 0;
}


struct node * create(struct node * start)
{
  struct node *temp, *before;
  char ans;
  start=(struct node *)malloc(sizeof(struct node));
  temp=start;
  temp->prev=NULL;
  while(1)
  {
    printf("Enter a real number ");
    scanf("%f",&temp->info);
    printf("Continue ? (Y/N) ");
    getchar();  /* consuming the Enter character */
    scanf("%c",&ans);
    if(ans=='Y' || ans=='y')
    {
      before=temp;
      temp->next=(struct node *)malloc(sizeof(struct node));
      temp=temp->next;
      temp->prev=before;
    }
    else
    {
      temp->next=NULL;
      return start;
    }
  }
}

void display(struct node *temp)
{
  while(temp!=NULL)
  {
    printf("%.2f  ",temp->info);
    temp=temp->next;
  }
  printf("\n");
}

struct node * insert_before(struct node *start,float key,float n)
{
  struct node *temp, *p;
  temp=start;
  while(temp!=NULL)
  {
    if(temp->info==key) /* found */
    {
      p=(struct node *)malloc(sizeof(struct node)); /* creating new node */
      p->info=n;
      p->next=temp;
      p->prev=temp->prev;
      if(temp==start) /* first node */
        start=p;
      else            /* other than first node */
        (temp->prev)->next=p;
      
      temp->prev=p;
      return start;     
    }
    else
      temp=temp->next;
  }
  printf("The requested node is not found \n");
  return start;
}