#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmr=1, total=0; 
    float negativo=-1, positivo=0, porcentop, porcenton, media;

    printf("Digite (0) para parar.\n");
    while (nmr<0 || nmr>0){

        printf("Insira um numero: ");
        scanf("%d",&nmr);

        if(nmr>0){
            positivo++;

        }else{
            negativo++;
        }
    
    total += nmr;
    };

    media = total/(positivo+negativo);
    porcentop = (positivo/(positivo+negativo))*100;
    porcenton = (negativo/(positivo+negativo))*100;

    printf("\nNumeros positivos: %.0f \nNumeros negativos: %.0f \nPorcentagem de numeros positivos: %.0f \nPorcentagem de numeros negativos: %.0f \nA media aritmetica dos numeros inseridos: %.2f", positivo, negativo, porcentop, porcenton, media);
    
    return 0;
}