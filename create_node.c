#include<stdio.h>
#include<stdlib.h>

// Created single Node
/*struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *start=NULL;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the number.");
    scanf("%d",&temp->data);
    temp->link=NULL;
    printf("%d",temp->data);
    return 0;
}*/

//Created 3 Nodes
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *start=NULL;
    struct node *second =NULL;
    struct node *third=NULL;

    start=(struct node*)malloc(sizeof(struct node*));
    start->data=1;
    start->link=second;
    printf("%d",start->data);

    second=(struct node*)malloc(sizeof(struct node*));
    second->data=2;
    second->link=third;
    printf("%d",second->data);

    third=(struct node*)malloc(sizeof(struct node*));
    third->data=3;
    third->link=NULL;
    printf("%d",third->data);
    return 0;
}
