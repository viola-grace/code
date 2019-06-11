#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,iter,sum=0;
    scanf("%ld",&n);
    for(iter=1;iter<n;iter++)
    {
        sum+=iter;
    }
    printf("%ld",sum);
}
