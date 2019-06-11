#include<stdio.h>

int main() {
  int n,i,k=0,j,c=0,max=0;
  scanf("%d",&n);
  int arr[n],count[10000]={0};
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
      if(max<arr[i])
      {
          max=arr[i];
      }
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            count[arr[i]]++;

        }
    }

  }

   //printf("*");
   for(i=0;i<n;i++)
   {
       if(count[arr[i]]!=1)
       {
           printf("%d",arr[i]);
       }
   }

}
