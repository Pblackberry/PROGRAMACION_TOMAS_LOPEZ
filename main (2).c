#include <stdio.h>

int main (int argc, char *argv[]) {
    
    float subtotal1=0, subtotal2=0, subtotal3=0, subtotal4=0, subtotal5=0;
    float precio1=150, precio2=55, precio3=180, precio4=70, precio5=120;
    float num1=0, num2=0, num3=0, num4=0, num5=0;
    float subtotal=0, total=0;
    
    char opcion;
    char menu1[50];
    char nombre[50], cedula[20];
    char pregunta[15];

    

    printf("######## Bienvenido al sistema de facturación S.A. #########\n");

    do{

        printf("a) Facturar producto");
        printf("b) Imprimir factura");
        printf("c) Salir");
        scanf("%s", &menu1);

        switch (menu1){
            case 'a'

            num1=0, num2=0, num3=0, num4=0, num5=0;
            subtotal=0, total=0;
            
            printf("Ingrese el nombre del cliente:");
            scanf("%c ", &nombre);
            printf("Ingrese la cedula del cliente:");
            scanf("%c ", &cedula);

            printf("Elija un producto: \n");
            printf("\n a) Llantas (Precio: $150)\n");
            printf("b) Kit Pastillas de freno (Precio: $55)\n");
            printf("c) Kit de embrague (Precio: $180)\n");
            printf("d) Faro (Precio: $70)\n");
            printf("e) Radiador (Precio: $120)\n");
            scanf("\n%c",&opcion);
            do{
                switch (opcion)
                {
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
                
                if (subtotal>500 && subtotal<=1000)
                {
                    /*total=subtotal-(subtotal*0.05);*/
                    total=subtotal-(subtotal*0.04);
                }
                else if (subtotal>1000 && subtotal<=5000)
                {
                    total=subtotal-(subtotal*0.07);
                }
                else if (subtotal>5000)
                {
                    total=subtotal-(subtotal*0.09);
                }

                printf("Desea facturar otro producto?\n");
                scanf("%s", &pregunta);
            }while(pregunta!="no");
            break;

            case 'b'
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


            printf("\nEl subtotal es: %.2f          ",subtotal);
            printf("     El total es: %.2f\n",total);
            printf("#########################################");
            break;

            case 'c'
            break;
        }

    }while( menu1 !="c");

    
    


   
    return 0;
}