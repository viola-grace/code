#include<stdio.h>
#include<stdlib.h>


int main() {
  int n,i,j,minI,minJ,min=99999,sum=0;
  scanf("%d",&n);
  int arr[n],res[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          sum=arr[i]+arr[j];
          if(abs(min)>abs(sum))
          {
              min=sum;
              minI=arr[i];
              minJ=arr[j];
          }
      }
  }
  printf("%d %d",minI,minJ);
}
