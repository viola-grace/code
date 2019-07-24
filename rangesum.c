#include<stdio.h>

int main() {
   int n,k,i,st,end,sum=0,j;
   scanf("%d %d",&n,&k);
   int arr[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<k;i++)
   {
       scanf("%d %d",&st,&end);
       for(j=st;j<=end;j++)
       {
           sum+=arr[j];
       }
       printf("%d\n",sum);
       sum=0;
   }
}
