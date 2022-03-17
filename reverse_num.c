#include <stdio.h>
 
/* Iterative function to reverse digits of num
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 
Driver program to test reversDigits
int main()
{
    int num = 4562;
    printf("Reverse of no. is %d", reversDigits(num));
    return 0;
}*/


/*#include <stdio.h>
//Iterative function to reverse digits of num
int reverseDigits(int num)
{
    static int rev_num = 0;
    if(num > 0) 
	{
        rev_num = rev_num * 10 + num % 10;
        reverseDigits(num / 10);
    }
	else
	{
	return rev_num;
	}
	return rev_num;
}
//Driver program to test reversDigits
int main()
{
    int num = 4562;
    printf("Reverse of no. is %d", reverseDigits(num));
    return 0;
}*/



#include <stdio.h>
 
//Iterative function to reverse digits of num
int reverseDigits(int num)
{
    static int rev_num = 0;
    if(num > 0) 
	{
        rev_num = rev_num * 10 + num % 10;
        reverseDigits(num / 10);
    }
	else
	{
	return rev_num;
	}
	return rev_num;
}
 
int main()
{
    int num = 121;
	int temp=num;
	if(temp == reverseDigits(num))
			printf("yes");
	else
			printf("no");

    return 0;
}
