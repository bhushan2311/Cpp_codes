#include<stdio.h>

void sort()
{
    int a[]={5,7,2,9};
    int round,i,t,n,flag;
    printf("Enter Array Size:");
    scanf("%d",&n);
    printf("Enter %d Array Elements:",n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("\nEntered Elements are:");
    for(i=0;i<n;i++)
        printf(" %d ",a[i]);

        for(round=1;round<n;round++)
        {
            flag=0;
            for(i=0;i<4-1;i++)
                if(a[i]>a[i+1])
            {
                flag=1;
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
        if(flag==0)
            printf("\nRound %d",round);
        printf("\nSorted Elements are:");
        for(i=0;i<n;i++)
        {
            printf(" %d ",a[i]);
        }
}

int main()
{
    sort();
}
