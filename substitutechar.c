#include<stdio.h>
#include<string.h>
int main() {
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    int t=len2;
    int count=0,i=0,j=0,flg=0;
        l:    if(str1[i]==str2[j])
            {
                j++;
                t--;
                flg=0;
                if(j==len1)
                {
                    goto l1;
                }
                for(i=1;i<len2;i++)
                {
                    if(str1[i]==str2[j])
                    {
                        flg=1;
                        j++;
                        t--;
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
  l1:      if(flg==0)
        printf("%d",len2);
        else
    printf("%d",count);
}
