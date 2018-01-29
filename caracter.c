#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
    char c[1], cA[50];
    int nE;
    float nF;
    printf("Por favor introduse un carater\n");
    scanf("%c",&c);
    fflush( stdin );
    printf("Por favor introduce una Cadena\n");
    gets(cA);
    printf("Por favor introduce un entero\n");
    scanf("%d", &nE);
    printf("Por favor introuduce un flotante\n");
    scanf("%f",&nF);

    system("cls");
    printf("Tu Caracter es %s \n tu cadena es %s \n tu entero es %d \n tu flotante es %.2f \n",c,cA,nE,nF);
    printf("Tu operacion es : %.2f \n", nE+nF);

    system("pause");
    return(0);

}
