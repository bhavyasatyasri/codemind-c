#include<stdio.h>
int add(int,int);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int res=add(x,y);
    printf("%d",res);
    
}
int add(int x,int y)
{
    int c;
    c=(x*y)/(x+y);
    return c;
}