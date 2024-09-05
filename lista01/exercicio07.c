#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, i=0, resultado=1;

    printf("Insira o valor desejado: ");
    scanf("%d",&A);
    printf("%d! = ", A);

    for (i=A; i>1; i--){
        resultado = resultado * i;

        printf("%d X ",i);
    };
    printf("1 = %d.",resultado);

    return 0;
}