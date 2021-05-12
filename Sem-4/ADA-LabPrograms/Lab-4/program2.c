#include<stdio.h>
//#include<conio.h>
//#include<process.h>
#include<stdlib.h>
int a[11][11],vis[11],n;

void dfs(int v)
{
	vis[v]=1;
	printf("%d --> ",v);
	for(int i=1;i<=n;i++)
	{
		if((a[v][i]==1)&&(vis[i]==0))
			dfs(i);
	}
}

void main()
{
	int src;
	printf("enter no of vertices \n");
	scanf("%d",&n);
	printf("enter adjacency matrix :\n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}
	
	for(int i=1;i<=n;i++)
		vis[i]=0;
	
	printf("enter source vertex \n");
	scanf("%d",&src);
	printf("nodes reachable from source node %d are :\n",src);
	dfs(src);
	////getch();
	printf("\n");
	int f=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
		printf("given graph is connected \n");
	else
		printf("given graph is not connected \n");
}
