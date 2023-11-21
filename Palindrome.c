#include<stdio.h>
int main()
{
    int i,n,r=0,t,x;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        x=n%10;
        r=r*10+x;
        n=n/10;
    }
    if(r==t)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
