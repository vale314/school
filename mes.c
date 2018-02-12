#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){
    int m;
    printf("Por favor seleciona un dia del mes\n");
    scanf("%d",&m);

    system("cls");
    switch(m){
        case 1:
            printf("Enero 31 dias\n");
            break;
        case 2:
            printf("Febrero 28 o 29 dias\n");
            break;
        case 3:
            printf("Marzo 31 dias\n");
            break;
        case 4:
            printf("Abril 30 dias\n");
            break;
        case 5:
            printf("Mayo 31 dias\n");
            break;
        case 6:
            printf("Junio 30 dias\n");
            break;
        case 7:
            printf("Julio 31 dias\n");
            break;
        case 8:
            printf("Agosto 31 dias\n");
            break;
        case 9:
            printf("Septiembre 30 dias\n");
            break;
        case 10:
            printf("Octubre 31 dias\n");
            break;
        case 11:
            printf("Noviembre 30 dias\n");
            break;
        case 12:
            printf("Diciembre 31 dias\n");
            break;
        default:
            printf("Mes no registrado\n");
    }
}
