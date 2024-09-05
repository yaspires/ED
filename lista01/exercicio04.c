#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,int1=0, int2=0, int3=0, int4=0;
    printf("Insira um numero negativo para parar.\n");

    while(i>=0){
         i++;
        printf("Insira um numero:");
        scanf("%d",&i);

        if((i>=0)&&(i<=25)){
            int1++;
        }
        if((i>=26)&&(i<=50)){
            int2++;
        }
        if((i>=51)&&(i<=75)){
            int3++;
        }
        if((i>=76)&&(i<=100)){
            int4++;
        }
    }

    printf("Numeros entre 0 e 25: %d", int1);
    printf("\nNumeros entre 26 e 50: %d", int2);
    printf("\nNumeros entre 51 e 75: %d", int3);
    printf("\nNumeros entre 76 e 100: %d", int4);

    return 0;
}