#include <stdio.h>
#include <stdlib.h>


int ejecucion(int a, int b)
{
	if ( a % 2 == 0)
	{ 	
	
		while (a < b)
		{printf(); a = a+3;}
	}
		
	if ( a % 2 == 1)
	{ 		
		while (a < b)
		{printf(); a = a+3;}
	}
	
	return 0;
	
}

int main()
{
	int a, b;
	
	
	printf("Escriba un numero 1: ");
	scanf("%d", &a);
	
	printf("Escriba un numero 2: ");
	scanf("%d", &b);	

	if (a > b)
	{
		return 0;
	}
	
	ejecucion(a, b);
	
	return 0;
}
