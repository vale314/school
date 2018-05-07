#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
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

main(){
    char a[20],b[20];
    printf("Ingrese una cadena\n");
    fflush(stdin);
    gets(a);
    printf("Ingrese otra cadena\n");
    fflush(stdin);
    gets(b);
    if(compare(a,b))
        printf("i\n");
    else
        printf("d\n");
}
