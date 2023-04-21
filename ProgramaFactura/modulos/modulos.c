#include <stdio.h>
#include "modulos.h"
float calculosubtotal (float subtotal, float total){
    float subtotal1;
     if (subtotal1>500 && subtotal1<=1000)
                {
                    /*total=subtotal-(subtotal*0.05);*/
                    total=subtotal1-(subtotal1*0.04);
                }
                else if (subtotal1>1000 && subtotal1<=5000)
                {
                    total=subtotal1-(subtotal1*0.07);
                }
                else if (subtotal>5000)
                {
                    total=subtotal1-(subtotal1*0.09);
                }
    return total;
}

void ImpresionFactura (float subtotal, float descuentop, float descuentod, float total, float num1, float num2, float num3, float num4, float num5, float precio1, float precio2, float precio3, float precio4, float precio5,
                       float subtotal1, float subtotal2, float subtotal3, float subtotal4, float subtotal5, char nombre[], char cedula[]){
                printf("\n#########################################\n");
                printf("       #########FACTURA###########        \n");

                printf("Nombre: %s\n", nombre);
                printf("Cedula: %s\n", cedula);

                printf("\nProducto            Cantidad            Precio Unitario         Precio Total\n");
                if (num1!=0)
                {
                    printf("Llantas                  %.0f                 %.2f               %.2f\n",num1,precio1,subtotal1);
                }
                if (num2!=0)
                {
                    printf("Kit pastillas de freno      %.0f              %.2f               %.2f\n",num2,precio2,subtotal2);
                }
                if (num3!=0)
                {
                    printf("Kit de embrague             %.0f              %.2f               %.2f\n",num3,precio3,subtotal3);
                }
                if (num4!=0)
                {
                    printf("Faro                     %.0f                 %.2f               %.2f\n",num4,precio4,subtotal4);
                }
                if (num5!=0)
                {
                    printf("Radiador                 %.0f                 %.2f               %.2f\n",num5,precio5,subtotal5);
                }

                printf("\nEl subtotal es: %.2f\n",subtotal);
                printf("El descuento aplicado (en porcentaje): %f     ", descuentop);
                printf("    El descuento aplicado (en dolares): %f\n", descuentod);
                printf("El total es: %.2f\n",total);
                printf("#########################################\n");
}