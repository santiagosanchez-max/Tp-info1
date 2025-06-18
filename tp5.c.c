
#include <stdio.h>

//link de modificación tp3
//https://github.com/santiagosanchez-max/Tp-info1/blob/f4b538e366d8267fc0d6813497fa9885ae5cf8a2/tp3%20validacion%20de%20datos.c

int main()
{
    int cantidad_estudiantes;
    int nota_estudiantes;
    int mayor_nota = 0;
    int menor_nota = 100;
    float promedio;
    int suma_nota_estudiante = 0;
    
    do {
        printf("Ingrese la cantidad de estudiantes a evaluar: \n");
        scanf("%d", &cantidad_estudiantes);
        if(cantidad_estudiantes <=0){
          printf("\t \t ERROR \n");
          printf("El numero ingresado debe ser un numero positivo \n");
        }
    }while(cantidad_estudiantes<=0);
    
    for(int i = 0; i<cantidad_estudiantes; i++){
        do{
            printf("Ingrese la nota del estudiante: %d\n", i+1);
            scanf("%d",&nota_estudiantes);
            if(nota_estudiantes <0 || nota_estudiantes >100){
                printf("\t \t ERROR \n");
                printf("Ingrese la nota en un rango de 0 - 100  \n");
            }
        }while(nota_estudiantes <0 || nota_estudiantes >100 );
        
        if(nota_estudiantes > mayor_nota){
            mayor_nota = nota_estudiantes;
            
        }
        
        if(nota_estudiantes < menor_nota){
           menor_nota = nota_estudiantes; 
        }
        
        suma_nota_estudiante += nota_estudiantes;
        
    }
    
    printf("La mayor nota es : %d\n", mayor_nota);
    printf("La menor nota es : %d\n", menor_nota);
    
    promedio = (float)suma_nota_estudiante / cantidad_estudiantes;
    printf("El promedio es : %.2f\n", promedio);

    return 0;
}

