#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int linear(int i,int n,int arr[])
{
	int item=200000;

	if(i<n)
		{
			if(arr[i]==item)
				return(i+1);
			else
				linear(++i,n,arr);
		}
		else
			return -1;

}

int binary(int l,int u,int mid,int n,int arr[])
{
	int item=500000;

	if(l<=u)
	{
		if(arr[mid]==item)
		{
			return mid+1;
		}
		else if(arr[mid]<item)
			l=mid+1;
		else
			u=mid-1;

		mid=(l+u)/2;

		binary(l,u,mid,n,arr);
	}
	else
		return -1;

}

void main()
{
	int ch,n,a[150000],b[150000],flag=-1,l,u,mid;
	clock_t start,end;
	for(;;)
	{

		printf("1.linear search \n2.binary seach \nexit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:n=5000;
			printf("time taken by linear search for different values of n: \n");
			while(n<=145000)
			{
				for(int i=0;i<n;i++)
					a[i]=i;

				start=clock();
		        flag=linear(0,n,a);
				/*if(flag>0)
		printf("value found at position %d \n",flag);
	    else
		printf("value not found\n");*/
	    //delay
		for(int j=0;j<=100;j++);

		end=clock();

		printf("time taken by %d elements = %f secs \n",n,((double)(end-start))/CLOCKS_PER_SEC);
		n=n+10000;
			}
			break;

			case 2:n=5000;
			printf("time taken by binary search for different values of n: \n");
			while(n<=145000)
			{
				for(int i=0;i<n;i++)
					b[i]=i;

				start=clock();
				l=0;
				u=n-1;
				mid=(l+u)/2;
		        flag=binary(l,u,mid,n,b);

		/*if(flag>0)
		printf("value found at position %d\n",flag);
	    if(flag==-1)
		printf("value not found\n");*/

	    //delay
		for(int j=0;j<=100;j++);

		end=clock();

		printf("time taken by %d elements = %f secs \n",n,((double)(end-start))/CLOCKS_PER_SEC);
		n=n+10000;
			}
			break;

			default:exit(0);
		}
	}
}
