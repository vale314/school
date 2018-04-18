#include <stdio.h>
#include <stdlib.h>

void par(int);

main(){
    int i,num;
    do{
        printf("Ingrese Su Numero\n");
        scanf("%d",&num);
        par(num);
        printf("Desea Ingresar Otro dato 1-si\n");
    scanf("%d",&i);
    }while(i==1);
}

void par(num){
    int i,a;
    a=0;
    for(i=1;i<=num;i++){
        if(i%2 ==0){
            printf("%d \n",i);
            a++;
        }
    }
    printf("Pares Encontrados son: %d\n",a);

}
