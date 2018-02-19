#include <stdio.h>
#include <stdio.h>


main(){
    int m, v, a, aM , e;
    v=0; a=0; aM=0; e=0;
    while(m != 4){
        system("cls");
        printf("\t\t\tPlantillas\n\n\n");
        printf("\t\t1 Verde\n");
        printf("\t\t2 Azul\n");
        printf("\t\t3 Amarilla\n");
        printf("\t\t4 Salir\n");

        scanf("%d",&m);

        if(m==1)
            v++;
        if(m==2)
            a++;
        if(m==3)
            aM++;
        if(m !=4 && m>3)
            e++;
    }
    system("cls");
    printf("\t\t Verde %d\n",v);
    printf("\t\t Azul %d\n",a);
    printf("\t\t Amarilla %d\n",aM);
    printf("\t\t Equivocados %d\n",e);
    printf("\t\t Total %d\n",v+a+aM+e);


}
