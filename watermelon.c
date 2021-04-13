#include<stdio.h>

void check(int w);

FILE * fp;



void check(int w)
{
    int x;
//scanf("%d",&x);
int rem = w%2;



if(!rem)
fprintf(fp,"YES");
else
fprintf(fp,"\tNO");
fprintf(fp,"\n");

}

int main()
{

fp=fopen("output.txt","w");
for(int i=1;i<=100;i++)
check(i);
return 0;

}