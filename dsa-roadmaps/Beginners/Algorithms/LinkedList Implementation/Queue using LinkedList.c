#include<stdio.h>
struct node
{
int data;
struct node *next;
};
struct node*front=NULL;
struct node*rear=NULL;
void enqueue()
{
int item;
printf("Enter the item to be inserted:");
scanf("%d",&item);
struct node *p=(struct node*)malloc(sizeof(struct node));
p->data=item;
p->next=NULL;
if(front == NULL)
front = rear = p;
else
{
rear -> next = p;
rear= p;
}
}
void dequeue()
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
if(front==NULL)
printf("Queue underflow");
else
{
temp=front;
front=front->next;
free(temp);
}
}
void display()
{
struct node *temp=(struct node*)malloc(sizeof(struct node));
temp=front;
if(front == NULL)
printf("\nEmpty queue\n");
else
    {
while(temp!= NULL)
{
printf("%d\n",temp-> data);
temp= temp-> next;
}
}
}
void main()
{
int choice=0;
do
{
printf("\n1.insert \n2.delete \n3.display \n4.exit");
printf("\nenter ur choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
enqueue();break;
case 2:
dequeue();break;
case 3:
display();break;
case 4:
    printf("Exit");break;
default:
printf("enter valid choice");
}
}while(choice<4);
}
