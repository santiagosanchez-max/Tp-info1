#include <stdio.h>

int main()
{
	float peso, altura, imc;
	float condicion_imc;
	
	printf("\t\t\tCalculadora de indice de masa corporal\n");
	
	do{
		printf("Ingrese su peso en (Kg) : \n");
		scanf("%f",&peso);
		if(peso < 0){
			printf("\t\t ERROR \n");
			printf("El peso en (kg) debe ser un número positivo \n");
		}
	} while(peso < 0);
	
	
	do{
		printf("Ingrese su altura en (mts)  : \n");
		printf("Ejemplo: Si usted mide 136 (cm) escribalo como 1.36 (mts), solo números \n");
		scanf("%f",&altura);
		if (altura < 0){
			printf("\t \t ERROR \n");
			printf("La altura ingresada debe ser un número positivo");
		}
	} while(altura < 0);
	
	imc = peso/(altura * altura);
	
	printf("Su indice de masa corporal es : %.2f\n\n", imc);
	
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
				printf("\nSu condición es : Obesidad\n");
			}
		}
	}
	
	return 0;
}
