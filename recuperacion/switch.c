#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define p 1850
#define br 1500


main(){
    int m,b,o;
    o=2250;

    printf("1. ORO\n2. PLATA\n3. BRONCE\n");
    scanf("%d",&m);
    switch(m){
        case 1:
            printf("Cantdidad De Boletos\n");
            scanf("%d",&b);
            system("cls");
            printf("Precio de boleto: %d\n",o);
            printf("Importe De Boleto %.2f\n",o-(o*.16));
            printf("Importe de %d Boletos %.2f\n",b,(o-(o*.16))*b);
            printf("Total %d\n",o*b);
        break;
        case 2:
           printf("Cantdidad De Boletos\n");
            scanf("%d",&b);
            system("cls");
            printf("Precio de boleto: %d\n",p);
            printf("Importe De Boleto %.2f\n",p-(p*.16));
            printf("Importe de %d Boletos %.2f\n",b,(p-(p*.16))*b);
            printf("Total %d\n",p*b);

        break;
        case 3:
            printf("Cantdidad De Boletos\n");
            scanf("%d",&b);
            system("cls");
            printf("Precio de boleto: %d\n",br);
            printf("Importe De Boleto %.2f\n",br-(br*.16));
            printf("Importe de %d Boletos %.2f\n",b,(br-(br*.16))*b);
            printf("Total %d\n",br*b);

        break;
    }
}
