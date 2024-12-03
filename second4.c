#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of processes:");
	scanf("%d",&n);
	int bt[n],qt,wt[n],tat[n];
	printf("enter the burst time for %d process\n",n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&bt[i]);
	}
	printf("enter the time quantum:");
	scanf("%d",&qt);
	int rem_bt[n];//remaining burst time
	//copy the values of bt[] to rem_bt[]
	for(int i=1;i<=n;i++)
	{
		rem_bt[i]=bt[i];
	}
	int time=0;
	while(1)
	{
		int done=1;
		for(int i=1;i<=n;i++)
		{
			if(rem_bt[i]>0)
			{
				done=0;
				if(rem_bt[i]>qt)
				{
					time=time+qt;
					rem_bt[i]-=qt;
				}
				else
				{
					time=time+rem_bt[i];
					wt[i]=time-bt[i];
					rem_bt[i]=0;
				}
			}
		}
	if(done==1)
	break;
	}
	//calculate turn around time
	for(int i=1;i<=n;i++)
	{
		tat[i]=bt[i]+wt[i];
	}
	for(int i=1;i<=n;i++)
	{
		printf("processes%d	%d	%d	%d\n",i,bt[i],wt[i],tat[i]);
	}
}



