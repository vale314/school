#include <stdio.h>
#include <stdlib.h>

struct Producto{
    int codigo;
    char nombre[20];
    int precio;
    int ex;
    char provedor [20];
}producto[4];

int n=0;

void capturar();
void mostrar();
void bC();
void bP();
void modificar();
void mostrarOne(int y);

main(){
    system("cls");
    int m=0, m5;
    do{
        printf("1 capturar\n");
        printf("2 Mostrar\n");
        printf("3 Buscar\n");
        printf("4 Modificar\n");
        printf("5 salir\n");
        scanf("%d",&m);
        switch(m){
            case 1:
                capturar();
            break;
            case 2:
                mostrar();
            break;
            case 3:
                do{
                    system("cls");
                    printf("1 Codigo\n");
                    printf("2 Provedor\n");
                    printf("3 Regresar\n");
                    scanf("%d",&m5);
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
            case 5:

            break;
            default:
                printf("Incorrecto\n");

        }
    }while(m != 5);

}

void capturar(){
    system("cls");
    if(n>=5){
        printf("Lista Llena\n");
        return;
    }

    fflush(stdin);
    printf("Ingrese su Codigo\n");
    scanf("%d",&producto[n].codigo);
    fflush(stdin);
    printf("Ingrese su nombre\n");
    gets(producto[n].nombre);
    printf("Ingrese su precio\n");
    scanf("%d",&producto[n].precio);
    printf("Ingrese su existencia\n");
    scanf("%d",&producto[n].ex);
    printf("Ingrese Nombre De provedor\n");
    fflush(stdin);
    gets(producto[n].provedor);
    n++;
}
void mostrar(){
    system("cls");
    int i;
    for(i=0;i<n;i++){
        printf("Codigo %d\n",producto[i].codigo);

        printf("Nombre %s\n",producto[i].nombre);

        printf("precio %d\n",producto[i].precio);

        printf("existencia %d\n",producto[i].ex);

        printf("provedor %s\n",producto[i].provedor);

        printf("\n");
    }

}

void mostrarOne(int y){

        printf("Codigo %d\n",producto[y].codigo);

        printf("Nombre %s\n",producto[y].nombre);

        printf("precio %d\n",producto[y].precio);

        printf("existencia %d\n",producto[y].ex);

        printf("provedor %s\n",producto[y].provedor);

        printf("\n");


}

void bC(){
    int i,x,y;
    printf("Introdusca el codigo\n");
    scanf("%d",&x);
    y=0;
    if(!n){
        printf("Lista Vacia\n");
        getch();
        return;
    }
    for(i=0;i<=n;i++){
        if(producto[i].codigo == x){
            mostrarOne(i);
            y++;
        }
    }
    if(y)
        printf("El Producto Fue encontrado %d\n",y);
    else
        printf("El Producto No Fue Encontrado\n");
    getch();

}
void bP(){
    int i,y;
    char x[20];
    printf("Introdusca el Nombre\n");
    fflush(stdin);
    gets(x);
    y=0;
    if(!n){
        printf("Lista Vacia\n");
        getch();
        return;
    }
    for(i=0;i<=n;i++){
        if(strcmp(producto[i].provedor , x)==0){
            mostrarOne(i);
            y++;
        }
    }
    if(y)
        printf("El Producto Fue encontrado %d\n",y);
    else
        printf("El Producto No Fue Encontrado\n");
    getch();
}
void modificar(){

}
