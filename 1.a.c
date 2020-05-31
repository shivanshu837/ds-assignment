//INSERTION SORT
//SORT IN ASCENDING ORDER
#include<stdio.h>
int main()
{
    int a[16];
    int temp,t,j,i;
    printf("enter 5 integers : ");
    for(i=0;i<16;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<16;i++)
    {
        j=i+1;
        temp=a[j];
        while(j>=0&&temp<a[j-1])
        {
            a[j]=a[j-1];
            j--;
        }
        a[j+1]=temp;
    }
     printf("sorted array is : ");
    for(i=0;i<16;i++)
    {
        printf("%d ",a[i]);
    }
}
