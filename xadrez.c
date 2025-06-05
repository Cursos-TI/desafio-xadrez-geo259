#include <stdio.h>

int main(){
    printf("Desafio xadrez!\n");
}

#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    int i;

    // BISPO (for): Diagonal superior direita
    printf("Bispo:\n");
    for(i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // TORRE (while): Direita
    printf("\nTorre:\n");
    i = 0;
    while(i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }

    // RAINHA (do-while): Esquerda
    printf("\nRainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < MOV_RAINHA);

    return 0;
}
