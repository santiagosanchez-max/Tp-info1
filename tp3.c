#include <stdio.h>

int main()
{
	float peso, altura, imc;
	float condicion_imc;
	
	printf("\t\t\tCalculadora de indice de masa corporal\n");
	
	printf("Ingrese su peso en (Kg) : \n");
	scanf("%f",&peso);
	
	printf("Ingrese su altura en (mts) : \n");
	scanf("%f",&altura);
	
	imc = peso/(altura * altura);
	
	printf("Su indice de masa corporal es : %2.f\n\n", imc);
	
	printf( "\t\t\t Indice         Condición  \n ");
	printf("\t\t------------------------------------\n\n");
	printf("\t\t\t <18.5      |  Bajo peso \n");
	printf("\t\t\t 18.5 a 24.9|  Normal  \n");
	printf("\t\t\t 25.0 a 29.9|  sobre peso \n");
	printf("\t\t\t >=30       |  Obesidad");
	condicion_imc =imc;
	
	if (condicion_imc < 18.5){
		printf("\nSu condición es : Bajo peso\n");
	}else {
		if(condicion_imc >=18.5 && condicion_imc <=24.9){
			printf("\nSu condición es : Normal\n");
		}else{
			if(condicion_imc >=25 && condicion_imc <=29.9){
				printf("\nSu condición es : Sobrepeso\n");
			}else{
				printf("\nSu consición es : Obesidad\n");
			}
		}
	}
	
	return 0;
}
