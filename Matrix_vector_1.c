#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
    int op, x, num=-1, op1, valor, b,n;
    int v[5];
    do{
        printf("\nVECTOR 1X1\n");
        printf("\n 1.CAPTURAR\n 2.MOSTRAR\n 3.ELIMINAR\n 4.SALIR\n SELECCIONA UNA OPCION:");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("\n\n CAPTURAR 1X1\n");
                if(num==4)
                    printf("\n LISTA LLENA");
                else
                {

                    num++;
                    scanf("%d",&v[num]);
                }
            break;
            case 2:
                printf("\n\n MOSTRAR\n");
                if(num==-1)
                    printf("\n LISTA VACIA");
                else
                    for(x=0;x<=num;x++)
                        printf("\n %d",v[x]);
            break;
            case 3:
                do{
                    n=0;
                    system("cls");
                    printf("\n 1.Primiero\n 2.Ultimo\n 3.Valor\n 4.Regresar\n SELECCIONA UNA OPCION:");
                    scanf("%d",&op1);
                    switch(op1){
                        case 1:
                            if(num==-1){
                                printf("\n LISTA VACIA\n");
                                getch();
                            }

                            for(x=0;x<=num;x++){
                                v[x]=v[x+1];
                                if(x==num){
                                    v[x]=NULL;
                                    num--;
                                    break;
                                }
                            }
                        break;
                        case 2:
                            if(num==-1){
                                printf("\n LISTA VACIA\n");
                                getch();
                                break;
                            }
                             for(x=0;x<=num;x++){
                                if(x==num){
                                    v[x]=NULL;
                                    num--;
                                    break;
                                }
                            }
                        break;
                        case 3:
                            if(num==-1){
                                printf("\n LISTA VACIA\n");
                                getch();
                                break;
                            }

                             printf("Valor A Buscar\n");
                             scanf("%d",&valor);
                             for(x=0;x<=num;x++){
                                if(x==num && v[x] == valor){
                                    n=0;
                                    printf("El Numero %d Fue encontrado en [%d]\n",valor,x);
                                    printf("Desea Eliminarlo 1-Si\n");
                                    scanf("%d",&b);
                                    if( b == 1){
                                        v[x]=NULL;
                                        num--;
                                        break;
                                    }else
                                        break;

                                }
                                if(v[x] == valor){
                                    n=0;
                                    printf("El Numero %d Fue encontrado en [%d]\n",valor,x);
                                    printf("Desea Eliminarlo 1-Si\n");
                                    scanf("%d",&b);
                                    if( b == 1){
                                            do{
                                                v[x]= v[x+1];
                                                x++;
                                            }while(x<num);
                                        num--;
                                        break;
                                    }else
                                    break;
                                }
                                n=1;
                            }
                            if(n){
                                printf("NO ENCONTRADO\n");
                                getch();
                            }

                        break;
                        case 4:

                        break;
                    }
                }while(op1 != 4);
            break;
            case 4:
                printf("\n\n FIN DEL PROGRAMA\n");
            break;
            default:
                printf("\n Dato incorrecto\n");
        }
    }while(op != 4);
    getch();

}
