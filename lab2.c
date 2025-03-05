#include <stdlib.h>
#include <stdio.h>

int function(int x){
	while(x>0)
	{
		printf("Am fost aici \n");
		x=x-4;
		x=function(x);
	}
	return x;
}

int main(){
	int a=30, i=0;
	
	while (a>0)
	{
		a=function(a);
		i++;
	}
	printf("%d \n", i);
	return 0;	
}

