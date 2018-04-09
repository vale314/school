#include <stdio.h>
#include <stdlib.h>
#define tam 3

main(){
    int m,m2,n, a[tam][tam],i,j,b, suma,me,c[tam];
    do{
        system("cls");
        printf("1 Capturar\n");
        printf("2 Mostrar\n");
        printf("3 Buscar\n");
        printf("4 Sumar un Numero a Fila\n");
        printf("5 Restar un Numero a Columna\n");
        printf("6 Diagonal a Vector\n");
        printf("7 Salir\n");
        scanf("%d",&m);

        switch(m){
        case 1:
            system("cls");
            printf("Por favor ingrese su valor\n");
            for(i=0;i<tam;i++){
                    for(j=0;j<tam;j++){
                        printf("Valor en la posicion: [%d]   [%d]  \n", i,j);
                        scanf("%d",&a[i][j]);
                        system("cls");
                    }
            }
        break;
        case 2:
            system("cls");
            printf("Sus Valores de su arreglo son\n");
            for(i=0;i<tam;i++){
                for(j=0;j<tam;j++){
                    printf("\t %d",a[i][j]);
                }
                printf("\n");
            }
            system("pause");
        break;
        case 3:
            b=0;
            printf("Busqueda Por Valor\n");
            printf("Ingrese su Valor\n");
            scanf("%d",&n);
            for(i=0;i<tam;i++){
                    for(j=0;j<tam;j++){
                       if(a[i][j] == n){
                            b++;
                            printf("El Valor %d fue encontrado en la posicion [%d] [%d]\n",n,i,j);
                        }
                    }
            }
                if(b==1)
                    printf("El valor %d fue encontrado %d vez\n",n,b);
                if(b>1)
                    printf("El valor %d fue encontrado %d veces\n",n,b);
                if(b==0)
                    printf("El valor %d No fue encontrado\n",n);
                printf("\n");
                system("pause");
        break;

        case 4:
            suma=0;
            n=0;
            b=0;
            printf("Suma\n");
            printf("Indique la fila\n");
            scanf("%d",&b);
            for(i=0;i<tam;i++){
                suma=a[b][i]+suma;
            }
            printf("Numero que desea sumar\n");
            scanf("%d",&n);
            printf("Tu suma es %d\n", suma+n);
            system("pause");
        break;

        case 5:
            suma=0;
            n=0;
            b=0;
            printf("Resta\n");
            printf("Indique la Columna\n");
            scanf("%d",&b);
            for(i=0;i<tam;i++){
                suma=a[i][b]+suma;
            }
            printf("Numero que desea Restar\n");
            scanf("%d",&n);
            printf("Tu Resta es %d\n", suma-n);
            system("pause");
        break;


        case 6:
            b=0;
            printf("Diagonal de vector\n");
            for(i=0;i<tam;i++){
                for(j=0;j<tam;j++){
                    if(i==j){
                        c[i]=a[i][j];
                   }
                }
            }
            for(i=0;i<tam;i++){
                printf("El arreglo es %d\n",c[i]);
            }
            system("pause");
        break;
        case 7:

        break;

        default:
            printf("Incorrecto\n");

        }


    }while(m != 7);
}
