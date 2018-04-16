#include <stdio.h>
#include <stdlib.h>
#define s scanf
#define p printf

void cuadrado();
void recatangulo(int,int);
int triangulo(){
    int b,a;
    p("\ Captura la base: ");
    s("%i",&b);
    p("\n captura la altura: ");
    s("%i",&a);
    return b*a/2;
}

float circulo(float r)
{
    return 3.1416*r*r;
}
int main(){
    float r,area;
    int op,base,altura;
    do{
        p("\n\n***FUNCIONES***\n");
        p("\n1. Cuadrado\n2. Rectangulo\n3. Triangulo\n4. Circulo\n5. Salir\nOpcion");
        s("%i",&op);
        switch(op)
        {

            case 1:
                p("\n Area de un cuadrado (SRSP)\n");
                cuadrado();
                break;
            break;
            case 2:
                p("\n Area de un rectangulo (SRCP) \n");
                p("\n Captura la base: ");
                s("%i",&base);
                p("\n Captura la altura: ");
                s("%i",&altura);
                rectangulo(base,altura);
            break;
            case 3:
                p("\n Area de un triagulo (CRCP)\n");
                p("\n El area es: %i",triangulo());
            break;
            case 4:
                p("\n Area de un circulo (CRSP) \n");
                p("\n Captura el radio: ");
                s("%f",&r);
                area=circulo(r);
                p("\n El area es: %.2f \n",area);
            break;
            case 5:
                p("\n Fin del programa\n");
            break;
            default:
                p("\n Opcio incorrecta\n");
        }
    }while(op != 5);

    return 0;
}
void cuadrado()
{

    int l;
    p("\ Captura el lado: ");
    s("%i",&l);
    p("\n El area del lado %i es: %i ",l,l*l);
}

void rectangulo(int b,int a)
{

    p("\n El area de la base %i por la altura %i es %i",b,a,b*a);
}
