#include<stdio.h>

int main() {
  int n,lim,i,j,temp;
  scanf("%d %d",&n,&lim);
  int arr[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(arr[i]<arr[j])
          {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
  }
  printf("%d",arr[lim-1]);
}
