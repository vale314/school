#include <stdio.h>
#include <stdlib.h>

int sumaV();

main(){
    int i,num;
    do{
        num = sumaV();
        printf("suma Vector es:%d\n",num);
        printf("Desea Ingresar Otro dato 1-si\n");
    scanf("%d",&i);
    }while(i==1);
}

int sumaV(){
    int i,a, num[3];
    for(i=0;i<3;i++){
        printf("Numero 1:");
        scanf("%d",&num[i]);
    }
    a=0;
    for(i=0;i<3;i++){
       a=num[i]+a;
    }
    return a;
}
