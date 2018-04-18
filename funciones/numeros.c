#include <stdio.h>
#include <stdlib.h>

multi_tab(){
    int num,num1,num3,i;
    printf("Numero\n");
    scanf("%d",&num);
    printf("Numero Inicial\n");
    scanf("%d",&num1);
    printf("Numero Final\n");
    scanf("%d",&num3);
    for(i=num3;i>=num1;i--){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    system("pause");

}

main(){
    int i;
    do{
        multi_tab();
    printf("Desea Ingresar Otro dato 1-si\n");
    scanf("%d",&i);
    }while(i==1);
}
