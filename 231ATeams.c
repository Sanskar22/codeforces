#include<stdio.h>


int logic();
int main()
{
int n,sum=0;
scanf("%d",&n);

for(int i=0;i<n;i++)
sum=sum+logic();

printf("%d",sum);
}

int logic()
{
   int x,y,z,sum=0;

   scanf("%d %d %d",&x,&y,&z);
   sum=x+y+z;
   
   switch(sum) {

       case 0:
        return 0;
       break;

       case 1:
       return 0;
       break;

       default :
       return 1;
     }
    
}
