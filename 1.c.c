//SELECTION SORT
#include<stdio.h>
int main()
{
    int a[5];
    int temp,t,j,i;
    printf("enter 5 integers : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        temp=i;
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
                temp=j;
        }
        t=a[i];
        a[i]=a[temp];
        a[temp]=t;
    }
    printf("sorted array is : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
