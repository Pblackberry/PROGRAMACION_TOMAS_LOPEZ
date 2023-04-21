#include <stdio.h>
#include "menu/menus.h"
#include "modulos/modulos.h"

int main (int argc, char *argv[]) {
    
    float subtotal1=0, subtotal2=0, subtotal3=0, subtotal4=0, subtotal5=0;
    float precio1=150, precio2=55, precio3=180, precio4=70, precio5=120;
    float num1=0, num2=0, num3=0, num4=0, num5=0;
    float subtotal=0, total=0, porcentaje1=0, porcentaje2=0, porcentaje3=0, descuentop=0, descuentod=0;
    
    char opcion;
    int menu1=0, pregunta=0;
    char nombre[50], cedula[20];
    

    

    printf("######## Bienvenido al sistema de facturación S.A. #########\n");

    do{

        menu1=menuPrincipal();

        if(menu1==1)
        {   
            num1=0, num2=0, num3=0, num4=0, num5=0;
            subtotal=0, total=0;
                       
            printf("Ingrese el nombre del cliente:");
            scanf("%s", &nombre);
            printf("Ingrese la cedula del cliente:");
            scanf("%s", &cedula);

            do
            {
                opcion=menuProducto();
                switch (opcion){
                case 'a':
                    printf("Ingrese el número de llanta/s que desea facturar:\n");
                    scanf("%f", &num1);
                    break;
                case 'b': 
                    printf("Ingrese el número de kit pasitllas de freno que desea facturar:\n");
                    scanf("%f", &num2);
                    break;
                case 'c':
                    printf("Ingrese el número de Kit de embrague que desea facturar:\n");
                    scanf("%f", &num3);
                    break;
                case 'd':
                    printf("Ingrese el número de faro/s que desea facturar:\n");
                    scanf("%f", &num4);
                    break;
                case 'e':
                    printf("Ingrese el número de radiador/es que desea facturar:\n");
                    scanf("%f", &num5);
                    break;       
                default:
                    printf("El producto especificado no se encuentra en el sistema.\n");
                    break;
                }

                subtotal1=num1*precio1;
                subtotal2=num2*precio2;
                subtotal3=num3*precio3;
                subtotal4=num4*precio4;
                subtotal5=num5*precio5;
                subtotal=subtotal1+subtotal2+subtotal3+subtotal4+subtotal5;
                
               total=calculosubtotal(subtotal, total);

                printf("¿Desea facturar otro producto?\n");
                printf("1.Si          2.No\n");

                scanf("%d", &pregunta);
            }while(pregunta!=2);

        }
        
        if(menu1==2)
        {
            if(subtotal>500 && subtotal<=1000){
                descuentop=4;
            }
            if(subtotal>1000 && subtotal<=5000){
                descuentop=7;
            }
            if(subtotal>5000){
                descuentop=9;
            }

                descuentod=subtotal-total;
 ImpresionFactura ( subtotal, descuentop, descuentod, total, num1, num2, num3, num4, num5, precio1, precio2, precio3, precio4, precio5,
                        subtotal1, subtotal2, subtotal3, subtotal4, subtotal5, nombre, cedula);
        }
    }while(menu1!=3);

    printf("Exitoso.");
    
    return 0;
}

