#include<stdio.h>

int main() {
   int n,k,i,arr[100],safe;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   while(k--)
   {
       safe=arr[0];
       for(i=0;i<n;i++)
       {
        arr[i]=arr[i+1];
       }
       arr[n-1]=safe;
   }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
        {
            printf(" ");
        }
    }
}

