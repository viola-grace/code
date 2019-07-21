#include<stdio.h>
#include<stdlib.h>

int main() {
  int n,i,j,max=-99999,sum=0;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j=j+2)
      {
         sum=arr[i]+arr[j];
         if(max<sum)
         {
             max=sum;
         }
      }
  }
  printf("%d",max);
  
}
