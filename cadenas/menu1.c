#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define tam 30

main(){
    char a[tam];
    char b[tam];
    char c[tam];
    int m,n,i;
    do{
        system("cls");
        printf("1 Copiar\n");
        printf("2 Copiar N de Elementos\n");
        printf("3 Concatenar\n");
        printf("4 Concatenar N de Elementos\n");
        printf("5 Comparar\n");
        printf("6 Tamaño De Cadena\n");
        printf("7 Invertir\n");
        printf("8 Convertir A Mayuscalas\n");
        printf("9 Convertir A Minusculas\n");
        printf("10 Salir\n");
        scanf("%d",&m);

        switch(m){
        case 1:
            system("cls");
            printf("Copiar Cadena\n");
            printf("Ingrese Cadena 1\n");
            fflush(stdin);
            gets(a);
            printf( "a=%s\n", a );
            strcpy(b,a);
            printf( "b=%s\n", b );
            system("pause");

        break;
        case 2:
             for(i=0;i<tam;i++){
                b[i]='\0';
            }
            system("cls");
            printf("Copiar Cadena\n");
            printf("Ingrese Cadena 1\n");
            fflush(stdin);
            gets(a);
            printf("Copiar N de Elementos\n");
            scanf("%d",&n);
            strncpy(b,a,n);
            printf( "a=%s\n", a );
            printf( "b=%s\n", b );
            system("pause");
        break;
        case 3:
            system("cls");
            printf("Concaternar\n");
            printf("Ingrese Cadena 1\n");
            fflush(stdin);
            gets(a);
            printf("\n");
            strcat(a," Bienvenido");
            printf("%s\n",a);
            system("pause");
        break;

        case 4:
            system("cls");
            printf("Concaternar\n");
            printf("Ingrese Cadena 1\n");
            fflush(stdin);
            gets(a);

            printf("Ingresa la cantidad de numeros\n");
            scanf("%d",&n);
            printf("\n");

            strncat(a, a, n);
            printf("%s\n",a);
            system("pause");
        break;

        case 5:

            printf("Comparar\n");
            printf("Ingrese La Cadena 1\n");
            fflush(stdin);
            gets(a);
            printf("Ingrese La Cadena 2\n");
            fflush(stdin);
            gets(b);

            if(strcmp(a,b) == 0)
                printf("Las Cadenas Son Iguales\n");
            else
                printf("Las Cadenas Son Diferente\n");

            system("pause");
        break;


        case 6:

            printf("Tamaño De Cadena\n");
            printf("Ingrese La Cadena 1\n");
            fflush(stdin);
            gets(a);
            printf("%d\n",strlen( a ));
            system("pause");
        break;
        case 7:
            printf("Invertir\n");
            printf("Ingrese La Cadena 1\n");
            for(i=0;i<tam;i++){
                a[i]='\0';
            }
            fflush(stdin);
            gets(a);
            for(i = tam-1; i >= 0 ; i--)
            {
                 printf("%c", a[i]);
            }
            printf("\n");
            system("pause");
        break;
        case 8:
            i=0;
            printf("Convertir A Mayusculas\n");
            printf("Ingrese La Cadena 1\n");
            fflush(stdin);
            gets(a);
             while(a[i] != '\0') {
                  printf("%c",toupper(a[i]));
                  i++;
            }
            printf("\n");
            system("pause");
        break;
        case 9:
            printf("Convertir A Minusculas\n");
            printf("Ingrese La Cadena 1\n");
            fflush(stdin);
            gets(a);
            i=0;
             while(a[i] != '\0') {
                  printf("%c",tolower(a[i]));
                  i++;
            }
            printf("\n");
            system("pause");
        break;
        case 10:

        break;
        default:
            printf("Incorrecto\n");
            system("pause");
        }


    }while(m != 10);
}
