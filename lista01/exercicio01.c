#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, soma=0;

    while (i>0 && i<1000){
        i++;

        if( i%2 != 0  &&  i%5 == 0 ){
            soma += i;
        }
    };

    printf("A soma de todos os numeros impares que sao multiplos de 5 eh %d",soma); 
    
    return 0;
}
