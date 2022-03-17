#include<stdio.h>
char fun(char, char);
int main()
{
		char a,b;
		scanf("%d %d", &a, &b);
		fun(a,b);
}

char fun(char a, char b)
{
		char sum=0;
		if(a>255-b)
		{
           return -1;
		}
		else
		{
		sum=a+b;
		printf("%d", sum);
		}
}
