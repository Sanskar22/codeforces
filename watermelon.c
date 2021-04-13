#include<stdio.h>
 
int main()
{
int x;
scanf("%d",&x);
int rem=x%2;
 
if(x==2)
printf("NO");
else if(!rem)
printf("YES");
else
printf("NO");
    
return 0;
}
