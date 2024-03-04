#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
struct node
{
    int data;
    struct node *link;
};
struct node *start=NULL;

void createNode()
{
    struct node *temp,*t;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the number ");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if(start==NULL)
        start=temp;
    else
    {
        t=start;
        while(t->link!=NULL)
            t=t->link;
            t->link=temp;
    }
}


void insert_end()
{
    struct node *temp,*t;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the number ");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if(start==NULL)
        start=temp;
    else
    {
        t=start;
        while(t->link!=NULL)
            t=t->link;
            t->link=temp;
    }
}

void delNode()
{
    struct node *d;
    if(start==NULL)
        printf("List is empty");
    else
    {
         d=start;
         start=start->link;
         free(d);
    }
}

void viewList()
{
    struct node *v;
    if(start==NULL)
        printf("List is empty");
    else
    {
        v=start;
        while(v!=NULL)
        {
            printf("\n%d",v->data);
            v=v->link;
        }
    }
}

void insert_begin()
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number ");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    if(start==NULL)
    {
        start=ptr;
    }
    else
        {
            ptr->link=start;
            start=ptr;
        }
}

void main()
{
    while(1)
    {
        int ch;
    printf("\n\n1.Add value to list");
    printf("\n2.View list");
    printf("\n3.Insert value at end");
    printf("\n4.Delete first value from list");
    printf("\n5.Insert value at begin");
    printf("\n6.Exit");
    printf("\n\nEnter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
case 1:
    createNode();
    break;
case 2:
    viewList();
    break;
case 3:
    insert_end();
    break;
case 4:
    delNode();
    break;
case 5:
    insert_begin();
    break;
case 6:
    exit(0);
default :
    printf("invalid choice");
    }
   }
}
