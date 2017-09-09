#include <stdio.h>
#include <stdlib.h>
#define NUM_ITERACION 10

int main()
{
    int i;
    int numeroIngresado;
    int contadorNegativos=0;
    int cantidadPositivos;
    {

        for (i=0 ; i<NUM_ITERACION ; i++)
        {
            printf("Ingrese número: \n");
            scanf("%d", &numeroIngresado);
            if (numeroIngresado<0)
            {
                contadorNegativos++;
            }
        }
        cantidadPositivos=NUM_ITERACION-contadorNegativos;
        printf("La cantidad de negativos es %d y la de positivos es %d", contadorNegativos, cantidadPositivos);
        return 0;
    }
}
