#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c;
	c = 0;
	
	printf("Escriba un numero: ");
	scanf("%d", &a);
	
	while (c < 100)
	{
		printf("%d x %d = %d\n", c, a, c*a);
		c++;
	}
}
