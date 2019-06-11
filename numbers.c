#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,m,iter;
    int flg=0;
    scanf("%ld %ld",&n,&m);

    for(iter=n+1;iter<m;iter++)
    {
        if(iter%2!=0)
        {
            printf("%d ",iter);
        }
    }
}

