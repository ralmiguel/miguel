#include <stdio.h>

int main()
{
    float base_menor,base_mayor,altura,area;

    printf("Digita la base menor \n");
    scanf("%f",&base_menor);

    printf("Digita la base mayor \n");
    scanf("%f",&base_mayor);

    printf("Digita la altura \n");
    scanf("%f",&altura);

    area = ((base_mayor+base_menor)*altura)/2;
    printf("\n El area de la figura es de: %.2f mt2",area);

    return 0;

}