#include <stdio.h>
#include <math.h>
float r1;
float r2;
float r3;
float valor_resistencia;

/*Calculo de las resistencias ingresadas*/
int f1(float x, float y, float z)
{
	valor_resistencia = (r1*10+r2*100+r3*1000);
	
	valor_resistencia = (r1*10+r2)*pow(10,r3);
	printf("El valor de la resistencia ingresada es %f", valor_resistencia);
		
	return valor_resistencia;
}



int main()
{

	printf("Bienvenido al programa de calculo de resistencias\n\n");

	/*Mostrar por pantalla el valor de las resistencias*/
	printf("Resistencia 1: Negro. Valor = 0 \nResistencia 2: Cafe. Valor = 1 \nResistencia 3: Naranjo. Valor = 3 \nResistencia 4: Amarillo. Valor = 4\nResistencia 5: Verde. Valor = 5\nResistencia 6: Azul. Valor = 6 \nResistencia 7: Violeta. Valor = 7\nResistencia 8: Gris. Valor = 8\nResistencia 9: Blanco. Valor = 9\n\n");


	/*Consultar al usuario, las resistencias a ingresar*/
	printf("Ingrese el primer color:");
	scanf("%f", &r1);
	
	printf("Ingrese el segundo color:");
	scanf("%f", &r2);
	
	printf("Ingrese el tercer color:");
	scanf("%f", &r3);
	
	
	/*Escribir por pantalla el valor*/
	f1(r1, r2, r3);
		
	return 0;
	
}
