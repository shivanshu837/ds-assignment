#include<stdio.h>

void mergesort(char a[],int i,int j);
void merge(char a[],int i1,int j1,int i2,int j2);

int main()
{
	char a[]="polynomial";
	char b[]="test case";
	mergesort(b,0,8);
	mergesort(a,0,9);
	printf("\nSorted array is :");
	for(int i=0;i<10;i++)
		printf("%c ",a[i]);
		printf("\nSorted array is :");
	for(int i=0;i<9;i++)
		printf("%c ",b[i]);

	return 0;
}

void mergesort(char a[],int i,int j)
{
	int mid;
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		//left recursion
		mergesort(a,mid+1,j);	//right recursion
		merge(a,i,mid,mid+1,j);	//merging of two sorted sub-arrays
	}
}

void merge(char a[],int i1,int j1,int i2,int j2)
{
	char temp[50];	//array used for merging
	int i,j,k;
	i=i1;	//beginning of the first list
	j=i2;	//beginning of the second list
	k=0;

	while(i<=j1 && j<=j2)	//while elements in both lists
	{
		if(a[i]<=a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=j1)	//copy remaining elements of the first list
		temp[k++]=a[i++];

	while(j<=j2)	//copy remaining elements of the second list
		temp[k++]=a[j++];

	//Transfer elements from temp[] back to a[]
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}

