#include <stdio.h>
#include <stdlib.h>

int rut,n,c=1;

main()
{
	printf("Ingresa el rut:\n");
	scanf("%d", &rut);
	
	while(c<9){
		n=rut%10;
		rut=rut/10;
		printf("%d",n);
		c++;
	}
}
