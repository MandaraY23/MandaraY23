#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of processes:");
    scanf("%d",&n);
    int bt[n],wt[n],tat[n];
    printf("enter the burst time for %d process\n",n);
    for(int i=1;i<=n;i++)
    {
       scanf("%d",&bt[i]);
    }
    //calculate the waiting time
    wt[1]=0;
    for(int i=2;i<=n;i++)
    {
       wt[i]=wt[i-1]+bt[i-1];
    }
    //calculate the turn around time
    for(int i=1;i<=n;i++)
	{
   	  tat[i]=bt[i]+wt[i];
	}
    for(int i=1;i<=n;i++)
	{
	   printf("processes %d		%d	%d	%d\n",i,bt[i],wt[i],tat[i]);
	}
}
