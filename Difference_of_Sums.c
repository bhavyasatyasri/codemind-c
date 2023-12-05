#include<stdio.h>
int main()
{
    int i,n,sum1=0,sum2=0,r,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum1=sum1+i*i;
        sum2=sum2+i;
        r=sum2*sum2;
        t=r-sum1;
    }
    printf("%d",t);
}