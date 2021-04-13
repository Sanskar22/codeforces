#include<stdio.h>
#include<string.h>

void logic();
int main()
{
int n;
scanf("%d",&n);

for(int i=0;i<n;i++)
logic();

}

void logic()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);

    if(len>10)
    printf("%c%d%c\n",str[0],len,str[len-1]);
    else
    printf("%s\n",str);
    
}