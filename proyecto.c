#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define tam 50

struct a{
    char nombre[20];
    char apellidoP[20];
    char apellidoM[20];
    char area[20];
    char usuario[20];
    char password[20];
    char ide[20];
    char id[20];
}users[tam];



int login();
int loginUser(char[50], int);
void end();
void gerente();
int compare(char [50], char [50]);
int loginU(char [50],char[50]);
void menuG();
void nuevoUser();
void showUsers();
void searchUserId(int *,int *);
void searchUserA(int *uI,int *e);
void modificarUN(int id);
void modificarUP(int id);
void deleteUser();
void reportes();
void menuUser();
void generetePass();
void toupeerF(char *);
void removeArray(char *p,int num);
void removeE(char *p,int num);
void showUser(int);
int compareId(char [20]);

void productosM();
void ventaP();

int cUsers=0;
int numberIdC=0;
int comparePass(char r[20]);

main(){
    int m, pasG, admin;

    do{
        admin=0;
        system("cls");
        printf("1 Iniciar\n2 Salir");
        scanf("%d",&m);
        if(m==1)
           admin=login(cUsers);
        if(admin == 1)
            gerente();
        if(admin ==2)
            menuUser();
        if(admin == 3)
            break;
    }while(m !=2);

}

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

int loginU(char user[50],char pasG[50]){
    int i, result, n;

    for(i=0;i<=cUsers;i++){
        result= compare(user,users[i].usuario);
        if(result && compare(pasG,users[i].password)){
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


void gerente(){
    menuG();
}

void nuevoUser(){
    char r[20];
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
    printf("\nusuario: ");
    fflush(stdin);
    gets(users[cUsers].usuario);
    fflush(stdin);
    generetePass();


    do{
        printf("\nIDEmpleado:");
        fflush(stdin);
        gets(r);
    }while(compareId(r)==1);
    strcpy(users[cUsers].ide,r);
    printf("\nPassword: %s\n",users[cUsers].password);
    system("pause");
    cUsers++;
    return;
}

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

void removeE(char *p,int num){
    int i;
    for(i=0;i<20;i++){
        *p='\0';
        p++;
    }
}


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

void toupeerF(char *p){
    int i;
    for(i=0;i<tam;i++){
        *p=toupper(*p);
        p++;
    }

}


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

int compareId(char r[20]){
     int i,c;
     c=0;
     for(i=0;i<=cUsers;i++){
                 if(strcmp(users[i].ide,r) == 0){
                    c=1;
                    break;
                 }
                 else
                    c=0;
            }
            printf("%d",c);
     if(c==1)
                return(1);
     else{
                return(0);
     }

}
void showUsers(){
    int i;
    printf("\t\tUsuarios\n");
    if(cUsers){
        for(i=0;i<cUsers;i++){
            printf("Nombre: %s\n",users[i].nombre);
            printf("Apellido Paterno: %s\n",users[i].apellidoP);
            printf("Apellido Materno: %s\n",users[i].apellidoM);
            printf("Area: %s\n",users[i].area);
            printf("Usuario: %s\n",users[i].usuario);
            printf("Password: %s\n",users[i].password);
            printf("Id: %s\n",users[i].ide);
        }
    }
    else
        printf("\tInesistentes\n");
    getch();
}
void searchUserId(int *uI,int *e){
    int i,u=1;
    char id[20];
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
        system("pause");
    }
}

void showUser(int num){
    printf("Nombre: %s\n",users[num].nombre);
    printf("Apellido Paterno: %s\n",users[num].apellidoP);
    printf("Apellido Materno: %s\n",users[num].apellidoM);
    printf("Area: %s\n",users[num].area);
    printf("Usuario: %s\n",users[num].usuario);
    printf("Password: %s\n",users[num].password);
    printf("Id: %s\n",users[num].ide);
    getch();
}

void searchUserA(int *uI,int *e){
    int i,u=1;
    char a[20];
    printf("Ingrese el Apellido\n");
    fflush(stdin);
    gets(a);
    for(i=0;i<=cUsers;i++){
        if(compare(users[i].apellidoP,a)){
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
void modificarUN(int id){
    printf("\nNombre: \n");
    fflush(stdin);
    gets(users[id].nombre);
}
void modificarUP(int id){
    printf("\Password: \n");
    fflush(stdin);
    gets(users[id].password);
}
void deleteUser(id){
    int c,i;
    printf("Desea Eliminar El Usuario 1-Si\n");
    scanf("%d",&c);
    if(c==1){
        if(i==cUsers)
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
                cUsers--;
            }
        }
    }
    getch();
}
void reportes(){
}

void menuG(){

    int m,m5,id,u;
    do{
        u=0;
        system("cls");
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
                if(u)
                    showUser(id);
            break;
            case 4:
                searchUserA(&id,&u);
                if(u)
                    showUser(id);

            break;
            case 5:
                do{
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
                reportes();
            break;
            case 8:

            break;
        }
    }while(m != 8);
}

void menuUser(){

    int m;
    do{
        system("cls");
        printf("1. Productos\n2. Venta\n3. Cambiar De Usuario\n");
        scanf("%d",&m);
        switch(m){
            case 1:
                productosM();
            break;
            case 2:
                ventaP();
            break;
            case 3:

            break;

        }
    }while(m != 3);
}




void productosM(){
}
void ventaP(){
}
