#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define tam 30

main(){
    char nombr[tam];
    char aP[tam];
    char aM[tam];
    char d[tam];
    char mes[tam];
    char a[tam];
    char r[tam];
    char x[tam];
    char a1[tam];
    char dep[tam];
    int m,i,i1;
    do{
        system("cls");
        printf("1 Rfc\n");
        printf("2 Correo\n");
        printf("3 Salir\n");
        scanf("%d",&m);

        switch(m){
        case 1:
            for(i=0;i<tam;i++){
                r[i]='\0';
                x[i]='\0';
            }
            system("cls");
            printf("Ingrese Nombre\n");
            fflush(stdin);
            gets(nombr);
            printf("Ingrese Apellido Paterno\n");
            fflush(stdin);
            gets(aP);
            printf("Ingrese Apellido Materno\n");
            fflush(stdin);
            gets(aM);
            printf("Ingrese Dia\n");
            fflush(stdin);
            gets(d);
            printf("IngresE Mes\n");
            fflush(stdin);
            gets(mes);
            printf("Ingrese Año\n");
            fflush(stdin);
            gets(a);


            strncat(r, aP, 2);
            strncat(r, aM, 1);
            strncat(r, nombr, 1);
            i1=2;
            for(i=0;i<2;i++){
                a1[i]=a[i1];
                i1++;
            }
            strncat(r, a1, 2);
            strncat(r, mes, 2);
            strncat(r, d, 2);
            i=0;
             while(r[i] != '\0') {
                  printf("%c",toupper(r[i]));
                  i++;
            }
            printf("\n");
            system("pause");
        break;
        case 2:
             for(i=0;i<tam;i++){
                r[i]='\0';

            }
            system("cls");
            printf("Ingrese Nombre\n");
            fflush(stdin);
            gets(nombr);
            printf("Ingrese Apellido Paterno\n");
            fflush(stdin);
            gets(aP);
            printf("Ingrese Dep\n");
            fflush(stdin);
            gets(dep);
            strncat(r, aP, 2);
            strncat(r, nombr, 1);
            strncat(r, dep, 2);
            strncat(r, "1", 1);
            strcat(r, "@empresa.com.mx");
            i=0;
             while(r[i] != '\0') {
                  printf("%c",tolower(r[i]));
                  i++;
            }
            printf("\n");
            system("pause");
        break;
        case 3:

        break;


        default:
            printf("Incorrecto\n");
            system("pause");
        }


    }while(m != 3);
}
