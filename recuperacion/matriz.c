#include <stdio.h>
#include <stdlib.h>
#define tam 5

main(){
    int m,m2,n, a[tam],i,b, suma,me,c[tam],e[tam];
    do{
        system("cls");
        printf("1 Capturar\n");
        printf("2 Mostrar\n");
        printf("3 Fila A Vector\n");
        printf("6 Invertir\n");
        printf("8 Salir\n");
        scanf("%d",&m);

        switch(m){
        case 1:
            printf("Por favor ingrese su valor\n");
            for(i=0;i<tam;i++){
                printf("Valor en la posicion: %d\n", i);
                scanf("%d",&a[i]);
            }
        break;
        case 2:
            printf("Sus Valores de su arreglo son\n");
            for(i=0;i<5;i++){
                printf("Valor para la posicion %d es %d\n",i,a[i]);
            }
            system("pause");
        break;
        case 3:
            do{
                printf("1. Posicion\n");
                printf("2. Valor\n");
                printf("3. Regresar\n");
                scanf("%d",&m2);
                    switch(m2){
                        case 1:
                            printf("Busqueda Por Posicion\n");
                            printf("Ingrese su Posicion\n");
                            scanf("%d",&n);
                            for(i=0;i<tam;i++){
                                if(i == n){
                                    printf("En la posicion %d fue encontrado en el valor %d\n",i,a[i]);
                                }

                            }
                          system("pause");

                        break;
                        case 2:
                            b=0;
                            printf("Busqueda Por Valor\n");
                            printf("Ingrese su Valor\n");
                            scanf("%d",&n);
                            for(i=0;i<tam;i++){
                                if(a[i] == n){
                                    b++;
                                    printf("El Valor %d fue encontrado en la posicion %d\n",a[i],i);
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
                        case 3:

                        break;
                        default:
                            printf("Incorrecto\n");


                    }
            }while(m2 != 3);

        break;

        case 4:
            suma=0;
            printf("Promedio\n");
            for(i=0;i<tam;i++){
                suma=a[i]+suma;
            }
            suma=suma/tam;
            printf("Tu promedio es %d\n", suma);
            system("pause");
        break;

        case 5:
            me=0;
            printf("Numero Minimo\n");
            for(i=0;i<tam;i++){
                if(i==0)
                    me=a[i];
                if(a[i] < me)
                    me=a[i];
            }
            printf("Tu numero menor es %d\n",me);
            system("pause");
            break;
        case 6:
            printf("Invertir\n");
            for(i=tam-1;i>=0;i--){
                printf("Poscicion %d Valor es %d\n",i,a[i]);
            }
            system("pause");
        break;
        case 7:
            printf("Suma Un Vector\n");
            printf("ingrese sus Valores del nuevo vector\n");
            for(i=0;i<tam;i++){
                printf("Ingrese el valor en posicion %d",i);
                scanf("%d",&c[i]);
            }
            for(i=0;i<tam;i++){
                e[i]=a[i]+c[i];
            }
            for(i=0;i<tam;i++){
                printf("%d + %d = %d\n", a[i],c[i],e[i]);
            }

        system("pause");
        break;
        case 8:

        break;
        default:
            printf("Incorrecto\n");

        }


    }while(m != 8);
}
