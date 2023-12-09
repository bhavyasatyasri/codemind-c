#include<stdio.h>
int main()
{
    int i,n,fib1=0,fib2=1,fib3,flag=0;
    scanf("%d",&n);
    fib3=fib1+fib2;
    while(fib3<=n)
    {
        if(fib3==n)
        {
            flag=1;
            break;
        }
        fib1=fib2;
        fib2=fib3;
        fib3=fib1+fib2;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}