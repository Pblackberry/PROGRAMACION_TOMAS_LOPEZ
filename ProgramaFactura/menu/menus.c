#include <stdio.h>
#include "menus.h"
char menuProducto (){
    char opcion;
   printf("Elija un producto: \n");
         printf("\n a) Llantas (Precio: $150)\n");
         printf("b) Kit Pastillas de freno (Precio: $55)\n");
         printf("c) Kit de embrague (Precio: $180)\n");
         printf("d) Faro (Precio: $70)\n");
        printf("e) Radiador (Precio: $120)\n");

        scanf("\n%c",&opcion); 

    return opcion;
}

int menuPrincipal(){
    int menu1=0;
    printf("\n1) Facturar producto\n");
    printf("2) Imprimir factura\n");
    printf("3) Salir\n");
    menu1=0;
    scanf("%d", &menu1);

    return menu1;

}