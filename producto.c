#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

main(){
    char nP[50];
    int  c, e;
    float t, p;
    printf("Por favor introduce el nombre del producto\n");
    gets(nP);
    printf("Por favor introduce el precio del producto\n");
    scanf("%f",&p);
    printf("Por favor introduce la cantidad de productos\n");
    scanf("%d",&c);

    printf("Su Precio es: %.2f\n",p*c);
    printf("Su iva es : %.2f\n", p*c*.16);
    t=p*c*.16 + p*c;
    printf("Su Total es: %.2f\n", t);


    printf("Por favor introdusca cantidad de efectivo\n");
    scanf("%d",&e);

    system("cls");
    if(t>e){
        printf("Por favor No es suficiente efectivo\n");
        printf("Dinero faltante es : %.2f\n", t-e);
    }else{
        printf("Su cambio es: %.2f \n", e-t);
    }


    system("pause");
    return(0);


}
