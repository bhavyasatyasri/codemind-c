#include<stdio.h>
int main()
{
	int n,a,b,rev=0;
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		b=n%10;
		rev=rev*10+b;
		n=n/10;
	}
	printf("%d",rev);
}