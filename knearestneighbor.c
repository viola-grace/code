#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
   int n,ele,i,k,j,temp,p;
   scanf("%d %d",&n,&ele);
   int arr[n],sub[n],left[n],t;
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       sub[k++]=abs(arr[i]-ele);
       left[p++]=arr[i];
   }
  
   for(i=0;i<k;i++)
   {
       for(j=i+1;j<k;j++)
       {
           if(sub[i]>sub[j])
           {
           temp=sub[i];
           sub[i]=sub[j];
           sub[j]=temp;
           
           t=left[i];
           left[i]=left[j];
           left[j]=t;
           }
       }
   }

   printf("%d %d %d",left[1],left[2],left[3]);
   
}
