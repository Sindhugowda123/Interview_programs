#include<stdio.h>
int main()
{
		unsigned int a = 0X12345678;
		char *p = (char*)&a;
		if(*p == 0x78)
		{
				printf("little endian\n");
		}
				else
				{
				printf("Big endian\n");
				}
		}

