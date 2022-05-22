#include<stdio.h>
int fibo(int i);


int main()
{
 int n,j;
 printf("enter the range of fibo serus:");
 scanf("%d",&n);

for(j=0;j<=n;j++)
{
	printf("%d\t",fibo(j));
}

	return 0;
}


int fibo(int i)
{

	if(i==0)
		{return 0;}
	else if(i==1)
		{return 1;}
	else
	{
		return fibo(i-1)+fibo(i-2);
	}
}



