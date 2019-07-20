#include<stdio.h>

int main() {
   int n,m,i,j,fix,k,fixrow,fixcol;
   scanf("%d %d",&n,&m);
   int arr[n][m],res[n][m];
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            res[i][j]=arr[i][j];
        }
   }
  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          if(arr[i][j]==0)
          {
              fixrow=i;
              fixcol=j;
              k=0;
              while(k<n)
              {
                  res[k++][fixcol]=0;
              }
              k=0;
              while(k<m)
              {
                  res[fixrow][k++]=0;
              }
          }
      }
  }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
        {
            printf("%d",res[i][j]);
             if(j<m-1)
            {
                printf(" ");
            }
        }
        printf("\n");
   }
}
