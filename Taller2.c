#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float r1;
float r2;
float r3;

float v;

float valor_resistencia;

float valor_resistencia_con_porcentaje_1;
float valor_resistencia_con_porcentaje_2;

int control;

/*Calculo de las resistencias ingresadas*/
void f1(float x, float y, float z)
{
	valor_resistencia = (r1*10+r2*100+r3*1000);
	
	valor_resistencia = (r1*10+r2)*pow(10,r3);
	printf("El valor de la resistencia ingresada es %f\n", valor_resistencia);
		

}

void f2(float x)
{
	float oro = 0.05;
	float plata = 0.1;
	
	if(x == 1){
         valor_resistencia_con_porcentaje_1 = valor_resistencia + (oro*valor_resistencia);
         valor_resistencia_con_porcentaje_2 = valor_resistencia - (oro*valor_resistencia);
         printf("El valor de la resistencia al 5% es de %f3\n", valor_resistencia_con_porcentaje_1);
         printf("El valor de la resistencia al 10% es de %f3\n", valor_resistencia_con_porcentaje_2);         
	}
	
	else{
         valor_resistencia_con_porcentaje_1 = valor_resistencia + (plata*valor_resistencia);
         valor_resistencia_con_porcentaje_2 = valor_resistencia - (plata*valor_resistencia);
         printf("El valor de la resistencia al 5 por ciento es de %f3\n", valor_resistencia_con_porcentaje_1);
         printf("El valor de la resistencia al 10 por ciento es de %f3\n", valor_resistencia_con_porcentaje_2);   		
	}
}

int main()
{

	printf("Bienvenido al programa de calculo de resistencias\n\n");

	/*Mostrar por pantalla el valor de las resistencias*/
	printf("Resistencia 1: Negro. Valor = 0 \nResistencia 2: Cafe. Valor = 1 \nResistencia 3: Naranjo. Valor = 3 \nResistencia 4: Amarillo. Valor = 4\nResistencia 5: Verde. Valor = 5\nResistencia 6: Azul. Valor = 6 \nResistencia 7: Violeta. Valor = 7\nResistencia 8: Gris. Valor = 8\nResistencia 9: Blanco. Valor = 9\n\n");


	/*Consultar al usuario, las resistencias a ingresar*/
	printf("Ingrese el primer color: ");
	scanf("%f", &r1);
	
	printf("Ingrese el segundo color: ");
	scanf("%f", &r2);
	
	printf("Ingrese el tercer color: ");
	scanf("%f", &r3);
	
	printf("Ingrese 1 para oro y 2 para plata: ");
	scanf("%d", &v);
	
	
	/*Escribir por pantalla el valor*/
	f1(r1, r2, r3);
	f2(v);
	scanf("%d", control);

	return 0;
	
}
