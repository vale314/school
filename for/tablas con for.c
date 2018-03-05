#include <stdio.h>
#include <stdlib.h>

main(){
    int i, con, j, n;
    con=1;
    while(con==1){
        printf("Numero a multiplicar \n");
        scanf("%d",&n);
        printf("Numero Inicial \n");
        scanf("%d",&i);
        printf("Numero Final\n");
        scanf("%d",&j);

        for(i;i<=j;i++){
            printf("%d * %d = %d\n",n, i, n*i);
        }
        printf("Desea Repetir Ingrese el 1");
        scanf("%d",&con);
    }
}
