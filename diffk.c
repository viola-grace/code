#include<stdio.h>
#include<stdlib.h>

int main() {
  int n,i,j,k,c=0;
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
          if(abs((arr[i])-(arr[j]))==k)
          {
              c++;
          }
      }
  }
  printf("%d",c);
  
}
