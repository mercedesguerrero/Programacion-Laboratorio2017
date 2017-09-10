#include <stdio.h>
#include <stdlib.h>

#define MINLIMIT 0
#define MAXLIMIT 300
#define INCREMENTO 20

/* Imprime la tabla Farenheit-Celsius
    para fahr = 0, 20, ..., 300 */

int main ()
{
    int fahr;

    printf("Tabla de conversion de Fahrenheit a Celsius: \n\n");

    for (fahr= MINLIMIT ; fahr<= MAXLIMIT ; fahr +=INCREMENTO)
        printf("%3d\t%6.2f\n", fahr, (5.0/9.0)*(fahr-32));

    return 0;


}

/* int main()  OTRA MANERA DE HACERLO
{
    float fahr, celsius;
    int valorMasBajo, valorMasAlto, incremento;

    valorMasBajo = 0;
    valorMasAlto = 300;
    incremento = 20;

    fahr = valorMasBajo;

    printf("Tabla de conversion de Fahrenheit a Celsius: \n\n");

    while (fahr <= valorMasAlto){

        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.2f\n", fahr, celsius); //alineación a la derecha
        fahr = fahr + incremento;
    }

    return 0;

} */
