#include <stdio.h>
#include <stdlib.h>


main(){
    int r, i, j ,n1;
    do{
    printf("Ingrese Longitud de piramide\n");
    printf("Numero: ");
    scanf("%d",&n1);
         for(i=0; i<=n1;i++){
                    for(j=1; j<=i; j++){
                        printf("%d",j);
                    }
                    printf("\n");
                }
     printf("Desea repetir ingrese 1-Si\n");
     scanf("%d",&r);
    }while(r == 1);
}
