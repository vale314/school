#include <stdio.h>
#include <stdlib.h>


main(){
    int n1,n2,con,i,n3;
    do{
         printf("Introdusca su numero\n");
         scanf("%d",&n1);
         printf("Introdusca  su potencia\n");
         scanf("%d",&n2);
         n3=n1;
         for(i=1;i<=n2;i++){
            printf("%d ",n1);
            if(i<n2){
                n3=n3*n1;
                printf("*");
            }
            else
                printf("= %d\n",n3);
         }

         printf("Desea repetir 1\n");
         scanf("%d",&con);
         system("cls");
    }while(con==1);
}
