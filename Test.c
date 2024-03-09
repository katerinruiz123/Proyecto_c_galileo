#include <stdio.h>

#define TC_DOLAR_GTQ 7.75 //Tipo de cambio 1 USD = 7.75 USD

int main(){
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de moneda\n");
    printf("1. Convertir de Dólares a Quetzales\n");
    printf("2. Convertir de Quetzales a Doláres\n");
    printf("Ingrese su opción:  ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Ingrese la cantidad en Dólares:  ");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad* TC_DOLAR_GTQ);
            break;
           
        case 2:
            printf("Ingrese la cantidad en Quetzales:  ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad/ TC_DOLAR_GTQ);
            break;
        
        default:
            printf("Opción no válida\n");


    }

    return 0;


}