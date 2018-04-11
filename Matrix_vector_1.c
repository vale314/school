#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
    int op,x, num=-1;
    int v[5];
    do{
        printf("\nVECTOR 1X1\n");
        printf("\n 1.CAPTURAR\n 2.MOSTRAR\n 3.SALIR\n SELECCIONA UNA OPCION:");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("\n\n CAPTURAR 1X1\n");
                if(num==4)
                    printf("\n LISTA LLENA");
                else
                {

                    num++;
                    scanf("%d",&v[num]);
                }
            break;
            case 2:
                printf("\n\n MOSTRAR\n");
                if(num==-1)
                    printf("\n LISTA VACIA");
                else
                    for(x=0;x<=num;x++)
                        printf("\n %d",v[x]);
            break;
            case 3:
                printf("\n\n FIN DEL PROGRAMA\n");
            break;
            default:
                printf("\n Dato incorrecto\n");
        }
    }while(op != 3);
    getch();

}
