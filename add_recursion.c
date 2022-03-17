#include <stdio.h>
#include <stdlib.h>
int add(int,int);  //Function prototype        
int main()
{
    int x,y,result;  //variable declaration
    printf("enter two numbers: ");
    scanf("%d %d",&x,&y);
     result=add(x,y);//function call
    printf("Sum of two numbers are: %d\n",result);
}
int add(int x, int y)     //function declaration(recursive function)
{
   if(x==0)
        return y;
    else
        return(1+add(y,x-1));
}
