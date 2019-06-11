#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0&&arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
        else if(i%2!=0&&arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }

}
