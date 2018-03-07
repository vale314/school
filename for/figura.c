#include <stdio.h>
#include <stdlib.h>


main(){
    int b,i,j, r,a;
    do{
        printf("Ingrese su base\n");
        scanf("%d",&b);
        printf("Ingrese su altura\n");
        scanf("%d",&a);

        for(i=1; i<=a; i++){
            for(j=1; j<=b; j++){
                printf("*");
            }
            printf("\n");
        }
     printf("Desea repetir ingrese 1\n");
     scanf("%d",&r);
    }while(r == 1);
}
