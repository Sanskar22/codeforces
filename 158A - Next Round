#include<stdio.h>
#include<stdlib.h>
int *entarr(int n);
int logic(int *arr,int n,int k);

int main()

{
    int n,k;
    scanf("%d%d",&n,&k);
    int *arr;

    arr=entarr(n);
    int ans=logic(arr,n,k);
    printf("%d",ans);


    return 0;
}

int *entarr(int n)
{
    int *ptr;
    ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    return ptr;
}

int logic(int *arr,int n,int k)
{   
    int count=0;
    if(arr[k-1]>0)
    {
        count=k;
        int i=k;
        while(arr[k-1]==arr[i])
        {
        count++;
        i++;
        }
    }
    else
    {   count=0;
        int i=0;
        while(arr[i]>0)
        {
            count++;
            i++;
        }
    }

    return count;
}
