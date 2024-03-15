#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
#define TRUE 1
#define FALSE 0

struct st
{
  int a[SIZE];
  int front,rear;
};
typedef struct st QUEUE;

void insert(QUEUE *,int);
int removeElement(QUEUE *);
int empty(QUEUE *);

int main()
{
  QUEUE q;
  int choice,n;
  
  q.front=q.rear=SIZE-1; /* Initially empty */
  
  while(1)
  {
    printf("--- MENU --- \n");
    printf("1. Insert \n");
    printf("2. Remove \n");
    printf("3. Exit \n\n");
    printf("Enter your choice ");
    scanf("%d", &choice);
    
    switch(choice)
    {
      case 1: printf("Enter an integer to insert ");
              scanf("%d", &n);
              insert(&q,n);
              break;
      case 2: n=removeElement(&q);
              printf("%d is removed \n", n);
              break;
      case 3: exit(1);
              break;
      default: printf("Wrong choice \n");
    }
  }
  return 0;
}

void insert(QUEUE *pq,int n)
{
  if(pq->rear==SIZE-1)           /* set rear */
    pq->rear=0;
  else
    (pq->rear)++;
    
  if(pq->rear==pq->front)        /* test overflow */
  {
    printf("Queue overflow \n");
    if(pq->rear==0)
      pq->rear=SIZE-1;
    else
      (pq->rear)--;
    return;
  }
    
  pq->a[pq->rear]=n;
}

int removeElement(QUEUE *pq)
{
  printf("pq->front = %d  pq->rear = %d\n",pq->front,pq->rear);
  if(empty(pq)==TRUE)            /* test for empty */
  {
    printf("The queue is empty \n");
    exit(1);
  }
  
  if(pq->front==SIZE-1)          /* set front */
    pq->front=0;
  else
    (pq->front)++;
    
  return pq->a[pq->front];
}

int empty(QUEUE *pq)
{
  return (pq->front==pq->rear)?TRUE:FALSE;
}
