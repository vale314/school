#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define p printf
#define s scanf


main(){
    int num, cont=0;
    char op='1';
    while(op == '1' || op == 'S' || op == 's' )
    {
        p("\n Captura un numero: ");
        s("%i",&num);
        cont = num;
        while(cont >= 1){
            p("\n %i", cont);
            cont -=1;
        }
        p("\n Desea otro dato:(1,S o s para Si)");
        fflush(stdin);
        s("%c",&op);
    }
    getch();

}
