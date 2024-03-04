#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
};

struct node *start=NULL;

void create()
{
    struct node *temp,*n;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter no.");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        n=start;
        while(n->next!=NULL)
        {
            n=n->next;
        }
        n->next=temp;
        temp->pre=n;
    }
}

void view()
{
    struct node *t;
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        t=start;
        while(t!=NULL)
        {
            printf("%d ",t->data);
            t=t->next;
        }
    }
}

void insert_begin()
{
    struct node *t,*n;
    t=(struct node *)malloc(sizeof(struct node));
    printf("Enter no.");
    scanf("%d",&t->data);
    if(start==NULL)
    {
        start=t;
    }
    else
    {
        n=start;
        n->pre=t;
        t->next=start;
        start=t;
    }
}

void insert_pos()
{
    struct node *temp,*ptr;
    int pos,i;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter position:");
    scanf("%d",&pos);
    printf("Enter number");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(pos==0)
    {
        temp->next=start;                  //similar condition of insert_begin()
        start=temp;
    }
    else
    {
        ptr=start;
        for(i=1;i<pos-1;i++)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        temp->pre=ptr;
        ptr->next=temp;
    }

}

void delet_begin()
{
    struct node *p;
    if(start==NULL)
    {
        printf("List is Empty");
    }
    else
    {
        p=start;
        start=start->next;
        free(p);
    }
}

void view_reverse()
{
    /*struct node *p;
    p=start;
    if(start==NULL)
    {
        printf("List is Empty");
        return;
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        while(p!=NULL)
        {
            printf("%d ",p->data);
            p=p->pre;
        }
    }*/
    struct node *ptr1,*ptr2;
    ptr1=start;
    ptr2=ptr1->next;

    ptr1->next=NULL;
    ptr1->pre=ptr2;
    while(ptr2!=NULL)
    {
        ptr2->pre=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        printf("%d ",ptr1->data);
        ptr2=ptr2->pre;
    }
    start=ptr1;
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n\n1.Create List");
        printf("\n2.View List in Forward order");
        printf("\n3.Insert begin");
        printf("\n4.Insert at position");
        printf("\n5.Delete from begin");
        printf("\n6.View List in Reverse order");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            view();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_pos();
            break;
        case 5:
            delet_begin();
            break;
        case 6:
            view_reverse();
            break;
        default:
            printf("Invalid Choice");
        }
    }
}
