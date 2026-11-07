#include <stdio.h>

void mensagem(void) {
    printf("Olá Claude!\n");
}

void saudar(int idade) {
    printf("Tenho %d anos\n", idade);
}

void nome(char texto[]) {
    printf("Me chamo %s\n", texto);
}

void apresentar(char texto[], int idade) {
    printf("Me chamo %s e tenho %d anos\n", texto, idade);
}

int somar(int a, int b) {
    return a + b;
}

void subtrair(int a, int b) {
    printf("A subtração é: %d\n", a - b);
}

int multiplicar(int a, int b) {
    return a * b;
}

int dobro(int n) {
    return n + n;
}

void parOuImpar(int n) {
    if (n % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }
}

int main(void) {
    printf("Hello World!\n");
    printf("Oi claude!\n");
    mensagem();
    nome("Matheus");
    saudar(25);
    apresentar("Matheus", 25);
    subtrair(10, 4);

    int produto = multiplicar(5, 10);
    printf("A multiplicação é %d\n", produto);

    int resultado = somar(3, 4);
    printf("Resultado: %d\n", resultado);

    int d = dobro(8);
    printf("O dobro é: %d\n", d);

    printf("%d\n", dobro(somar(3, 4)));

    parOuImpar(7);
    parOuImpar(8);
    

    return 0;
}