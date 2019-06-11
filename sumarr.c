#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,k,iter,arr[10000],sum=0;
    scanf("%ld %ld",&n,&k);
    for(iter=0;iter<n;iter++)
    {
        scanf("%ld",&arr[iter]);
    }
    for(iter=0;iter<k;iter++)
    {
        sum+=arr[iter];
    }
    printf("%ld",sum);
}
