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
		float nota_1;
		nota_1 = 0;
	
		float nota_2;
		nota_2 = 0;
	 
		float nota_3;
		nota_3 = 0;
	
		float nota_4;
		nota_4 = 0;
	
		float resultado;
		resultado = 0;
	
		printf("Ingrese nota 1: "); scanf("%f", &nota_1);
		printf("Ingrese nota 2: "); scanf("%f", &nota_2);
		printf("Ingrese nota 3: "); scanf("%f", &nota_3);
		printf("Ingrese nota 4: "); scanf("%f", &nota_1);
	
		if (((nota_1 + nota_2 + nota_3 + nota_4)/4) > 4)	
		{
			printf("El alumno aprueba sus asignaturas\nSu nota final es %f.2\n", (nota_1 + nota_2 + nota_3 + nota_4)/4);
		}
		else
		{
		printf("El alumno a reprobado sus asignaturas\nSu nota final es %.2f\n", (nota_1 + nota_2 + nota_3 + nota_4)/4) ;
		}
		
		printf("\nDesea ingresar un nuevo alumno? Presione [1] para confirmar o solo [ENTER] para salir\n" );
		scanf("%d", &_0);
	}
	
	
	return 0;
	
	
}
