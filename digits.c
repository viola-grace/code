#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int c=0,n;
    scanf("%ld",&n);
    while(n>0)
    {
        n/=10;
        c++;
    }
    printf("%ld",c);

}
