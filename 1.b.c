//QUICK SORT
/*CONCEPT IS TO SELECT ONE ELEMENT AS A PIVOT ELEMENT AND ALL
 THE VALUES LESS THAN THAT SHOULD BE ON LEFT OF IT AND ALL
 THE VALUES GREATER THAN IT SHOULD BE AT ITS RIGHT*/
#include<stdio.h>
int part(int a[],int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int en=ub,temp;
    while(start<en)
    {
        while(pivot>=a[start])
        {
            start++;
        }
        while(pivot<a[en])
        {
            en--;
        }
        if(en>start)
        {
            temp=a[en];
            a[en]=a[start];
            a[start]=temp;
        }
    }
            temp=a[lb];
            a[lb]=a[en];
            a[en]=temp;
    return en;
}
void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=part(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
void main()
{
    int a[10];
    printf("enter 10 elements : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,9);
   for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
