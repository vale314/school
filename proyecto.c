#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int login();
int loginUser(char user[50], int passG);
void end();
void gerente();
main(){
    int m, pasG, admin;

    do{
        system("cls");
        printf("1 Iniciar\n2 Salir");
        scanf("%d",&m);
        if(m==1)
           admin=login();
        if(admin)
            gerente();
    }while(m !=2);

}

int login(){
    char user[50];
    int pasG;
    fflush(stdin);
    printf("Usuario: ");
    gets(user);
    fflush(stdin);
    printf("\nPassword: ");
    scanf("%d",&pasG);

    if(user == 'Gerente' && pasG == 1212)
        printf("Gerente");
    else
        printf("Error");
}

void gerente(){
    printf("Bienvenido!");
}
