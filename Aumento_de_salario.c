#include<stdio.h>

int main()
{
    char nombre[40];
    int salario;
    float aumentodesalario;

    printf("Por favor Inserta tu nombre\n");
    gets(nombre);

    printf("Inserte su salario mensual\n");
    scanf("%i",&salario);

    aumentodesalario = (salario*.1)+salario;
    printf("Felicidades %s tu salario ahora es de %.2f \n",nombre,aumentodesalario);

    return 0;
}