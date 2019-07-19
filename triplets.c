#include<stdio.h>
int main()
{
    int n,count=0,i,k,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]<arr[j]&&arr[j]<arr[k])
                {
                    count++;
                }
            }
        }
    }
    printf("%d",count);
}
