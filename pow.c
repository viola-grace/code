#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,k,prod=1,iter;
    scanf("%ld %ld",&n,&k);

    for(iter=0;iter<k;iter++)
    {
        prod*=n;
    }
    printf("%ld",prod);
}
