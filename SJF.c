#include <stdio.h>
int main()
{
    int at=0, bt[20], wt[20], p[20], tat[20], i, j, n, total=0, T=0, pos, temp;
    float avg_wt, avg_tat;
    printf("Enter number of process: ");
    scanf("%d", &n);
    printf("\nEnter burst time: \n");
    for(i=0;i<n;i++)
    {
        printf("p%d: ", i+1);
        scanf("%d", &bt[i]);
        p[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(i=i+j;j<n;j++)
        {
        if(bt[j]<bt[pos])
            pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]+=bt[j];
            total+=wt[i];
        }
    }
    avg_wt=(float)total/n;
    printf("\nProcess \t Burst time \t Waiting time \t Turnaround time");
    for(i=0;i<n;i++)
    {
    tat[i]=bt[i]+wt[i];
    total+=tat[i];
    printf("\n%d \t %d \t\t %d \t\t\t %d", p[i],bt[i],wt[i],tat[i]);
    }
    avg_tat=(float)total/n;
    printf("\n\naverage writing time: %f", avg_wt);
    printf("\naverage turn around time: %f\n", avg_tat);
}
