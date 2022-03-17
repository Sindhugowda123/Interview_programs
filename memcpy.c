#include<stdio.h>
#include<string.h>

/*void mem_cpy(void* dest, const void* src, int size)
{
		char *destt = (char*)dest;
		char* srcc = (char*)src;
		for(int i=0;i<size;i++)
		{
				destt[i] = srcc[i];
		}
}

int main()
{
		char *src = "sindhu";
		char dest[10] = "Chethan";
		mem_cpy(dest, src, 5);
		printf("%s\n", dest);
}*/



/*int main()
{
		char *src = "sindhu";
		char dest[10] = "Chethan";
		memmove(dest+6, src, 5);
		printf("%s\n", dest);
		printf("%s\n", src);
}*/





int main()
{
		char *src = "sindhu";
		char dest[20] = "Chethan";
		memcpy(dest+7, src, 5);
		printf("%s\n", dest);
		printf("%s\n", src);
}
