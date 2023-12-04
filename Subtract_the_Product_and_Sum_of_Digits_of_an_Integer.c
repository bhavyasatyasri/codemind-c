#include<stdio.h>
int main()
{
    int i,n,pro=1,sum=0,r,t;
    i=n;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        pro=pro*r;
        sum=sum+r;
        n=n/10;
        t=pro-sum;
    }
    printf("%d",t);
    
}