#include<stdio.h>

int main() {
   int n,i,prod=1;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       prod*=arr[i];
   }
   for(i=0;i<n;i++)
   {
       printf("%d",prod/arr[i]);
       if(i<n-1)
       {
           printf(" ");
       }
   }
}
