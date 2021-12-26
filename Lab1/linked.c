#include<stdio.h>
#include<stdlib.h>
void main()
{
  int f[50],i,j,k,st,len,p,a,c;
 
  for(i=0;i<50;i++)
  f[i]=0;

  printf("Enter how many blocks already allocated:");
  scanf("%d",&p);
  printf("Enter the blocks nos that are already allocated:");

  for(i=0;i<p;i++)
  {
    scanf("%d",&a);
    f[a]=1;
  }
  x:
  printf("\nEnter the starting block and length of file:");
  scanf("%d %d",&st,&len);

  k=len;
  if(f[st]==0)
   {
    for(j=st;j<(st+k);j++)
     {
       if(f[j]==0)
        {
          f[j]=1;
          printf("%d--->%d\n",j,f[j]);

        }
        else
        {
           printf("%d Block is  Already Allocated\n",j);
           k++;
        }
      }

    }
   else
     printf("%d starting block is already allocated\n",st);
     printf("Do you want to enter more file(y-1/n-0)");
     scanf("%d",&c);
     if(c==1)
         goto x;
     else
         exit(0);
}
