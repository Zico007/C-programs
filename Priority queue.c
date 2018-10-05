//Created by Isaac Ogunfolaju
//CSC/2016/0033
//Priority Queue
#include<stdio.h>

void main()
{
    int burstTime[20],p[20],waitTime[20],tat[20],pr[20];
	int i,j,n,total=0,pos,temp,avg_waitTime,avg_tat;

    printf("Enter Total Number of Process:");
    scanf("%d",&n);
    printf("\nEnter Burst Time and Priority\n");

    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&burstTime[i]);
        printf("Priority:");
        scanf("%d",&pr[i]);
        p[i]=i+1;       
    }

    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }

        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;

        temp=burstTime[i];
        burstTime[i]=burstTime[pos];
        burstTime[pos]=temp;

        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }

    waitTime[0]=0;

    for(i=1;i<n;i++)
    {
        waitTime[i]=0;
        for(j=0;j<i;j++)
            waitTime[i]+=burstTime[j];

        total+=waitTime[i];
    }

    avg_waitTime=total/n;
    total=0;

    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");

    for(i=0;i<n;i++)
    {
        tat[i]=burstTime[i]+waitTime[i];
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],burstTime[i],waitTime[i],tat[i]);
    }

    avg_tat=total/n;

    printf("\n\nAverage Waiting Time=%d",avg_waitTime);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
}
