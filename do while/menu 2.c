#include <stdio.h>
#include <stdio.h>


main(){
    int a, num, n, p, m;
    do{
        printf("1 While\n");
        printf("2 Do while\n");
        printf("3 Salir\n");
        scanf("%d", &m);
        a=1;
        num=1;
        switch(m){
            case 1:
                system("cls");
                printf("Potencia con (While)\n");
                printf("Porfavor introdusca su numero\n");
                scanf("%d",&n);
                printf("Porfavor elija la potencia\n");
                scanf("%d",&p);
                system("cls");
                while(a<=p){
                    printf("%d",n);
                    if(a<p)
                        printf("*");
                    num=num*n;
                    a++;
                }
                printf("\nPotencia es : %d\n",num);
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                printf("Potencia con (While)\n");
                printf("Porfavor introdusca su numero\n");
                scanf("%d",&n);
                printf("Porfavor elija la potencia\n");
                scanf("%d",&p);
                system("cls");
                do{
                    printf("%d",n);
                    if(a<p)
                        printf("*");
                    num=num*n;
                    a++;
                }while(a<=p);
                printf("\nPotencia es : %d\n",num);
                system("pause");
                system("cls");
                break;
            case 3:
                break;
            default:
                printf("Incorrecto\n");
        }
    }while(m != 3);
}
