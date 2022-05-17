#include<stdio.h>
#include<alloc.h>
#include<conio.h>
typedef struct lklist
{
int info;
struct lklist*next;
}node;
void main()
{
node*head;
node*temp;
node*ptr;
int ch,data;
clrscr();
head=(node*)malloc(sizeof(node));
temp=(node*)malloc(sizeof(node));
{
printf("1:Insert at begining\n");
printf("2:Insert at end\n");
printf("3:Insert after element\n");
printf("4:Delete at beging\n");
printf("5:Delete at end\n");
printf("6:Delete after element\n");
printf("enter your choice");
scanf("%d",&ch);
}
switch(ch)
{
case 1:
printf("enter the data you want to insert at begining");
scanf("%d",&data);
if(head!=NULL)
{
temp->next=head;
head=temp;
}
printf("\ndata inserted at begining successfully");
break;
case 2:
printf("enter the data you want to insert at end");
scanf("%d",&data);
ptr=head;
if(ptr!=NULL)
{
ptr=ptr->next;
temp->next=NULL;
temp=ptr;
}
printf("data inserted at end successfully");
break;
case 3:
printf("inter the data you want to insert after element");
scanf("%d",&data);
}
}

