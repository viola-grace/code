int main() {
    int i,n,len=0,k=0;
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
        printf("%d ",merge[i]);
    }
}
