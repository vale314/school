#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    int c;
    printf("Por favor introdusca su calificacion\n");
    scanf("%d",&c);

    if(c <=59 && c >= 0)
        c=6;
    if(c >=60 && c <= 69)
        c=5;
    if(c >= 70 && c <= 79)
        c=4;
    if(c >=80 && c <= 89)
        c=3;
    if(c >= 90 && c <= 99)
        c=2;
    if(c ==100)
        c=1;



    switch(c){

        case 1:
            printf("Excelente");
            break;

        case 2:
            printf("Muy bien");
            break;
        case 3:
            printf("Bien");
            break;
        case 4:
            printf("Regular");
            break;

        case 5:
            printf("Esfuerzate");
            break;
        case 6:
            printf("Reprobado");
            break;

        default:
            printf("Otro numero porfavor es invalido\n");
    }
}
