#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
    int a;
    char n[50];
    printf("Por favor introdusca su nombre\n");
    gets(n);
    printf("Por favor Introdusca sus años\n");
    scanf("%d",&a);
    system("cls");
    printf("Su nombre es %s\n has vivido %d dias\n %d semanas\n y %d meses\n", n, a*365, a*48, a*12);

    system("pause");
    return(0);
}
