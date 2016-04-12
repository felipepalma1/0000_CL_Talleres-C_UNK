#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*Usuario ingresa 4 notas - Aprueba o reprueba*/
	
	/*Inicializacion y asignacion de variables*/
	int _0 = 0;
	printf("Bienvenido. Escriba 1 para iniciar el software o solo presione enter para terminarlo: ");
	
	scanf("%d", &_0);
	
	while(_0 == 1)
	{
		float i;
		float v = 0;

	
		printf("Ingrese Voltaje (Volts): "); scanf("%f", &v);
		printf("Ingrese Corriente (Ampere): "); scanf("%f", &i);
	
	
		printf("La resistencia de proteccion es de %.2f Ohm\n", (v/i));
		printf("La potencia es de %.2f Watts\n", (v*i));
		
		
		
		printf("\nDesea reiniciar el programa? Presione [1] para confirmar o [0] para salir\n" );
		scanf("%d", &_0);
	}
	
	
	return 0;
	
	
}
