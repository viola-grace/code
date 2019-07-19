#include<stdio.h>

int main() {
  int n,k,i,j,flg=0;
  scanf("%d %d",&n,&k);
  int arr[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
         if(arr[i]+arr[j]==k)
         {
            flg=1;
            break;
         }
  }
  if(flg==0)
  {
      printf("no");
  }else
  {
      printf("yes");
  }
}
