#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

main(){
    char pa[10]="";
    int x, op, cont;
    do{
        fflush(stdin);
        p("\n Captura un palabra: ");
        s("%s",&pa);
        p("\n Motrar cadena on ciclos: ");
        for(x=0;x<=9;x++){
            p("%c",pa[x]);
        }
        p("\n Invetida con un ciclo (como arregle): ");
        cont =0;

        for(x=9; x>=0; x--){
            p("%c",pa[x]);
        }
        cont=0;
        for(x=0;x<=9;x++){
            if(pa[x] == '\n')
                break;
            else
                cont++;
        }
            p("\n Total de letras : %i\n", cont);
            p("\n Otro valor 1-Si " );
            s("%d",&op);

    }while(op==1);
    getch();
    return 0;
}
