#include <stdio.h>
void main()
{
    int i,Nop,sum=0,count=0,y,quant,wt=0,tat=0,at[10],bt[10],temp[10];
    float avg_wt,avg_tat;
    printf("Total no. of process in the system ");
    scanf("%d", &Nop);
    y=Nop;
    for(i=0;i<Nop;i++)
    {
        printf("Enter the arrival and burst time in the process [%d] \n", i+1);
        printf("Arrival time is  \t");
        scanf("%d",&at[i]);
        printf("\nBurst time is  \t");
        scanf("%d", &bt[i]);
        temp[i]=bt[i];
     }
     printf("Enter the time quantum for the process \n");
     scanf("%d", &quant);
     for(sum=0;i=0;y!=0)
     {
         if(temp[i]<=quant&&temp[i]>0)
         {
             sum=sum+temp[i];
             temp[i]=0;
             count=1;
         }
         else if(temp[i]>0)
         {
             temp[i]=temp[i]-quant;
             sum=sum+quant;
         }
         if(temp[0]==0&&count==1)
         {
             y--;
             printf("\nProcess No. %d\t\t %d\t\t %d\t\t %d", i+1,bt[i],sum-at[i],sum-at[i]-bt[i]);
             wt=wt+sum-at[i]-bt[i];
             tat=tat+sum-at[i];
             count=0;
         }
         if(i==Nop-1)
         {
             i=0;
         }
         else if(at[i+1]=sum)
         {
             i++;
          }
          else
          {
              i=0;
          }
      }
      avg_wt=wt*1.0/Nop;
      avg_tat=tat*1.0/Nop;
      printf("Avg. turn around time : \t %f", avg_tat);
      printf("\nAvg. waiting time: \t %f", avg_wt);
  }
        
