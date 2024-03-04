#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create_node()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return (n);
};

void push(struct node **s,int item)
{
    struct node *n;
    n=create_node();
    if(n!=NULL){
    n->data=item;
    n->next=*s;
    *s=n;
    }
}

int pop(struct node **s)
{
    int item;
    struct node *r;
    if(*s==NULL){
    printf("Stack is Empty");
    return;
}
    else
    {
        item=(*s)->data;
        r=*s;
        *s=r->next;
        free(r);
        return (item);
    }
}

int peek(struct node **s)
{
    if(*s==NULL)
    {
        printf("stack is empty");
        return;
    }
    else
    {
        return((*s)->data);
    }
}

int main()
{
    struct node *s;                   //s=stack use
    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    printf(" %d ",pop(&s));
    printf(" %d ",peek(&s));
}
