#include <stdio.h>
#include <stdlib.h>

int pot(int,int);

main(){
    int i,num,num1,pot1;
    do{
        printf("Numero:\n");
        scanf("%d",&num1);
        printf("Potencia:\n");
        scanf("%d",&pot1);
        num = pot(num1,pot1);
        printf("El numero %d a la Potencia %d Es:%d\n",num1,pot1,num);
        printf("Desea Ingresar Otro dato 1-si\n");
    scanf("%d",&i);
    }while(i==1);
}

int pot(a,b){
    int i,num;
    num=a;
    for(i=1;i<b;i++){
        num=a*num;
    }
    return num;
}
