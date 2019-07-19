#include<stdio.h>

int main() {
   int n,i,j,count=0;
   scanf("%d",&n);
   
   int mat[n+2][n+2];
   
   for(i=0;i<n+2;i++)
   {
       for(j=0;j<n+2;j++)
       {
           if(i==0||j==0||(i==(n+2)-1)||(j==(n+2)-1))
           {
               mat[i][j]=0;
           }else
           {
            scanf("%d",&mat[i][j]);
           }
       }
   }
   
  for(i=1;i<n+1;i++)
  {
      for(j=1;j<n+1;j++)
      {
          if(mat[i][j]==1)
            if(mat[i-1][j]==0 && mat[i+1][j]==0 && mat[i][j-1]==0 && mat[i][j+1]==0 && mat[i-1][j+1]==0 && mat[i-1][j-1]==0 && mat[i+1][j-1]==0 && mat[i+1][j+1]==0)
            {
                count++;
            }
      }
  }
  printf("%d",count);
}
