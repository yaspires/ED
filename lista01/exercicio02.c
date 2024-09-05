#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float altura=0, maior=0, menor=2.5;

    for(i=0; i<=8; i++){
        printf("Insira a sua altura: ");
        scanf("%f",&altura);

        if(altura>maior){
            maior=altura;
        }

        if(altura<menor){
            menor=altura;
        }
    }
        printf("A maior altura do grupo eh: %.2f \n",maior);
        printf("A menor altura do grupo eh: %.2f \n",menor);

    return 0;
}
