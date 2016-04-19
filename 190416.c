#include <stdio.h>
#include <stdlib.h>

main()
{
	int x;
	int c = 0;
	
	printf("Escriba un numero: ");
	scanf("%d", &x);
	
	while (c < x)
	{
		printf("*");
		c++;
	}

}
