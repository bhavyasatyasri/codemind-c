#include<stdio.h>
int main()
{
    int i,n,t,r=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        i=n%10;
        r=r*10+i;
        n=n/10;
    }
    if(t==r)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}