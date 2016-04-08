#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rut = 18796330;
int rut_x = rut;
int b = 0;

main()
{
	
	while(b <= 8){
		rut_x = rut/(pow(10, b));
		b++;
		printf("%d\n", rut_x);
	}
	
}
