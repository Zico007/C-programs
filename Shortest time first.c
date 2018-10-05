//Created by Isaac Ogunfolaju
//CSC/2016/0033
//Shortest Time First

#include<stdio.h>

void main()
{
    int burstTime[20],p[20],waitTime[20],tat[20];
	int i,j,n,total=0,pos,temp;
    float avg_waitTime,avg_tat;

    printf("Enter number of process:");
    scanf("%d",&n);
    printf("\nEnter Burst Time:\n");

    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&burstTime[i]);
        p[i]=i+1;         
    }

    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(burstTime[j]<burstTime[pos])
                pos=j;
        }

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

    avg_waitTime=(float)total/n;    
    total=0;

    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=burstTime[i]+waitTime[i];   
        total+=tat[i];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",p[i],burstTime[i],waitTime[i],tat[i]);
    }

    avg_tat=(float)total/n; 
    printf("\n\nAverage Waiting Time=%f",avg_waitTime);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
}
