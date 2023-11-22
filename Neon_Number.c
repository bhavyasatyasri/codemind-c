#include<stdio.h>
int main()
{
    int i,n,sum=0,sqrt;
    scanf("%d",&n);
    sqrt=n*n;
    while(sqrt!=0)
    {
        i=sqrt%10;
        sum=sum+i;
        sqrt=sqrt/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}