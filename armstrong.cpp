#include<stdio.h>
#include<conio.h>
int func(int x)
{
	int y;
	y=x*x*x;
	return y;
	
}
int order(int a)
{
	int r;
	while(a>0)
	{
		r++;
		a=a/10;
	}
	return r;
}
int check(int a)
{
	int n=order(a);
	int sum=0,x;
	while(n>0)
	{
	x=a%10;
	a=a/10;
	sum=sum + func(x);
	n--;
}
return sum;
}
int main()
{
int a,b;
printf("enter a num");
scanf("%d",&a);
b=check(a);
printf("%d",b);
if(b==a)
{
	printf("\nit is a armstrong");
}
else
{
	printf("\n it is not an armstrong");
}
return 0;
}


