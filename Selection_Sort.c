#include<stdio.h>

void selection_sort()
{
    int a[1000];
    int i,j,ind,min,temp;
    int n;

    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array Elements:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        ind=i;

        for(j=i+1;j<n;j++)
        {
            if(min>a[j]){
                min=a[j];
                ind=j;
            }
        }
        temp=a[i];
        a[i]=a[ind];
        a[ind]=temp;
    }

    printf("\nsorted elements are:");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}

int main()
{
    selection_sort();
}
