#include <stdio.h>
#include <stdlib.h>

int main()
{
int nmr=100;
    printf("Sao numeros impares entre 100 e 200: ");
    for(nmr=100; nmr<=200; nmr++){
        if (nmr % 2 != 0){
            printf("%d, ",nmr);
        } 
    }

    return 0;
}