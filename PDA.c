#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("PERFECT");
    }
    else if(n>sum)
    {
        printf("DEFICIENT");
    }
    else
    {
        printf("ABUNDANT");
    }
}