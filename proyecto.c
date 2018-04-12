#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define tam 50

struct a{
    char nombre[20];
    char apellido[20];
    int password;
    int code;
}users[tam];



int login();
int loginUser(char user[50], int passG);
void end();
void gerente();
int compare(char n[50], char n3[50]);
int loginU(char [50],int,int);



main(){
    int m, pasG, admin, cUsers;
    cUsers=0;
    do{
        admin=0;
        system("cls");
        printf("1 Iniciar\n2 Salir");
        scanf("%d",&m);
        if(m==1)
           admin=login(cUsers);
        if(admin)
            gerente();
    }while(m !=2);

}

int login(int cUsers){
    char user[50];
    int pasG;
    int result;
    char userC[8] = "Gerente";

    fflush(stdin);
    printf("Usuario: ");
    gets(user);

    fflush(stdin);
    printf("\nPassword: ");
    scanf("%d",&pasG);

    result= compare(user,userC);

    if(result && pasG == 1212)
        return 1;
    else
        return(loginU(user,pasG,cUsers));
}

int loginU(char user[50],int pasG,int cUsers){
    int i, result;
    if(cUsers == 0){
            printf("Usuario Inesistente\n");
            getch();
            return 0;
    }

    for(i=0;i<=cUsers;i++){
        result= compare(user,users[i].nombre);
        if(result && pasG == users[i].password)
            return 1;
        else{
            printf("Usuario Inesistente\n");
            getch();
            return 0;
        }

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
    printf("Bienvenido!");
    system("pause");
}


