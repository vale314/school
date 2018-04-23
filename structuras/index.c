#include <stdio.h>
#include <stdlib.h>

struct Producto{
    int codigo;
    char nombre[20];
    int precio;
    int ex;
    int provedor;
}producto;

void capturar();
void mostrar();
void bC();
void bP();
void modificar();


main(){
    int m=0, m5;
    do{
        printf("capturar\n");
        printf("Mostrar\n");
        printf("Buscar\n");
        printf("Modificar\n");
        printf("Salir\n");
        printf("%d",&m);
        switch(m){
            case 1:
                capturar();
            break;
            case 2:
                mostrar();
            break;
            case 3:
                do{
                    printf("1 Codigo\n");
                    printf("2 Provedor\n");
                    printf("3 Regresar\n");
                    printf("%d",&m);
                    switch(m5){
                        case 1:
                            bC();
                        break;
                        case 2:
                            bP();
                        break;
                        case 3:

                        break;

                        default:
                           printf("Incorrecto\n");


                    }
                }while(m5 != 3);
            break;
            case 4:
                modificar();
            break;

            default:
                printf("Incorrecto\n");

        }
    }while(m != 5);

}

void capturar(){
    fflush(stdin);
    printf("Ingrese su Codigo\n");
    scanf("%d",&producto.codigo);
    fflush(stdin);
    printf("Ingrese su nombre\n");
    gets(producto.nombre);
    printf("Ingrese su precio\n");
    scanf("%d",&producto.precio);
    printf("Ingrese su existencia\n");
    scanf("%d",&producto.ex);
    printf("Ingrese Numero De provedor\n");
    scanf("%d",&producto.provedor);
}
void mostrar(){
    printf("Codigo\n",producto.codigo);

    printf("Nombre\n",producto.nombre);

    printf("precio\n",producto.precio);

    printf("existencia\n",producto.ex);

    printf("provedor\n",producto.provedor);

}
void bC(){
}
void bP(){
}
void modificar(){
}
