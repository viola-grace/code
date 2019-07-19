#include<stdio.h>

int main() {
   int n,k,i,j,fix=0,l,flg=0,count=0;
   scanf("%d %d",&n,&k);
   int arr[n][k],mat[n][k],res[n*k],r=0,t;
   for(i=0;i<n;i++)
   {
       for(j=0;j<k;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   for(j=0;j<k;j++)
   {
       fix=arr[0][j];
       flg=0;
       count=0;
       for(l=1;l<n;l++)
       {
       for(i=0;i<k;i++)
       {
            if(arr[l][i]==fix)
            {
                flg=1;
            }
       }
       if(flg==1)
       {
           count++;
           flg=0;
       }
       flg=0;
       }
   
       if(count==n-1)
       {
           res[r++]=fix;
       }
   }
   for(i=0;i<r;i++)
   {
       for(j=i+1;j<r;j++)
       {
           if(res[i]>res[j])
           {
               t=res[i];
               res[i]=res[j];
               res[j]=t;
           }
       }
   }
   for(i=0;i<r;i++)
   {
       printf("%d ",res[i]);
   }
}
