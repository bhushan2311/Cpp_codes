#include<stdio.h>

/*void search(int item)
{
    int a[]={12,13,17,23,25,30,47,56,69,71,83,91};
    int l=0,u=11,m;
    while(l<=u)
    {
        m=(l+u)/2;
        if(item==a[m])
        {
           printf("\nSearch Successful");
           return;
        }
        else if(item>a[m])
            l=m+1;
        else
            u=m-1;
    }
    printf("\nSearch Unsuccessful");
}

int main()
{
    search(75);
    search(23);
}
*/

void search()
{
    int a[100];
    int l=0,n,m,item;
    printf("Enter array size:");
    scanf("%d",&n);
    int u=n-1;

    printf("Enter %d Array Elements must in Sorted type:",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Array Elements are :");
    for(int i=0;i<n;i++)
        printf(" %d ",a[i]);

        printf("\nEnter element to be searched:");
        scanf("%d",&item);

        while(l<=u)
        {
            m=(l+u)/2;
            if(item==a[m]){
                printf("\nSearch Successful,Element is at position %d",m+1);
                return;
            }
            else if(item<a[m])
                u=m-1;
            else
                l=m+1;
        }
        printf("Search Unsuccessful,Element does not Exist in an Array!!!");
}

int main()
{
    search();
}

























