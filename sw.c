#include<stdio.h>

int main()
{

int a=7,b=4;
printf("before:\n");
printf("%d\t" "%d\n",a,b);
a=a*b;
b=a/b;
a=a/b;

printf("After:\n");
printf("%d\t" "%d",a,b);

	return 0;
}