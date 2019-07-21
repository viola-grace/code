#include<stdio.h>
#include<stdlib.h>

int main() {
  int n,i,j,res;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  res=arr[0];
  for(i=1;i<n;i++)
  {
      res=res^arr[i];
  }
  printf("%d",res);
  
}
