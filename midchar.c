/*#include<stdio.h>
int main()
{
		char ch[10] = "Hello";
		int len = strlen(ch);
		int mid = len/2;
		printf("%c", mid[ch]);
}*/

#include<stdio.h>
int fun(char ch[])
{
		static int count=0;
		if(*ch != '\0')
		{
				count++;
				fun(ch+1);
		}
		return count;
}
int main()
{
		char ch[20] = "HELLO1";
		int len = fun(ch);
		int mid = len/2;
		printf("%d\n", mid);
		printf("%c", mid[ch]);
}


