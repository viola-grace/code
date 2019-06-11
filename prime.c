#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,iter;
    int flg=0;
    scanf("%ld",&n);

    if(n==2)
    {
        printf("Yes");
        return 0;
    }
    for(iter=2;iter<n;iter++)
    {
        if(n%iter!=0)
        {
            flg=1;
        }
        else{
            flg=0;
            break;
        }
    }
    if(flg==1)
    {
        printf("Yes");
    }else{
        printf("No");
    }
}

