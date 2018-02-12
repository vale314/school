
#include <stdio.h>
#include <conio.h>


main(){
    int l1,l2,l3;


    printf("Por favor introdusca lado 1\n");
    scanf("%d",&l1);
    printf("Por favor introdusca lado 2\n");
    scanf("%d",&l2);
    printf("Por favor introdusca lado 3\n");
    scanf("%d",&l3);

    if(l1 == l2){
        if(l1 == l3)
            printf("Equilatero");
        else
            printf("Isoceles");
    }else{
        if(l1 == l3)
            printf("Isoceles");
        else
            if(l2 == l3)
                printf("Isoceles");
            else
                printf("Escaleno");
    }

    getch();
}

