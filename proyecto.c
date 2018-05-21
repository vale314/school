/*
    R.O Valentin Alejandro
    F:  21/05-/18
    DP: Punto De Venta
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

#define tam 50

struct a{
    char nombre[20];
    char apellidoP[20];
    char apellidoM[20];
    char area[20];
    char usuario[20];
    char password[20];
    char ide[20];
}users[tam];

struct b{
    int idVentas;
    char ide[20];
    char fecha[128];
}ventas[tam];

struct c{
    int idVentas;
    int idProducto;
    int cantidad;
}detalleV[tam];

struct d{
    int idProducto;
    char nombre[20];
    char provedor[20];
    int precio;
    int existencia;
}productos[tam];

int login();
int loginUser(char[50], int);
void end();
int compare(char [50], char [50]);
int loginU(char [50],char[50]);
void menuG();
void nuevoUser();
void showUsers();
void searchUserId(int *,int *);
void searchUserA();
void modificarUN(int);
void modificarUP(int);
void deleteUser();
void ventasE(int);
void menuUser();
void generetePass();
void toupeerF(char *);
void removeArray(char *,int );
void removeE(char *,int );
void showUser(int);
int compareId(char [20]);
void ventasET(int);
void totalV();
void productosS();
int returnPosUser(int);
int compareUser(char [20]);

void productosM();
void productosC();
void ventaP();
void busquedaP();
void productosShowAll();
void productosShow(int );
int busquedaPId();
int idProducto(int);
void removeP();
int ventaPId(int);
void timeF(int);
void factura();
int posIdP(int);
int ventaPC(int ,int );

int cUsers=0;
int numberIdC=0;
int cVentas=0;
int cProductos=0;
int comparePass(char [20]);
int ventasId=1;
char ideGlobal[20];

main(){
    int m, pasG, admin;

    do{
        admin=0;
        system("cls");
        system("color 06");
        printf("\t\t\tBienvenido\n\n");
        printf("1 Iniciar\n2 Salir\n");
        scanf("%d",&m);
        if(m==1)
           admin=login(cUsers);
        if(admin == 1)
            menuG();
        if(admin ==2)
            menuUser();
        if(admin == 3)
            break;
    }while(m !=2);

}


///Login From Admin
int login(){
    char user[50];
    char pasG[50];
    int result;
    int result1;
    char userC[8] = "Gerente";

    fflush(stdin);
    printf("Usuario: ");
    fflush(stdin);
    gets(user);

    fflush(stdin);
    printf("\nPassword: ");
    fflush(stdin);
    gets(pasG);

    result= compare(user,userC);
    result1= compare(pasG,"1212");

    if(result && result1 == 1)
        return 1;
    else
        return(loginU(user,pasG));
}

///Login From Users
int loginU(char user[50],char pasG[50]){
    int i, result, n;
    if(!cUsers){
            printf("Usuario Inesistente\n");
            getch();
            return 0;
        }
    if(user[0]=='\0' && pasG[0] =='\0'){
        printf("Usuario Inesistente\n");
        getch();
        return 0;
    }
    for(i=0;i<=cUsers;i++){
        result= compare(user,users[i].usuario);
        if(result && compare(pasG,users[i].password)){
            strcpy(ideGlobal,users[i].ide);
            return 2;
        }
        else
            n=1;
    }
        if(n==1){
            printf("Usuario Inesistente\n");
            getch();
            return 0;
        }
}

/// Comparar Cadenas Funcion
int compare(char n[50], char n3[50]){

   int c = 0;

   while (n[c] == n3[c]) {
      if (n[c] == '\0' || n3[c] == '\0')
         break;
      c++;
   }
      if (n[c] == '\0' && n3[c] == '\0')
        return 1;
      else
        return 0;

}

///Nuevo Usuarios Crear
void nuevoUser(){
    char r[20];
    int a=0;
    system("cls");
    printf("\tAgreagar Un Empleado\n");

    printf("Nombre: ");
    fflush(stdin);
    gets(users[cUsers].nombre);
    printf("\nApellido Paterno: ");
    fflush(stdin);
    gets(users[cUsers].apellidoP);
    printf("\nApellido Materno: ");
    fflush(stdin);
    gets(users[cUsers].apellidoM);
    printf("\nArea: ");
    fflush(stdin);
    gets(users[cUsers].area);
    do{
        if(a)
            printf("Ingrese Otro Nombre De Usuario\n");
        printf("\nusuario: ");
        fflush(stdin);
        gets(r);
        a=compareUser(r);
    }while(a);
    strcpy(users[cUsers].usuario,r);

    fflush(stdin);
    generetePass();

    a=0;
    do{
        if(a)
            printf("Ingrese Otro Numero De Usuario\n");
        printf("\nIDEmpleado:");
        fflush(stdin);
        gets(r);
        a=compareId(r);
    }while(a);
    strcpy(users[cUsers].ide,r);
    printf("\nPassword: %s\n",users[cUsers].password);
    system("pause");
    cUsers++;
    return;
}

///Comparar Usuarios Con La BD
int compareUser(char r[20]){
    int i,c;
    c=0;
    for(i=0;i<=cUsers;i++){
            if((strcmp(users[i].usuario,r) == 0) || (strcmp(r,"0") == 0)){
                c=1;
                break;
                }
            else
                c=0;
            }

    if(c==1)
        return(1);
    else{
        return(0);
     }
}

///Gerenerar La Contraseña
void generetePass(){
    char r[tam];
    int i;
    char num[20];
    removeE(users[cUsers].password,20);
    removeE(r,20);

    strncat(r, users[cUsers].apellidoP, 2);
    strncat(r, users[cUsers].nombre, 1);
    toupeerF(&r[0]);
    itoa(numberIdC, num, 10);
    strcat(r,num);
    if(comparePass(r))
        printf("Error 10001\n");
    else{
        strcpy(users[cUsers].password,r);
        numberIdC++;
    }
}

///Remover Todo De Arreglo
void removeE(char *p,int num){
    int i;
    for(i=0;i<20;i++){
        *p='\0';
        p++;
    }
}

///Remover Ultimo Elemento de Arreglo
void removeArray(char *p,int num){
    int i;
    for(i=0;i<20;i++){
        if(*p!='\0'){
            p--;
            *p='\0';
        }
        p++;
    }
}

///Retornar En Mayusculas El ARRAY
void toupeerF(char *p){
    int i;
    for(i=0;i<tam;i++){
        *p=toupper(*p);
        p++;
    }

}

///COMPARAR La Contraseña
int comparePass(char r[20]){
     int i,c;
     c=0;
     for(i=0;i<=cUsers;i++){
                 if(strcmp(users[i].password,r) == 0){
                    c=1;

                    break;
                 }
                 else
                    c=0;
            }

     if(c==1)
                return(1);
     else
                return(0);

}

/// Comprarar La Id Con  BD
int compareId(char r[20]){
     int i,c;
     c=0;
     for(i=0;i<=cUsers;i++){
                 if((strcmp(users[i].ide,r) == 0) || (strcmp(r,"0") == 0)){
                    c=1;
                    break;
                 }
                 else
                    c=0;
            }

     if(c==1)
                return(1);
     else{
                return(0);
     }

}

///Mostrar Todos Usuarios En BD
void showUsers(){
    int i;
    system("cls");
    printf("\t\tUsuarios\n");
    printf("\nCantidad de Usuarios: %d\n\n", cUsers);
    if(cUsers){
        for(i=0;i<cUsers;i++){
            printf("Nombre: %s\n",users[i].nombre);
            printf("Apellido Paterno: %s\n",users[i].apellidoP);
            printf("Apellido Materno: %s\n",users[i].apellidoM);
            printf("Area: %s\n",users[i].area);
            printf("Usuario: %s\n",users[i].usuario);
            printf("Password: %s\n",users[i].password);
            printf("Id: %s\n\n",users[i].ide);
        }
    }
    else
        printf("\n\tInesistentes\n");
    getch();
}

///Buscar User Id
void searchUserId(int *uI,int *e){
    int i,u=1;
    char id[20];
    system("cls");
    printf("Ingrese el Id a buscar\n");
    fflush(stdin);
    gets(id);
    for(i=0;i<=cUsers;i++){
        if(compare(users[i].ide,id)){
           u=1;
           break;
        }
        else
           u=0;
    }
    if(u){
        *uI=i;
        *e=1;
    }
    else{
        printf("Usuario No Existe\n");
        *e=0;
        getch();
    }

}

///Show Only User
void showUser(int num){

    printf("Nombre: %s\n",users[num].nombre);
    printf("Apellido Paterno: %s\n",users[num].apellidoP);
    printf("Apellido Materno: %s\n",users[num].apellidoM);
    printf("Area: %s\n",users[num].area);
    printf("Usuario: %s\n",users[num].usuario);
    printf("Password: %s\n",users[num].password);
    printf("Id: %s\n\n",users[num].ide);

}

///Buscar Por Apellido
void searchUserA(){
    int i,u=0;
    char a[20];
    system("cls");
    printf("\tIngrese el Apellido\n");
    fflush(stdin);
    gets(a);
    system("cls");
    printf("\n\n");
    for(i=0;i<=cUsers;i++){
        if(compare(users[i].apellidoP,a)){
           u++;
           showUser(i);
        }
        if(u==0 && i !=0)
           u=0;
    }

    if(u){
      printf("\nEl Usuario Se Encontro %d",u);
    }
    else{
        printf("Usuario No Existe\n");
    }
     getch();
}

///Modificar Usuario Nombre
void modificarUN(int id){
    printf("\nNombre: \n");
    fflush(stdin);
    gets(users[id].nombre);
}

///Modificar Usuario Pas
void modificarUP(int id){
    char r[20];
    int i=0;
    do{
        if(i)
            printf("Ingrese Una Contraseña Diferente\n");
        printf("\Password: \n");
        fflush(stdin);
        gets(r);
        i=comparePass(r);
    }while(i);
    strcpy(users[id].password,r);
}

///Borrar Un Usuario
void deleteUser(id){
    int c,i;
    printf("Desea Eliminar El Usuario 1-Si\n");
    scanf("%d",&c);
    if(c==1){
        cUsers--;
        if(i<cUsers){
            for(i=id;i<cUsers;i++){
                strcpy(users[i].nombre, users[i+1].nombre);
                strcpy(users[i].apellidoP, users[i+1].apellidoP);
                strcpy(users[i].apellidoM, users[i+1].apellidoM);
                strcpy(users[i].area, users[i+1].area);
                strcpy(users[i].usuario, users[i+1].usuario);
                strcpy(users[i].password, users[i+1].password);
                strcpy(users[i].ide, users[i+1].ide);
            }
        }
    }
    getch();
}

///Ventas De Empleado
void ventasE(int id){
    int i,u=0;
    char a[20];
    for(i=0;i<=cVentas;i++){
        if(strcmp(users[id].ide,ventas[i].ide)==0){
           u++;
        }
    }

    if(u){
        printf("El Usuario %s Obtuvo: %d",users[id].nombre,u);
    }
    else{
        printf("Usuario No Vendio\n");
    }
     getch();
}

/// Ventas De Empleado Totales Dinero
void ventasET(int id){
    int i,j,k,u=0;
    char a[20];

    for(i=0;i<=cVentas;i++){
        if(strcmp(users[id].ide,ventas[i].ide)==0){
            for(j=0;j<=cVentas;j++){
                if(ventas[i].idVentas==detalleV[j].idVentas){
                    for(k=0;k<=cProductos;k++){
                        if(detalleV[j].idProducto == productos[k].idProducto){
                            u=u+(productos[k].precio*detalleV[j].cantidad);
                        }

                    }
                }
            }
        }
    }


    if(u){
        printf("El Usuario %s Obtuvo: %d",users[id].nombre,u);
    }
    else{
        printf("Usuario No Vendio\n");
    }
    getch();
}

///Total Vendido Dia
void totalV(){
    int i,p,j;
    p=0;
    system("cls");
    printf("\n");
    for(i=0;i<=cVentas;i++){
            if(!cVentas){
                printf("No se encuentran ventas\n");
                getch();
            }
            for(j=0;j<=cProductos;j++){
                if(detalleV[i].idProducto == productos[j].idProducto){
                        p=p+productos[j].precio*detalleV[i].cantidad;
                }
            }
    }
    if(cVentas)
        printf("Cantidad Total Vendido por dia %d\n",p);
    getch();
}

/// Productos A Surtir En Cero
void productosS(){
    int i,u;
    u=0;
    system("cls");
    printf("\tLos Productos Agotados \n\n\n");
    for(i=0;i<cProductos;i++){

        if(!productos[i].existencia){
            printf("El Producto %s Se Encuentra Agotado\n\n",productos[i].nombre);
            u++;
        }
    }
    if(!cProductos)
            printf("No se encuentran Productos Aun\n");
    if(!u && cProductos)
        printf("\nNo Se Encuntran Productos Agotados %d",u);
    getch();
}

///Retornar Posicion  User
int returnPosUser(id){
    int i,u;
    for(i=0;i<=cUsers;i++){
        if(compare(users[i].ide,id)){
           u=1;
           break;
        }
        else
           u=0;
    }
    if(u)
        return(i);

    return(0);

}


void menuG(){

    int m,m5,id,u;
    do{
        u=0;
        system("cls");
        system("color 07");
        printf("\t\t\tPunto De Venta\n\n");
        printf("1. Nuevo\n2. Mostrar Todos\n3. Buscar por codigo\n4. Buscar Por Apellido Paterno\n5. Modificar\n6. Eliminar por IDEmpleado\n7. Reportes\n8. Cambiar Usuario\n");
        scanf("%d",&m);
        switch(m){
            case 1:
                nuevoUser();
            break;
            case 2:
                showUsers();
            break;
            case 3:
                searchUserId(&id,&u);
                if(u){
                    showUser(id);
                    getch();
                }
            break;
            case 4:
                searchUserA();
            break;
            case 5:
                do{
                    printf("\t\t\tPunto De Venta\n\n");
                    printf("\n1. Nombre\n2. Contrasena\n3. Regresar\n");
                    scanf("%d",&m5);
                    switch(m5){
                        case 1:
                            searchUserId(&id,&u);
                            if(u)
                                modificarUN(id);
                        break;
                        case 2:
                            searchUserId(&id,&u);
                            if(u)
                                modificarUP(id);
                        break;
                        case 3:

                        break;
                    }
                }while(m5 != 3);

            break;
            case 6:
                searchUserId(&id,&u);
                if(u){
                    showUser(id);
                    deleteUser(id);
                }
            break;
            case 7:
                do{
                    system("cls");
                    printf("\t\t\tPunto De Venta\n\n");
                    printf("\n1. Cantidad de Ventas Realizadas Por Empleado\n2. Total De Ventas Por Empleado ($)\n3. Total vendido por dia\n4. Productos a Surtir\n5. Modificar Productos Existentes\n6. Producto a capturar\n7. Mostrar Todos Los Productos\n8. Regresar");
                    scanf("\n%d",&m5);
                    switch(m5){
                        case 1:
                            searchUserId(&id,&u);
                            if(u)
                                ventasE(id);
                        break;
                        case 2:
                            searchUserId(&id,&u);
                            if(u)
                                ventasET(id);
                        break;
                        case 3:
                            totalV();
                        break;
                        case 4:
                            productosS();
                        break;
                        case 5:
                            productosM();
                            getch();
                        break;
                        case 6:
                            productosC();
                        break;
                        case 7:
                            productosShowAll();
                        break;
                        case 8:

                        break;
                    }
                }while(m5 != 8);

            break;
            case 8:

            break;
        }
    }while(m != 8);
}

///Regresar Id Producto
int idProducto(int id){
    int i,u;
    if(id == 0)
        return(1);
    for(i=0;i<cProductos;i++){
        if(productos[i].idProducto == id)
            return(1);
    }
    return 0;
}

///Productos
void productosC(){
    int id,e=0;
    system("cls");
    do{
        printf("Ingrese el Id:\n");
        scanf("%d",&id);
        e=idProducto(id);

        if(e)
            printf("Ingrese Otro Id\n");

    }while(e);
    productos[cProductos].idProducto=id;
    printf("Ingrese el nombre:\n");
    fflush(stdin);
    gets(productos[cProductos].nombre);
    printf("Ingrese el provedor\n");
    fflush(stdin);
    gets(productos[cProductos].provedor);
    printf("Ingrese el precio\n");
    scanf("%d",&productos[cProductos].precio);
    printf("Ingrese su cantidad\n");
    scanf("%d",&productos[cProductos].existencia);

    cProductos++;

    printf("Producto registrado\n");
    getch();
}

/// Mostrar Todos Los Productos
void productosShowAll(){
    int i;
    system("cls");
    if(!cProductos)
        printf("No Se Encuentran Productos \n");
    for(i=0;i<cProductos;i++){
        printf("Id: %d\n",productos[i].idProducto);
        printf("Nombre: %s\n",productos[i].nombre);
        printf("Provedor %s\n",productos[i].provedor);
        printf("Precio %d\n", productos[i].precio);
        printf("Cantidad %d\n", productos[i].existencia);
        printf("\n");
    }
    getch();
}

///Productos Mostrar Uno
void productosShow(int p){
        printf("Id: %d\n",productos[p].idProducto);
        printf("Nombre: %s\n",productos[p].nombre);
        printf("Provedor %s\n",productos[p].provedor);
        printf("Precio %d\n", productos[p].precio);
        printf("Cantidad %d\n", productos[p].existencia);
        printf("\n");
}

///Busqueda Por Provedor
void busquedaP(){
    int i,n;
    char p[20];
    system("cls");
    printf("Nombre del provedor\n");
    fflush(stdin);
    gets(p);
    if(!cProductos){
        printf("Inesistentes\n");
        getch();
        return;
    }
    n=0;
    for(i=0;i<cProductos;i++){
        if(strcmp(p,productos[i].provedor) == 0){
            productosShow(i);
            n=1;
        }
        if(n==0 && i !=0)
           n=0;
    }
    if(!n)
        printf("No Encontrado Producto\n");
    getch();

}

///Busqueda Por Id
int busquedaPId(){
    int i,n,a1;
    printf("Ingrese su ID:\n");
    scanf("%d",&n);
    if(!cProductos){
        printf("No Se Encuentran Productos \n");
        return(11000);
    }
    a1=11000;
    for(i=0;i<cProductos;i++){
        if(productos[i].idProducto==n){
            productosShow(i);
            a1=i;
        }
    }
     if(!n || a1==11000){
        printf("No Encontrado Producto\n");
        return(11000);
     }

    return(a1);
}


///Productos Nodificar Funcion
void productosM(){
    int id,m;
    id=busquedaPId();

    if(id != 11000){
        printf("Desea Modificarlo 1.-Si 2.-NO\n");
        scanf("%d",&m);
        system("cls");
        if(m==1){
            printf("Ingrese el nombre:\n");
            fflush(stdin);
            gets(productos[id].nombre);
            printf("Ingrese el provedor\n");
            fflush(stdin);
            gets(productos[id].provedor);
            printf("Ingrese el precio\n");
            scanf("%d",&productos[id].precio);
            printf("Ingrese su cantidad\n");
            scanf("%d",&productos[id].existencia);

            printf("Producto Modificado\n");
        }
    }
}

///Remover Un Producto
void removeP(){
    int id,m,i;
    id=busquedaPId();
    if(id != 11000){
        printf("Desea Eliminarlo 1.-Si 2.-NO\n");
        scanf("%d",&m);
        if(m==1){
            i=id;
            cProductos--;
            if(i<cProductos){

                for(i;i<cProductos;i++){
                    strcpy(productos[i].nombre, productos[i+1].nombre);
                    strcpy(productos[i].provedor, productos[i+1].provedor);
                    productos[i].existencia=productos[i+1].existencia;
                    productos[i].idProducto=productos[i+1].idProducto;
                    productos[i].precio=productos[i+1].precio;
                }
            }
        }
    }
}

///Venta Busqueda Producto
int ventaPId(int id){
    int i,n,a1;

    if(!cProductos){
        printf("No Se Encuentran Productos \n");
        return(1);int i;
    }
    a1=11000;
    for(i=0;i<cProductos;i++){
        if(productos[i].idProducto==id){
            if(productos[i].existencia !=0)
                return(0);
            else{
                printf("Producto Esta Agotado\n");
                return(1);
            }
        }
    }
     if(!n || a1==11000){
        printf("No Encontrado Producto\n");
     }

    return(a1);
}

///Time
void timeF(int i){
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char output[128];
    strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
    strcpy(ventas[i].fecha,output);
}

///Vneta Por Cantidad
int ventaPC(int id,int c){
    int i,n,a1;

    for(i=0;i<cProductos;i++){
        if(productos[i].idProducto==id){
            if(c <= productos[i].existencia){
                productos[i].existencia=productos[i].existencia-c;
                return(0);
            }
            else{
                printf("Productos  Maximos Existentes: %d\n",productos[i].existencia);
                return(1);
            }
        }
    }
    return(1);
}


void ventaP(){
    int id,c;
    system("cls");
    printf("Producto a vender Id\n");
    scanf("%d",&id);
    if(ventaPId(id))
        return;
    printf("Cantidad \n");
    scanf("%d",&c);
    if(ventaPC(id,c))
        return;
    cVentas++;
    detalleV[cVentas].cantidad=c;
    detalleV[cVentas].idProducto=id;
    detalleV[cVentas].idVentas=ventasId;
    ventas[cVentas].idVentas=ventasId;
    strcpy(ventas[cVentas].ide,ideGlobal);
    timeF(cVentas);
    ventasId++;
    factura(id);
}

///Posiccion Id De Un Producto
int posIdP(int id){
    int i;
     for(i=0;i<cProductos;i++){
        if(productos[i].idProducto==id){
            return(i);
        }
    }
    return(0);
}

/// Mostrar La Venta
void factura(){
    int i,j;
    system("cls");
    printf("\t\tAbarrotes\n\n");
    i=returnPosUser(ideGlobal);
    printf("\tVenta Realizada Por:\n   ");
    j=posIdP(detalleV[cVentas].idProducto);
    printf("\t%s %s %s\n",users[i].nombre,users[i].apellidoP,users[i].apellidoM);
    printf("Nombre\t\tCantidad\t\tPrecio\n");
    printf("%s\t\t\t%d\t\t\%d\n\n",productos[j].nombre,detalleV[cVentas].cantidad,productos[j].precio);
    printf("\t\t\tTotal:   %d\n\n",detalleV[cVentas].cantidad*productos[j].precio);
    printf("ID:%d\t\t\tFecha: %s\n",ventasId-1,ventas[cVentas].fecha);
}



void productosProv(){
    char a[20];
    int i,r=1,e=0;
    system("cls");
    printf("\nNombre De Provedor\n");
    fflush(stdin);
    gets(a);

    for(i=0;i<cProductos;i++){
        if(strcmp(productos[i].provedor,a)==0){
            printf("Producto: %s Existencia %d\n",productos[i].nombre,productos[i].existencia);
            e=productos[i].existencia+e;
            r=0;
        }
    }
    if(!e)
        printf("\nNo encontrado Provedor o productos Agotados\n\n");
    printf("Productos en Existencia: %d",e);

    return(0);

}

void menuUser(){

    int m, m5,id,m1;
    do{
        system("cls");
        system("color 07");
        printf("\t\t\tPunto De Venta\n\n");
        printf("1. Productos\n2. Ventas\n3. Cambiar De Usuario\n");
        scanf("%d",&m);
        switch(m){
            case 1:
                do{
                    system("cls");
                    printf("\t\t\tPunto De Venta\n\n");
                    printf("1. Capturar\n2. Mostrar Los Productos\n3. Busqueda De Productos\n4. Modificar Los Productos\n5. Eliminar\n6. Productos Por Provedor\n7. Ir Menu Principal\n");
                    scanf("%d",&m1);
                    switch(m1){
                        case 1:
                            productosC();
                        break;
                        case 2:
                            productosShowAll();
                        break;
                        case 3:
                            do{
                                system("cls");
                                printf("\t\t\tPunto De Venta\n\n");
                                printf("Ingrese el tipo de busqueda\n1. Provedor\n2. Por Id\n3. Salir\n");
                                scanf("%d",&m5);
                                switch(m5){
                                    case 1:
                                        busquedaP();
                                    break;
                                    case 2:
                                        busquedaPId();
                                        getch();
                                    break;
                                    case 3:

                                    break;

                                }
                            }while(m5!=3);
                        break;
                        case 4:
                            productosM();
                            getch();
                        break;
                        case 5:
                            removeP();
                            getch();
                        break;
                        case 6:
                            productosProv();
                            getch();
                        break;
                        case 7:
                        break;

                    }

                }while(m1!=7);

            break;

            case 2:
                ventaP();
                getch();
            break;
            case 3:

            break;


        }
    }while(m != 3);
}
