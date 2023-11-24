#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d",&n);
    t=2*n;
    for(i=t;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}