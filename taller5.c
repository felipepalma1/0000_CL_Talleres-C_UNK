#include <stdio.h>
#include <stdlib.h>

/**********************************************************************/
int pregunta_1(){
	char pregunta[100] = "Que instrumento mide la intensidad de corriente directa:\n\n";
	int respuesta = 0;
	
	printf("%s", &pregunta);
	printf("Opcion 1: Amperimetro\nOpcion 2: Voltimetro\nOpcion 3: Ohmetro\nOpcion 4: Alternador\nRespuesta: ");
	scanf("%d", &respuesta);

	
	if(respuesta == 1){ return 1; }
	
	return 0;
	
}

int pregunta_2(){
	char pregunta[100] = "Que calculo mide la intensidad de corriente directa\n\n";
	int respuesta = 0;
	
	printf("%s", &pregunta);
	printf("Opcion 1: Rt=1/((1/r1)+(1/r1)+(1/r1))\nOpcion 2: Rt=V/I\nOpcion 3: Rt= r1+r2+r3+...\nOpcion 4: Rt=(r1+r2+r3+....) * I\nRespuesta: ");
	scanf("%d", &respuesta);

	
	if(respuesta == 3){ return 1; }
	
	return 0;
}

int pregunta_3(){
	char pregunta[100] = "En que circuito paralelo de resisencias se cumple lo siguiente\n\n";
	int respuesta = 0;
	
	printf("%s", &pregunta);
	printf("Opcion 1: La corriente es la misma para todas las resistencias\nOpcion 2: El voltaje aumenta y la corriente disminuye \nOpcion 3: La corriente es igual y el voltaje es variable\nOpcion 4: La tensión es igual en todas las resistencias\nRespuesta: ");
	scanf("%d", &respuesta);
	
	if(respuesta == 4){ return 1; }
	
	return 0;
}

int pregunta_4(){
	char pregunta[100] = "En un circuito NOR si se ingresa un 0 y 1 su salida sera\n\n";
	int respuesta = 0;
	
	printf("%s", &pregunta);
	printf("Opcion 1: La salida es 0\nOpcion 2: La salida es 1\nOpcion 3: No tiene salida\nOpcion 4: La salida es PWM\nRespuesta: ");
	scanf("%d", &respuesta);
	
	if(respuesta == 2){ return 1; }
	
	return 0;
}
/*
int * analisis(int respuesta_n[]){
	int c = 0;
	float resultado = 0;
	float nota;
	int packet[2];
	
	for(c = 0; c<=3; c++){
		printf("Respuesta %d fue %d\n", c, respuesta_n[c]);
		resultado = resultado + respuesta_n[c];		
	}
	
	nota = resultado/4;
	
	printf("El puntaje final del alumno es de %.2f\n", resultado);
	printf("Su nota final es %.2f", nota);
	packet[0] = resultado;
	packet[1] = nota;
	
	return packet;	
}

int resolucion(char nombre[], char apellido[], int resolucion[])
{ 
	printf("Estimado %s %s, el resultado de su examen es el siguiente:\n", nombre, apellido);
	printf("Puntaje total: %d", resolucion[0]);
	printf("Nota final: %d\n", resolucion[1]);
	
}
*/

int main()
{
	char nombre[20];
	char apellido[20];
	int respuesta_n[3];
	int resolucion[2];
	

	printf("Ingrese su nombre: ");
	scanf("%s", &nombre);
	printf("Ingrese su apellido: ");
	scanf("%s", &apellido);
	system("cls");
	

	
	respuesta_n[0] = pregunta_1();
	system("cls");
	respuesta_n[1] = pregunta_2();
	system("cls");
	respuesta_n[2] = pregunta_3();
	system("cls");
	respuesta_n[3] = pregunta_4();
	system("cls");
	
	int c = 0;
	float resultado = 0;
	float nota = 0;
	int packet[2];
	
	for(c = 0; c<=3; c++){
		printf("Respuesta %d fue %d\n", c, respuesta_n[c]);
		resultado = resultado + respuesta_n[c];		
	}
	
	if (nota < 1)
	{ nota = 1;}
	
	nota = ((resultado/4)*100);
	
	
	printf("Estimado %s %s El puntaje final en su examen es de %.2f\n", nombre, apellido, resultado);
	printf("Su nota final es %.2f", nota);
	
	
	
	return 0;
	
}
