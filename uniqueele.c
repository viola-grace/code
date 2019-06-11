#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main()
{
    long int n,iter,k=0,c=0,jter,max=0;
    scanf("%ld",&n);
    int arr[n];

    for(iter=0;iter<n;iter++)
    {
        scanf("%ld",&arr[iter]);
        if(max<arr[iter])
            max=arr[iter];
    }
    int ans[max];
    for(iter=0;iter<=max;iter++)
    {
        ans[iter]=0;
    }
    for(iter=0;iter<n;iter++)
    {
        for(jter=iter+1;jter<n;jter++)
        {
            if(arr[iter]==arr[jter])
            {
                ans[arr[iter]]++;
            }
        }
    }

    for(iter=0;iter<max;iter++)
    {
        if(ans[iter]!=0)
        printf("%d ",iter);
        else
            c++;
    }
    if(c==max)
    {
        for(iter=0;iter<n;iter++)
        {
        printf("%d ",arr[iter]);
        }
    }
}
