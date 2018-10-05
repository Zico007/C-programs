//Created By Isaac Ogunfolaju
//CSC/2016/0033
//First Come First Served

#include<stdio.h>

void main()
{
    int num,burstTime[20],waitTime[20],tat[20],avwaitTime=0,avtat=0,i,j;

    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&num);
    printf("\nEnter Process Burst Time\n");

    for(i=0;i<num;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&burstTime[i]);
    }

    waitTime[0]=0;

    for(i=1;i<num;i++)
    {
        waitTime[i]=0;
        for(j=0;j<i;j++)
            waitTime[i]+=burstTime[j];
    }

    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");

    for(i=0;i<num;i++)
    {
        tat[i]=burstTime[i]+waitTime[i];
        avwaitTime+=waitTime[i];
        avtat+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,burstTime[i],waitTime[i],tat[i]);
    }

    avwaitTime/=i;
    avtat/=i;

    printf("\n\nAverage Waiting Time:%d",avwaitTime);
    printf("\nAverage Turnaround Time:%d",avtat);
}
