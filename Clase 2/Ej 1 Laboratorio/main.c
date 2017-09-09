#include <stdio.h>
#include <stdlib.h>


int main()
{
    float numeroIngresado;
    int cantidad=0;
    float maximo =0;
    float minimo =0;
    float promedio;
    float acumuladorDeNumerosIngresados =0;
    char respuesta;

    do
    {
        printf("Ingrese un numero:\n");
        scanf("%f", &numeroIngresado);

        acumuladorDeNumerosIngresados += numeroIngresado;

        if(cantidad==0)
        {
            maximo = numeroIngresado;
            minimo = numeroIngresado;
        }
        else
        {
            if(numeroIngresado > maximo)
            {
                maximo = numeroIngresado;
            }
            if(numeroIngresado < minimo)
            {
                minimo = numeroIngresado;
            }
        }

    cantidad++;
    printf("Desea seguir ingresando números? s/n");
    fflush(stdin);
    scanf("%c", &respuesta);

    }

    while(respuesta=='s');

    promedio = acumuladorDeNumerosIngresados/cantidad;
    printf("El promedio es: %.2f", promedio);
    printf("\nEl maximo ingresado es: %.2f", maximo);
    printf("\nEl minimo ingresado es: %.2f", minimo);
    return 0;

}
