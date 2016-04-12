#include <stdlib.h>
#include <stdio.h>

int a;

int main()
{
	printf("Ingrese numero: ");
	scanf("%d", &a);
	
	if(a == 0)
	{
		printf("Su numero es 0, este numero no es considerano ni negativo, ni positivo, ni par, ni impar\n");
	}
	
	if(a < 0)
	{
		printf("Su numero es negativo\n");
	}
	
	if(a > 0)
	{
		printf("Su numero es positivo\n");
	}
	
	if(a % 2 ==  0)
	{
		printf("Su numero es par\n");
	}
	
	if(a % 2 != 0)
	{
		printf("Su numero es impar\n");
	}
	
	return 0;
}
