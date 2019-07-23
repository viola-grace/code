#include<stdio.h>
int main() {
    int i,n,len=0,k=0,temp,j;
    int arr[1000],merge[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        while((scanf("%d",&arr[len]))>0)
        {
            merge[k++]=arr[len];
            len++;
        }
        int arr[1000]={0};
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(merge[i]>merge[j])
            {
                temp=merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",merge[i]);
        if(i<k-1)
        {
            printf(" ");
        }
    }
}
