
#include <stdio.h>

void tipos(void) {
    // int: guarda números inteiros
    int idade = 25;

    // float: guarda números com casas decimais
    float altura = 1.75;

    // char: guarda APENAS UM caractere (usa aspas simples '')
    char inicial = 'G';
}

void lerNumero(void) {
    int numero;

    // PRINTF: Mostra mensagem na tela
    printf("Digite um numero inteiro: ");

    // SCANF: Lê o teclado. O '&' indica onde salvar o valor na memória
    // %d avisa que estamos esperando um número inteiro (int)
    scanf("%d", &numero);

    printf("Voce digitou o numero: %d\n", numero);
}

void condicao(void) {
    int nota = 7;

    // A condição SEMPRE fica entre parênteses ( )
    if (nota >= 6) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
}

void lacos(void) {
    // WHILE: executa enquanto a condição for verdadeira
    int contador = 1;
    while (contador <= 3) {
        printf("While contador: %d\n", contador);
        contador++;
    }

    // FOR: (começa em 1; vai até 3; aumenta de 1 em 1)
    for (int i = 1; i <= 3; i++) {
        printf("For i: %d\n", i);
    }
}

void soma(void) {
    int numero1;
    int numero2;
    int resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite mais um numero: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;

    printf("A soma dos numeros eh: %d\n", resultado);
}

int main(void) {
    // Tire o // da frente da função que quiser executar:
    // tipos();
    // lerNumero();
    // condicao();
    // lacos();
    soma();

    return 0;
}

// Quando for usar printf ou scanf, lembre-se destas siglas:
// • %d ou %i: Para números inteiros (int).
// • %f: Para números decimais (float).
// • %c: Para um único caractere (char).
// • %s: Para textos/palavras (strings).