#include <stdio.h>

int r1;
int r2;
int r3;

int main()
{

	printf("Bienvenido al programa de calculo de resistencias\n\n");

	/*Mostrar por pantalla el valor de las resistencias*/
	printf("Resistencia 1: Negro. Valor = 0 \nResistencia 2: Cafe. Valor = 1 \nResistencia 3: Naranjo. Valor = 3 \nResistencia 4: Amarillo. Valor = 4\nResistencia 5: Verde. Valor = 5\nResistencia 6: Azul. Valor = 6 \nResistencia 7: Violeta. Valor = 7\nResistencia 8: Gris. Valor = 8\nResistencia 9: Blanco. Valor = 9\n\n");


	/*Consultar al usuario, las resistencias a ingresar*/
	printf("Ingrese la primera resistencia:\n");
	scanf("%d", &r1);
	
	printf("Ingrese la segunda resistencia:");
	scanf("%d", &r2);
	
	printf("Ingrese la tercera resistencia:");
	scanf("%d", &r3);
		
	/*Calculo de las resistencias ingresadas*/
	/*Escribir por pantalla el valor*/
	
	return 0;
	
}
