#include<stdio.h>

int main() {
   int arr[100],arr1[100],flg=0;
   int n,m,i,j;
   scanf("%d %d",&n,&m);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<m;i++)
   {
       scanf("%d",&arr1[i]);
       for(j=0;j<n;j++)
       {
           if(arr1[i]==arr[j])
           {
              flg=1; 
              break;
           }else
           {
               flg=0;
           }
       }
       if(flg==0)
       {
           printf("NO");
           return 0;
       }
   }
   if(flg==1)
   {
       printf("YES");
   }
  
}
