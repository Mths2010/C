#include <stdio.h>

// 1. as funções ficam aqui, ACIMA DO MAIN
float EncontrarMaior(float v[], int tam) {
    // seu codigo
    float maior = v[0];
    

    for (int i = 1; i < tam; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    return maior;
}

float EncontrarMenor(float v[], int tam) {
    // meu código
    float menor = v[0];


    for (int i = 1; i < tam; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }    
    }    

    return menor;
}

float EncontrarMedia(float v[], int tam) {
    // meu codigo
    float soma = 0;

    for (int i = 0; i < tam; i++) {
    soma = soma + v[i];
    }

    return soma / tam;
}    

int main(void) {
    int n;

    printf("Quantos números? ");
    scanf("%d", &n);

    while (n < 1 || n > 100) {
        printf("Valor inválido, tente de novo: ");
        scanf("%d", &n);
    } 

    float numeros[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }    

    float maior = EncontrarMaior(numeros, n);
    printf("Maior: %.2f\n", maior);


    // MENOR NÚMERO

    float menor = EncontrarMenor(numeros, n);
    printf("Menor: %.2f\n", menor);


    // MÉDIA

    float media = EncontrarMedia(numeros, n);
    printf("Média: %.2f\n", media);


    return 0;
}