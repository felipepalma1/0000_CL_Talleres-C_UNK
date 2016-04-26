#include <stdio.h>
#include <stdlib.h>
/*Integrantes Felipe Palma, Wildarith Fuentes, Felipe Palma*/
main(){
	
	float _1, _10, _11, _100;
	float _a01, _a10;
	float _b00;
	float $_z00;
	
	while(true){
		printf("Bienvenido a la calculadora. Favor seleccione operacion:\n");
		printf("[1]Suma\n[2]Resta\n[3]Multiplicacion\n[4]Division\n");
		scanf("%f", &_1);
		
		printf("Ingrese operando 1: ");
		scanf("%f", &_a01);
		printf("Ingrese operando 2: ");
		scanf("%f", &_a10);
				
		/*if((_1 != 1) || (_1 != 2 )|| (_1 != 3) || (_1 != 4))
		{ printf("Boss what are you doing?"); return 0;	}*/
		
		if( _1 == 1)
	    {$_z00 = _a01 + _a10; printf("El resultado es: %f\n", $_z00);};

		if( _1 == 2)
		{$_z00 = _a01 - _a10; printf("El resultado es: %f\n", $_z00);};
		
		if( _1 == 3)
		{$_z00 = _a01 * _a10; printf("El resultado es: %f\n", $_z00);};
		
		if( _1 == 4)
		{$_z00 = _a01 / _a10; printf("El resultado es: %f\n", $_z00);};
	
		printf("Deseas realizar una nueva operacion?\n[1]Si, [2]No: ");
		scanf("%f", &_b00);
		
		if (_b00 == 1) { continue; } else { printf("Bye"); return 0;}
		
			
	}
	
}
