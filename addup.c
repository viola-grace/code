#include<stdio.h>

int main() {
   int n,i,k,j;
   scanf("%d %d",&n,&k);
   int arr[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
            if(arr[i]+arr[j]==k)
            {
                printf("YES");
                return 0;
            }
       }
   }
   printf("NO");
   
   
}
