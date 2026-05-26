#include <stdio.h>

int main()
{

    //Movimento da torre
    printf("Movimento da torre:\n");
    for (int i = 1; i <=5; i++) {
        printf("Direita\n");
    }
    printf("\n");
    //Movimento do bispo
    printf("Movimento do bispo:\n");
    int b = 1;
    while ( b <= 5) {
        printf("Diagonal para cima e a direita\n");
        b++;
    }
    printf("\n");
    //Movimento da rainha
printf("Movimento da rainha:\n");
int rainha = 1;
do {
    printf("Esquerda\n");
    rainha++;
} while (rainha <= 8);

printf("\n");

//Movimento do cavalo
printf("Movimento do cavalo:\n");
int c;
int passosEsquerda = 0;

for (c = 1; c <= 2; c++) {
    printf("Baixo\n");
    
    if (c == 2) {
        do {
            printf("Esquerda\n");
            passosEsquerda++;
        } while (passosEsquerda < 1);
    }
}

return 0;
}
