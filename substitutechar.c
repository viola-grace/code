#include<stdio.h>
#include<string.h>
int main() {
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    int len1=strlen(str1);
    int temp;
    int len2=strlen(str2);
    if(len2<len1)
    {
        temp=len1;
        len1=len2;
        len2=temp;
    }
    int t=len2,star=0;
    int count=0,i=0,j=0,flg=0;
        l:    if(str1[i]==str2[j])
            {
                j++;
                t--;
                flg=0;
                if(j==len1)
                {
                    flg=1;
                   star=1;
                    goto l1;
                }
                for(i=1;i<len2;i++)
                {
                    if(str1[i]==str2[j])
                    {
                        flg=1;
                        j++;
                        t--;
                        if(j==len1)
                        {
                            printf("0");return 0;
                        }
                    }
                    else
                    if(flg==1)
                    {
                        while(t>0)
                        {
                            count++;
                            t--;
                        }
                        break;
                    }
                }
            }else
            {
                j++;
                goto l;
            }
  l1:      if(flg==1&&star==1)
            {
                printf("%d",len2-1);return 0;
            }
        if(flg==1)
        {
            printf("%d",count);
        }
    else if(flg==0)
    {
        printf("%d",len2);
    }
}
