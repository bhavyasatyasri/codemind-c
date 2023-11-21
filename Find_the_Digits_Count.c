#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        count=count+1;
        n=n/10;
    }
    printf("%d
",count);
}