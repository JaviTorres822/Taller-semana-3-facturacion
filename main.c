#include <stdio.h>

int main(void) {
  int menu;
  
  do{
    printf("Bienvenido a Caja, que desea hacer? \n");

    printf("Presione 1 si quiere facturar productos \n");
    printf("Presione 2 si quiere imprimir factura \n");
    printf("Presione 3 si quiere salir \n");
    scanf("%d", &menu);

      switch (menu){
        case 1: printf("Bienvenido a facturar productos \n"); 
        //switch 
      
      
      
      
        break; 
    
        case 2: printf("Bienvenido a imprimir factura \n"); break; 
    
        case 3: printf("Gracias por su visita, adios\n"); break; 

        default: printf("Ingrese 1, 2 o 3 para realizar una opcion valida\n");    
      
      }
  } while (menu!=3);
  return 0;
}