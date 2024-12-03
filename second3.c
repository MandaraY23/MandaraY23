#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of processes:");
	scanf("%d",&n);
	int p[n],bt[n],wt[n],tat[n],pr[n];
	printf("enter the priority of process:");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&pr[i]);
	}
	printf("enter the burst time for %d processes\n",n);
	for(int i=1;i<=n;i++)
	{
		p[i]=i;
		scanf("%d",&bt[i]);
	}
	//sorting
	int temp;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(pr[i]>pr[i])
			{
				temp=pr[i];
				pr[i]=pr[j];
				pr[j]=temp;

				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;

				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	//calculate waiting time
	wt[1]=0;
	for(int i=2;i<=n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
	}
	for(int i=1;i<=n;i++)
	{
		tat[i]=wt[i]+bt[i];
	}
	for(int i=1;i<=n;i++)
	{
		printf("processes %d	%d	%d	%d\n",pr[i],bt[i],wt[i],tat[i]);
	}
}
