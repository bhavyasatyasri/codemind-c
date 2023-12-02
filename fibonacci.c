#include<stdio.h>
int main()
{
    int i,n,fib1=0,fib2=1,fib3;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
            fib3=fib1+fib2;
            printf("%d ",fib1);
            fib1=fib2;
            fib2=fib3;
    }
    
}