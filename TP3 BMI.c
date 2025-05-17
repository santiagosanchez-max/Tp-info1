
#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("\t\t\tCalculadora de indice de masa corporal\n");
    
    printf("Ingrese su peso en (Kg) : \n");
    scanf("%f",&peso);
    
    printf("Ingrese su altura en (mts) : \n");
    scanf("%f",&altura);
    
    imc = peso/(altura * altura);
    
    printf("Su indice de masa corporal es : %2.f\n\n", imc);
    
    printf("\t\t\t Índice     │   Condición  \n");
    printf("\t\t------------------------------------\n\n");
    printf("\t\t\t <18.5      │  Bajo peso \n");
    printf("\t\t\t 25.0 a 29.9│  sobre peso \n");
    printf("\t\t\t >=30       │  Obesidad");
    
    return 0;
}