#include <stdio.h>
#include <stdlib.h>

main(){
    float b, a;
    printf("Por favor introduce la base del triangulo\n");
    scanf("%f",&b);
    printf("Porfavor introduce la altura del traingulo\n");
    scanf("%f",&a);
    system("cls");
    printf("La area del triangulo es: %.2f \n", b*a/2);

    system("pause");
    return(0);
}
