#include <stdio.h>

int main()
{
    /*float base,altura,area; // Triangulo
    
    printf("Este programa calcula el area de un triangulo\n inserta la base y la altura\n");
    scanf("%f %f",&base,&altura);

    area = (base*altura)/2;
    printf("El area del triangulo es:%.2f",area);*/

    float lado,area;

    printf("Este programa calcula el area de un cuadrado\n inserta el valor del lado\n");
    scanf("%f",&lado);

    area = pow(lado,2);
    printf("El area de el cuadrado es:%.2f",area);

    return 0;
}