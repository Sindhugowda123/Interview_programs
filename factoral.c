/*#include<stdio.h>
int fact(int num)
{
		int res=1;
		if(num==1)
				return 1;
		else
				for(int i=2;i<=num;i++)
				{
						res = res * i;
				}
		return res;
}
int main()
{
		int num=2;
		printf("%d",fact(num));
}*/


#include<stdio.h>
int fact(int num)
{
		int res=1;
		if(num==1)
				return 1;
		else
		return num*fact(num-1);
}
int main()
{
		int num=5;
		printf("%d",fact(num));
}
