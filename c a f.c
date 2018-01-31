#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


main(){
    float c;

    printf("Por favor introduce tus grados\n");
    scanf("%f",&c);
    printf("Tus grados a F son : %.2f \n", (1.8*c)+32);

    system("pause");
    return(0);
}
