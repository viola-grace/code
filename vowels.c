#include <stdio.h>
#include <stdlib.h>

int main()
{
    char st;
    scanf("%c",&st);
    if(st=='a'||st=='e'||st=='i'||st=='o'||st=='u')
    {
        printf("Vowel");
    }else if(st>='a'&&st<='z')
    {
        printf("Consonant");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
