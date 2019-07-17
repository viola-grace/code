#include<stdio.h>
#include<string.h>
char stack[100],res[100],k=0;
int top=0;
void push(char ch)
{
    stack[top++]=ch;
}
void pop()
{
    while(top>0)
    res[k++]=stack[--top];
}

int main() {
  char str[100];
  int i;
  scanf("%s",str);
  int len=strlen(str);
  for(i=0;i<len;i++)
  push(str[i]);
  pop();
  if(strcmp(res,str)==0)
  {
      printf("YES");
  }else
  {
      printf("NO");
  }
}
