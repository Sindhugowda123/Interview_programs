#include<stdio.h>
int main()
{
		int num,divisor,remainder;
		printf("Enter num : ");
		scanf("%d", &num);
		printf("Enter divisor : ");
		scanf("%d", &divisor);
		while(num>=divisor)
		{
				num=num-divisor;
		}
		remainder=num;
		printf("%d", remainder);
}
