#include <stdio.h>
#include <stdlib.h>


main(){
    char m2;
    int m1,i,s,n;
    do{
        printf("\t Menu\n");
        printf("1 While\n");
        printf("2 Do while\n");
        printf("3 Salir\n");
        fflush(stdin);
        scanf("%d",&m1);
        system("cls");
        switch(m1){
            case 1:
                do{
                    printf("A Sumatoria\n");
                    printf("B Factorial\n");
                    printf("C Regresar\n");
                    fflush(stdin);
                    scanf("%c",&m2);
                    system("cls");
                    switch(m2){
                        case 'a': case 'A':
                            system("cls");
                            printf("Sumatoria\n");
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
                            printf("=%d\n",s);
                            system("pause");
                            system("cls");
                            break;
                        case 'b': case 'B':
                            system("cls");
                            printf("Factorial\n");
                            printf("Por favor introdusca su numero\n");
                            scanf("%d",&n);
                            i=1;
                            s=1;
                            while(i <= n){
                                s=s*i;
                                if(i<=n)
                                    printf("%d",i);
                                if(i<n)
                                    printf("*");
                                i++;
                            }
                            printf("=%d\n",s);
                            system("pause");
                            system("cls");
                            break;
                        case 'c': case 'C':
                            system("cls");
                            break;
                        default:
                            printf("Incorrecto\n");
                    }
                }while(m2 != 'c' && m2 != 'C');
                break;
            case 2:
                do{
                    printf("A Lista Numero\n");
                    printf("B Sumatoria\n");
                    printf("C Regresar\n");
                    fflush(stdin);
                    scanf("%c",&m2);
                    system("cls");
                    switch(m2){
                        case 'a': case 'A':
                            system("cls");
                            printf("Lista Numero\n");
                            scanf("%d",&n);
                            i=0;
                            do{
                                printf("%d\n ",i);
                                i++;
                            }while(i<=n);
                            printf("\n\n\n");
                            system("pause");
                            system("cls");
                            break;
                        case 'b': case 'B':
                            system("cls");
                            printf("Sumatoria\n");
                            printf("Por favor introdusca su numero\n");
                            scanf("%d",&n);
                            i=0;
                            s=0;
                            do{
                                s=i+s;
                                if(i<=n)
                                    printf("%d",i);
                                if(i<n)
                                    printf("+");
                                i++;
                            }while(i <= n);
                            printf("=%d\n",s);
                            system("pause");
                            system("cls");
                            break;
                        case 'c': case 'C':
                            system("cls");
                            break;
                        default:
                            printf("Incorrecto\n");
                    }
                }while(m2 != 'c' && m2 != 'C');
            case 3:
                break;

            default:
                printf("Incorrecto\n");
        }

    }while(m1 != 3);
}
