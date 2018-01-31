#include <stdlib.h>
#include <conio.h>


main(){

    float getSD,sD,sHE, per, imss, ispt, nP;
    int hE, dT, tD;

    char n[50];

    printf("Por favor introduca su nombre\n");
    gets(n);
    system("cls");

    printf("Por favor introdusca el sueldo diario\n");
    scanf("%f",&getSD);
    system("cls");


    // tenemos las horas extra
    printf("Por favor introdusca las horas extras trabajdas\n");
    scanf("%d",&hE);
    system("cls");


    //tenemos los dias trabajados
    printf("Por favor introsuca los dias trabajados\n");
    scanf("%d",&dT);
    system("cls");



    //calcular sueldo
    sD = dT * getSD;


    //calcular las horas extras pagadas
    sHE = getSD/8*2*hE;

    //calculamos percepciones
     per = sD + sHE;

    //calculamos imss
     imss = sD * .05;

    //calculamos ispt
    ispt = sD * .07;

    tD = imss +ispt;

    nP = per - tD;


    printf("\t nomina de %s\n",n);
    printf("percepciones \t \t \t Deduciones \n");
    printf("Sueldo: %.2f \t \t \t Imss: %.2f \n",sD, imss);
    printf("Pago x hrs Ext: %.2f \t \t ispt: %.2f \n", sHE, ispt);
    printf("Total Percepciones: %.2f \t total deduciones: %.2f \n",per, tD);
    printf("Neto a pagar %.2f\n", nP);
    system("pause");

}






