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
    int usuario[20];
    char password[20];
    int id;
}users[tam];



int login();
int loginUser(char[50], int);
void end();
void gerente();
int compare(char [50], char [50]);
int loginU(char [50],char[50]);
void menuG();
void nuevoUser();
void showUser();
void searchUserId();
void searchUserA();
void modificarUser();
void deleteUser();
void reportes();
void menuUser();
void showUser();
void generetePass();
void toupeerF(char *);
void removeArray(char *p,int num);

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
        result= compare(user,users[i].nombre);
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

    printf("\tAgreagar Un Empleado\n");
    printf("IDEmpleado: ");
    fflush(stdin);
    scanf("%d",&users[cUsers].id);
    printf("\nNombre: ");
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
    printf("Password: %s\n",users[cUsers].password);
    system("pause");
    cUsers++;
    return;
}

void generetePass(){
    char r[tam];
    int i;
    char num[20];
    for(i=0;i<tam;i++){
        users[cUsers].password[i]='\0';
        r[i]='\0';
    }
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
void showUser(){
}
void searchUserId(){
}
void searchUserA(){
}
void modificarUser(){
}
void deleteUser(){
}
void reportes(){
}

void menuG(){

    int m;
    do{
        system("cls");
        printf("1. Nuevo\n2. Mostrar Todos\n3. Buscar por codigo\n4. Buscar Por Apellido Paterno\n5. Modificar\n6. Eliminar por IDEmpleado\n7. Reportes\n8. Cambiar Usuario\n");
        scanf("%d",&m);
        switch(m){
            case 1:
                nuevoUser();
            break;
            case 2:
                showUser();
            break;
            case 3:
                searchUserId();
            break;
            case 4:
                searchUserA();
            break;
            case 5:
                modificarUser();
            break;
            case 6:
                deleteUser();
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
