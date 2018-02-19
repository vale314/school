#include <stdio.h>
#include <stdlib.h>


main(){
    int n, i, s;
    char m;
     m='s';

    while(m =='1' || m=='S' || m=='s'){
        system("cls");
        printf("Por favor introdusca su numero\n");
        scanf("%d",&n);
        i=0;
        s=0;
        while(i <= n){
            s=i+s;
            if(i<=n)
                printf("%d",i);
            if(i<n)
                printf("+");
            i++;
        }
        printf("=%d",s);
        printf("\n Desea otro numero 1, S, s\n");
        fflush(stdin);
        scanf("%c",&m);
    }

}
