
#include <stdio.h>
#define TAM 5
void ingreso_codigo_barra(int codigo_barra[], int n){
    int codigo;
    for(int i = 0; i<n; i++){
        do{
        printf("Ingrese el codigo de barra entre (1-999999999)\t%d:\n",i+1);
        scanf("%d", &codigo_barra[i]);
        codigo = codigo_barra[i];
        
            if(codigo<1 || codigo>999999999){
                printf("Error: El cOdigo de barras debe estar entre 1 y 999999999\n");
            }
        }while(codigo<1 || codigo>999999999);
        
    }
    
}

void ingreso_precio(float precio[], int n){
    float precio_p;
    
    for(int i = 0; i<n; i++){
        do{
          printf("Ingrese el precio del producto \t%d:\n",i+1);
          scanf("%f", &precio[i]);
           precio_p = precio[i];
        
             if(precio_p <0){
               printf("Error, el precio no puede ser (NEGATIVO):\n");
             
            }
        }while(precio_p<0);
        
        
    }
    
}
void imprimir_productos(int codigo_barra[], float precio[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Producto %d: Codigo = %d, Precio = %.2f\n\n", i+1, codigo_barra[i], precio[i]);
    }
}

void imprimir_mas_barato_caro(float precio[], int codigo_barra[], int n){
    float mas_barato = precio[0];
    int codigo_barato =codigo_barra[0];
    
    float mas_caro = precio[0];
    int codigo_caro=codigo_barra[0];
    
    for(int i =0; i<n;i++){
        if(precio[i]>mas_caro){
            mas_caro = precio[i];
            codigo_caro = codigo_barra[i];
        }
        if(precio[i]<mas_barato){
        mas_barato = precio[i];
        codigo_barato = codigo_barra[i];
        }
    }
    printf("El producto mas caro: %.2f, codigo: %d\n ",mas_caro,codigo_caro);
    printf("El producto mas barato: %.2f, codigo: %d",mas_barato, codigo_barato);
}

    

int main()
{
    
    int codigo_barra[TAM];
    float precio[TAM];
    printf("ingrese 5 productos, se solicita codigo de barra y precio: \n");
 ingreso_codigo_barra(codigo_barra, TAM);
 ingreso_precio(precio,TAM);
 imprimir_productos(codigo_barra, precio,TAM);
 imprimir_mas_barato_caro(precio,codigo_barra,TAM);
 

 
    return 0;
}





