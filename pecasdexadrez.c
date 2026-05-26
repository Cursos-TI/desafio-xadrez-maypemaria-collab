#include <stdio.h>

int main()
{

    //Movimento da torre
    printf("Movimento da torre: ");
    for (int i = 1; i <=5; i++) {
        printf("Direita\n");
    }
    printf("\n");
    //Movimento do bispo
    printf("Movimento do bispo: ");
    int b = 1;
    while ( b <= 5) {
        printf("Diagonal para cima e a direita\n");
        b++;
    }
    printf("\n");
    //Movimento da rainha
    printf("Movimento da rainha: ");
    int rainha = 1;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    
    return 0;
}

//torre move linha reta horizontal ou vertical for 
//bispo move diagonal cinco casas para cima ou baixo while
//rainha todas as direcoes oito casas p esquerda do while