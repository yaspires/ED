#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    float mediapar, media, par=0, impar=0, somapar=0, soma=0;
    printf("Insira (0) para parar.\n");

    while(i>0){
         i++;
        printf("Insira um numero:");
        scanf("%d",&i);

        if(i%2 != 0){
            par++;
            somapar += i;

        }else{
            impar++;
        }
        soma +=i;
        }

        mediapar = somapar/par;
        media = soma/(par+impar-1);

        printf("\n Numeros pares: %.0f\n Numeros impares: %.0f\n Media dos numeros pares: %.2f\n Media geral: %.2f.", par, impar-1, mediapar, media);

    return 0;
}