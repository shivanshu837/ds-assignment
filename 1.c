//MERGE SORT
#include<stdio.h>
int b[10];
void ms(int a[],int lb,int mid,int ub)
{
    int i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid&&j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(j>ub){
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
}
void mergeit(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(ub+lb)/2;
        mergeit(a,lb,mid);
        mergeit(a,mid+1,ub);
        ms(a,lb,mid,ub);
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
    mergeit(a,0,9);
     for(int j=0;j<10;j++)
    {
        printf("%d ",b[j]);
    }
}
