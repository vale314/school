#include <stdio.h>
#include <conio.h>

main(){
    int num;
    printf("Introdusca Num");
    scanf("%d",&num);

    if(num >= 500)
    {
        if(num<=600){
            printf("Aceptado");
        }else{
            printf("No esta aceptado");
        }
    }else{
        printf("No esta aceptado");
    }
    getch();
}
