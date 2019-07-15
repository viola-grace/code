#include<stdio.h>

int main() {
   int arr[100],sum=0,flg=0;
   int n,i,j,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           sum=arr[i]+arr[j];
           for(k=j+1;k<n;k++)
            {
                if(sum==arr[k])
                {
                    flg=1;
                    break;
                }
            }
            if(flg==1)
            {
                printf("%d %d %d\n",arr[i],arr[j],sum);
            }
            flg=0;
            sum=0;
       }
   }
}
