#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
    int x = 0;
    
    /*
      /\Primera iteración/\
      x inicia en 0. 
      ¿Es x menor a 1?
      Sí
      Imprimir x
      
      /\Segunda Iteración/\
      x inicia en x+1
      ¿Es x menor a 1?
      No
      No se ejecuta el ciclo

    */
    
/*    for (x = 0; x<1; x++)
    {
        printf("%d\n", x);
    }
*/  
    
    /*
      /\Primera iteración/\
      x inicia en 0
      ¿Es x menor a 1?
      Sí
      ¿Es x igual a 1?
      No
      Resultado de la declaración: Verdadero
      Imprimir x = 0
      
      /\Segunda iteración/\
      x inicia en x+1=1
      ¿Es x menor a 1?
      No.
      ¿Es x igual a 1?
      Sí
      Resultado de la declaración: Verdadero
      Imprimir x = 1
      
      /\Tercera iteración/\
      x inicia en x+1 = 2
      ¿Es x menor a 1?
      No.
      ¿Es x igual a 1?
      No.
      Resultado de la declaración: Falso
      Fin
      
    */  
    for (x = 0; x<=1; x++)
    {
        printf("%d\n", x);
    }
    
    system("pause");
    return 0;    
}
