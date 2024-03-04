#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
void create();
void view();
void insert_begin();
void insert_pos();
void delet_begin();

struct node *create_node()
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    return (ptr);
};
void create()
{
    struct node *temp,*n;
    temp=create_node();
    //temp=(struct node*)malloc(sizeof(struct node));           //use only when create_node() function  is not created
    printf("Enter the no:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        n=start;
        while(n->next!=NULL){
        n=n->next;
        }
        n->next=temp;
    }
}

void view()
{
    struct node *p;
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        p=start;
        while(p!=NULL)
        {
            printf("%d ",p->data);
            p=p->next;
        }
    }
}

void insert_begin()
{
    struct node *t;
    t=create_node();
    //t=(struct node*)malloc(sizeof(struct node));               //use only when create_node() function  is not created
    printf("Enter the no:");
    scanf("%d",&t->data);
    t->next==NULL;
    if(start==NULL)
    {
        start=t;
    }
    else
    {
        t->next=start;
        start=t;
    }
}

void insert_pos()
{
   struct node *temp,*ptr;
    int pos,i;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the position at which you want to insert the value:");
    scanf("%d",&pos);                                                               // '&'amphersand is necessary....
    printf("Enter the value:");
    scanf("%d",&temp->data);                                                        // '&'amphersand is necessary....
    temp->next=NULL;
    if(pos==0)
    {
        temp->next=start;
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
        ptr->next=temp;
    }
    /* struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("nEnter the position for the new node to be inserted:t");
        scanf("%d",&pos);
        printf("nEnter the data value of the node:t");
        scanf("%d",&temp->data) ;

        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=1,ptr=start;i<pos-1;i++) { ptr=ptr->next;

                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }*/

}
void delet_begin()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
       ptr=start;
       start=start->next;
       free(ptr);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n\n1.Enter value to the list:");
        printf("\n2.View the list");
        printf("\n3.Insert value at begin");
        printf("\n4.Delete value from begin");
        printf("\n5.Insert value at position");
       // printf("\n6.Delete value from end");
        printf("\n\nEnter your choice:");
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
            delet_begin();
            break;
        case 5:
            insert_pos();
            break;
        /*case 6:
            delet_end();
            break;*/
        default:
            printf("Invalid choice!!!");
            break;
        }
    }
    return 0;
}


/*void delet_end()
{
    struct node *t,*p;
    if(start==NULL)
    {
        printf("List is Empty");
    }
    else if(start->next=NULL)
    {
        t=start;
        start=NULL;
        free(t);
    }
    else
    {
        t=start;
        while(t->next!=NULL)
           {
            p=t;
            t=t->next;
           }
            p->next=NULL;
            free(t);
    }
}*/
