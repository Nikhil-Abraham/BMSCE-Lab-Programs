#include<stdio.h>
#include<stdlib.h>
int arr[100],n;

void selection_sort()
{
	int temp,small,position;
	for(int i=0;i<n-1;i++)
	{
		small=arr[i];
		position=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<small)
			{
				small=arr[j];
				position=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[position];
		arr[position]=temp;
	}
}
void display()
{
	for(int i=0;i<n;i++)
		printf("%d   ",arr[i]);
	printf("\n");
}


void main()
{

	printf("Enter size of array \n");
	scanf("%d",&n);
	printf("Enter  values\n ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Array Before:\n");
	display();
	selection_sort();
	printf("Array After Sorting :\n");
	display();
}
