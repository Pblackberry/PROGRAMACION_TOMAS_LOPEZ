#include <stdio.h>
int main (int argc, char *argv[]) {
float subtotal1=0, subtotal2=0, subtotal3=0, subtotal4=0, subtotal5=0;
float precio1=150, precio2=55, precio3=180, precio4=70, precio5=120;
float num1=0, num2=0, num3=0, num4=0, num5=0;
float subtotal=0, total=0;
char opcion;
char nombre[50], cedula[20];

printf ("\t\tBienvenido al sistema de facturación");
printf ("\nElija el producto a comprar \n");
printf ("a) Llantas (precio $150) \n");
printf ("b) Kit pastillas de freno (precio $55) \n");
printf ("c) Kit de embraje (precio $180) \n");
printf ("d) Faro (precio $70) \n");
printf ("e) Radiador (precio $120) \n");
scanf("%s", &opcion);

switch (opcion){
    case 'a':
        printf("Ingrese el numero de llantas que desee facturar\n");
        scanf("%f", &num1);
 /* code */
    break;
    case 'b':
        printf("Ingrese el numero de kit de pastillas de freno\n");
        scanf("%f", &num2);
    break;
    case 'c':
        printf("Ingrese el numeor de kit embrague que desee facturar\n");
        scanf("%f", &num3);
    break;
    case 'd':
        printf("Ingrese el numero de faros que desee facturar\n");
        scanf("%f", &num4);
    break;
    case 'e':
        printf("Ingrese el numero de radiador que desee facturar\n");
        scanf("%f", &num5);
    break;
    default:
        printf("La respuesta no concuerda con ninguno de los productos\n");
    break;
}

subtotal1=num1*precio1;
subtotal2=num2*precio2;
subtotal3=num3*precio3;
subtotal4=num4*precio4;
subtotal5=num5*precio5;

subtotal=subtotal1+subtotal3+subtotal3+subtotal4+subtotal5;

if(subtotal>100 && subtotal<= 500){
    total=subtotal*0.95;
}else if (subtotal>500 && subtotal<=1000){
    total=subtotal*0.93;
}else if(subtotal>1000){
    total=subtotal*0.90;
}

printf("Ingrese el nombre del cliente\n");
scanf("%s", &nombre);

printf("Ingrese el numero de cedula del cliente\n");
scanf("%s", &cedula);

printf("////////////////////////////////////////////////////////");
printf("////////////////////////Factura/////////////////////////");

printf("Nombre: %s\n", nombre);
printf("Cédula: %s\n", cedula);

printf("Producto            Cantidad            Precio unitario         Precio total\n");
if(num1!=0){
    printf("")
}


    return 0;
}