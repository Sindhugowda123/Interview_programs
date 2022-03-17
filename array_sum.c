/*#include<stdio.h>

int main()
{
		int arr[10] = {1,5,3,6,2,1,3,5,2,2};
		for(int i=0;i<10;i++)
		{
				for(int j=i+1;j<10;j++)
				{
						for(int k=i+2;k<10;k++)
						{
								if((arr[i] + arr[j] + arr[k] == 10) && (i != j && j != k && k != i))
								{
										printf("%d %d %d\n", i, j, k);
								}
						}
				}
		}
}*/


#include<stdio.h>

int main()
{
		int arr[10] = {1,5,3,6,2,1,3,5,2,2};
		for(int i=0;i<10;i++)
		{
								if((arr[i] + arr[i+1] + arr[i+2] == 16) && (i != i+1 && i+1 != i+2 && i+2 != i))
								{
										printf("%d %d %d\n", i, i+1, i+2);
								}
}
}
