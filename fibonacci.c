/*Fibonacci*/
#include <stdio.h>
#include <stdlib.h>

int a = 0;
int b = 1;
int c = 0;

int x = 0;
	

int main()
{

	while (x != 30){
		c = a+b;
		printf("%d\n", c);
		
		a = b;
		b = c;
		
		
		x++;
		
	}
	
	return 0; 
}
