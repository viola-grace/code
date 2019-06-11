#include<stdio.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
  int n,i,k=0,num=0,flg=0;
  scanf("%d",&n);
  int arr[n],res[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      if(arr[i]==i)
      {
          res[k++]=arr[i];
          flg=1;
      }
  }
  qsort(res, k, sizeof(int), cmpfunc);

    if(flg==0)
    {
        printf("-1");
    }else{
    for(i=0;i<k;i++)
    {
        printf("%d ",res[i]);
    }
    }

}
