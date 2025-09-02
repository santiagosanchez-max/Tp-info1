#include <stdio.h>
#include <math.h>
//funciones Rectangulo

int area_rectangulo(int longitud, int altura){
   if(longitud<0 || altura<0){
     printf("Error: La longitud y la altura no pueden ser numeros negativos\n");
   }
 return (longitud*altura);
}

int perimetro_rectangulo(int longitud, int altura){ 
   if(longitud<0 || altura<0) {
       printf("Error: La longitud y la altura no pueden ser numeros negativos\n");
   }
return 2*(longitud + altura);

}

float diagonal_rectangulo(float longitud, float altura){
    if(longitud<0 || altura<0) {
       printf("Error: La longitud y la altura no pueden ser numeros negativos\n");
   }
   return sqrt(longitud*longitud +altura*altura);
     
}
// funciones circulo

float perimetro_circulo(float radio){
    if(radio < 0){
        printf("Error: El radio no pueden ser un numeros negativo\n"); 
     }
   return 6.28*radio;
}

float area_circulo(float radio){
 
     if(radio < 0){
        printf("Error:El radio no pueden ser un numeros negativo\n");
     }
   
    return 3.14*radio*radio;    
}

//funcion imprimir
void imprimir_resultados(float area, float perimetro ){
    printf("Area: %.3f\n", area);
    printf("Perimetro: %.3f\n", perimetro);
}


int main()
{
    int opcion,longitud, altura,area,perimetro;
    float diagonal,perimetro_c,radio, area_c;
  do{     
    printf("Que figura desea calcular:\n");
    printf("1-Rectangulo, 2-Circulo, 0-salir  :");
    scanf("%d",&opcion);
   
   
    switch(opcion){
        case 1:
             printf("Rectangulo\n\n");
            
             printf(" Area - Perimetro - Diagonal :\n\n");
                 do{
                  printf("Ingrese la longitud:\n");
                  scanf("%d",&longitud);
                  printf("Ingrese la altura:\n");
                  scanf("%d",&altura);
                  if(longitud<0 || altura<0){
                      printf("Error: No puede ingresar numeros negativos\n");
                  }
                 }while(longitud<0 || altura<0);
                  area = area_rectangulo(longitud,altura);
                  
                  perimetro = perimetro_rectangulo(longitud,altura);
                  
                  imprimir_resultados(area, perimetro);
                  
                  printf("Diagonal: \n");
                  diagonal = diagonal_rectangulo((float)longitud,(float)altura);
                  printf("La diagonal del rectangulo es : %.3f\n",diagonal);
        break;
                  
              
             
            
        case 2:
             printf("circulo: \n");
             
             printf("Perimetro - Area:\n\n");
                
                  printf("Ingresa el radio del circulo:\n");
                  scanf("%f",&radio);
                  perimetro_c = perimetro_circulo(radio);
                  area_c = area_circulo(radio);
                  imprimir_resultados(area_c,perimetro_c);
             
        break;
             
             
             default:
             printf("\n\n-------- ¡Hasta luego!--------\n");
    }
    
    
  }while(opcion != 0);    
    
    
   
        
        

    return 0;
}
