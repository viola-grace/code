#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,rem,temp,num=0,iter;
    scanf("%ld",&n);

    temp=n;
    while(n>0)
    {
        rem=n%10;
        num=num*10+rem;
        n/=10;
    }

    if(num==temp)
    {
        printf("yes");
    }else{
        printf("no");
    }
    }

