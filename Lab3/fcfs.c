#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,RQ[100],i,diff,SeekTime=0;
   printf("Enter the number of Request:-");
   scanf("%d",&n);
   printf("Enter the Requests sequence :-\n");
   for(i=1;i<=n;i++)
   {
     scanf("%d",&RQ[i]);
   }
   printf("Enter initial head position :-");
   scanf("%d",&RQ[0]);

   // logic for FCFS disk scheduling
   printf("Movement of Cylinders\n");
   for(i=0;i<n;i++)
   {
     diff= abs(RQ[i+1]-RQ[i]);
     SeekTime+=diff;
     printf("Move from %d to %d with SeekTime %d\n",RQ[i],RQ[i+1],diff);
   }
   printf("Total SeekTime is %d",SeekTime);
   return 0;
}