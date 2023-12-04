#include<stdio.h>
int main()
{
    int n,s,r,sum;
    scanf("%d",&n);
    r=n%10;
    while(n!=0)
    {
        s=n%10;
        n=n/10;
    }
    sum=r+s;
    printf("%d",sum);
}