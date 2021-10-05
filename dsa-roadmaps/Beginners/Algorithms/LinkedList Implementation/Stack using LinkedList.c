#include<stdio.h>
struct node
{
int data;
struct node *next;
};*top;
void push()
{
int item;
printf("\nenter the item:");
scanf("%d",&item);
struct node *p= (struct node*)malloc(sizeof(struct node));
p->data = item;
if(top == NULL)
p->next = NULL;
else
p->next = top;
top = p;
}
void pop()
{
struct node *temp=top;
if(top == NULL)
printf("\nStack is Empty\n");
else{
temp = top;
top= temp->next;
free(temp);
}
}
void display()
{
struct node *temp=top;
if(temp!=NULL)
{
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
else
printf("stack is empty");
}
void main()
{
int choice=0;
do
{
printf("\n1.insert item \n2.delete item \n3.display \n4.exit");
printf("\nenter ur choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();break;
case 2:
pop();break;
case 3:
display();break;
case 4:
printf("Exit");break;
default:
printf("enter valid choice");
}
}while(choice<4);
}
