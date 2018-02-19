#include <stdio.h>
#include <stdlib.h>

main(){
    int n,i;
    char m;
     m='s';

    while(m =='1' || m=='S' || m=='s'){
        system("cls");
        printf("Por favor introdusca su numero\n");
        scanf("%d",&n);

        i=10;
        printf("n=%d\n",n);
        while(i>0){
            printf("%d * %d = %d\n",n,i, n*i);
            i--;
        }
        printf("Desea otra tabla 1, s, S si\n");
        fflush(stdin);
        scanf("%c",&m);
    }
}
