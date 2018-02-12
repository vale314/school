#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    char m;
    int r, a;
    float b, al;
    printf("\t Areas\n");
    printf("A: Circulo\n");
    printf("B: Cuadrado\n");
    printf("C: Rectangulo\n");
    printf("D: Triangulo\n");
    printf("E: Salir\n");

    scanf("%c",&m);
    system("cls");

    switch(m){
        case 'A': case 'a':
            printf("Por favor introdusca su Radio\n");
            scanf("%d",&r);
            printf("Su area de circulo es: %.2f\n",r*r*3.14);
            break;
        case 'B':case 'b':
            printf("Por favor introdusca su lado \n");
            scanf("%d",&r);
            printf("Su area de cuadrado es: %d",r*r);
            break;
        case 'C': case 'c':
            printf("Por favor introdusca su lado \n");
            scanf("%d", &r);
            printf("Por favor introdusca su altura\n");
            scanf("%d",&a);
            printf("Su area de Rectangulo es: %d", r*a);
            break;
        case 'D': case 'd':
            printf("Por favor introdusca su base \n");
            scanf("%f",&b);
            printf("Por favor introdusca su altura\n");
            scanf("%f",&al);
            printf("Su area de triangulo es: %.2f", (b*al)/2);
            break;
        case 'E': case 'e':
            printf("Adios\n");
            system("pause");
        default:
            printf("Incorrecto");
    }

}
