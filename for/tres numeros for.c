#include <stdio.h>
#include <stdlib.h>


main(){
    int n1,i, n2 ,n3 , n4,n5,n6;
    char con;
    do{
        printf("Ingrese su Numero\n");
        scanf("%d",&n1);
        n3=0;
        n5=0;
        n4=0;
        for(i=1; i<=n1; i++){
            printf("Por favor Numero Ingrese Numero %d\n",i);
            scanf("%d",&n2);
            if(n2>=n3)
                n3=n2;

            if(i==1)
                n4=n2;
            if(n2<n4)
                n4=n2;




            n5=n2+n5;
        }
        printf("Numero mas grande es %d\n Numero mas chico es %d\n La suma es %d\n",n3,n4,n5);
        fflush(stdin);
        printf("S o s para repetir\n");
        scanf("%c",&con);
    }while(con=='S' || con == 's');
}
