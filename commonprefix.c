#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char str[100];
    struct node *next;
}NODE;
typedef NODE* NODEPTR;
NODEPTR tptr,newnode,start,prev,qptr;

void create(char *str1)
{
    newnode=(NODE* )malloc(sizeof(NODE));
    strcpy(newnode->str,str1);
    newnode->next=NULL;
}

void insert(char *str)
{
    create(str);
    for(tptr=start; tptr; prev=tptr,tptr=tptr->next);
    if(tptr==start)
    {
        tptr=newnode;
        start=tptr;
    }else
    {
        prev->next=newnode;
        tptr=newnode;
    }
}
void check()
{
    int len=0,len2,i=0,j=0,flg=0;
    tptr=start;
    len=strlen(tptr->str);
    for(i=0;i<len;i++)
    {
        for(qptr=tptr->next; qptr; qptr=qptr->next)
        {
            if(tptr->str[i]==qptr->str[i])
            {
                flg=1;
            }else
            {
                flg=0;
                break;
            }
        }
        if(flg==1)
        {
            printf("%c",tptr->str[i]);
        }else
        {
            break;
        }
        flg=0;
    }
}

int main() {
    int i,n;
    char str[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        insert(str);
    }
    check();
  
}
