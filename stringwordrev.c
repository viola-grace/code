#include<stdio.h>
#include<string.h>

int main() {
   char str[100][100],temp;
   int len=0,i,wcount,k=0,j;
   while((scanf("%s",str[len]))>0)
   {
       wcount=strlen(str[len]);
       
       for(i=wcount-1,j=0; j<i; i--,j++)
       {
           temp=str[len][i];
           str[len][i]=str[len][j];
           str[len][j]=temp;
       }
       len++;
   }
   for(i=0;i<len;i++)
   {
       printf("%s ",str[i]);
   }
   
   
}
