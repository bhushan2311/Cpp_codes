#include <stdio.h>

/*void search(int a[],int n,int item)
{
    int flag;
     flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==item){
                flag=0;
            printf("Search Successful");
        }
    }
    if(flag==1)
        printf("search Unsuccessful");
}

int main()
{
    int a[]={12,32,55,243,134,65};
    search(a,6,33);
}*/

/*void search()
{
    int a[5]={11,22,33,44,55};
    int flag=1,item;
    printf("Enter the elements to search from array:a[5]={11,22,33,44,55}\n");
    scanf("%d",&item);
   for(int i=0;i<5;i++)
    {
        if(a[i]==item){
                flag=0;
            printf("search successful");
        }
    }
    if (flag==1)
        printf("search Unsuccessful");
}
*/
void search()
{
    int a[100];
    int n,item,flag=1;

    printf("Enter size of array");
    scanf("%d",&n);

    printf("Enter %d elements",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Entered Elements in an array are:");

    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nEnter the Element to know whether it is in array?");
    scanf("%d",&item);

    for(int i=0;i<n;i++)
    {
        if(a[i]==item){
               // flag=0;
            printf("search successful");
           // printf("\nElement is at %d position",n);                      //Pending
            return;                            //used by removing flag
        }
    }

    //if (flag==1)
        printf("search Unsuccessful");
}

int main()
{
    search();
}
