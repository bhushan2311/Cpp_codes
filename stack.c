#include<stdio.h>
#include<stdlib.h>

struct stackArray
{
    int top;
    int capacity;
    int *array;
};

struct stackArray * create_stack(int cap)
{
    struct stackArray *stack;
    stack=(struct stackArray*)malloc(sizeof(struct stackArray));
    //printf("Enter stackArray capacity");
    //scanf("%d",&cap);
    stack->capacity=cap;
    stack->top=-1;
    stack->array=(struct stackArray *)malloc(sizeof(int)*stack->capacity);
    return (stack);
}

int isFULL(struct stackArray *stack)
{
    //struct stackArray *stack;
    if(stack->top==stack->capacity-1)
    {
        return 1;
    }
    else
        return 0;
}

int isEmpty(struct stackArray *stack)
{
//    struct stackArray *stack;
    if(stack->top==-1)
        return 1;
    else
        return 0;
}

void push(struct stackArray *stack,int item)
{
   // struct stackArray *stack;
    //int item;
    if(!isFULL(stack))
    {
        stack->top++;
        /*printf("Enter no.");
        scanf("%d",&item);*/
        stack->array[stack->top]=item;
    }
    else
    {
        printf("due stack overflow value %d cant be consider",item);
    }
}

int pop(struct stackArray *stack)
{
    //struct stackArray *stack;
    int item;
    if(!isEmpty(stack))
    {
        item=stack->array[stack->top];
        //printf("Pop value is ",var);

        stack->top--;
        return (item);

    }
    /*else
    {
        printf("stack underflow");
    }*/
    return (-1);
}

int main()
{
    int ch,item;
    struct stackArray *stack;
    stack=create_stack(4);
    while(1)
    {
       // printf("\n\n1.Create");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Exit");
        printf("\nEnter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            /*case 1:
                create_stack();
                break;*/
            case 1:
                 printf("Enter no.");
                 scanf("%d",&item);
                push(stack,item);
                break;
            case 2:
                item=pop(stack);
                if(item==-1)
                    printf("Stack Underflow");
                else
               printf("Pop value is %d",item);
               //printf(item);
                break;
            case 3:
                exit(0);
        }
    }
    return 0;
}
