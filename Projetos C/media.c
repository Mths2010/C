#include <stdio.h>


float CalcularMedia (float a, float b, float c) {
    return (a + b + c) / 3;
}

float Dobro (float x) {
    return (x * 2);
}

void ImparOuPar(int n) {
    if (n % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Ímpar\n");
    }
}
/* 1. pedir um numero
2. se o resto da divisao por 2 for 0, e par; senao, e impar
3. repetir de 1 ate o numero, mostrando cada um */

int main (void) {
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = CalcularMedia(nota1, nota2, nota3);
    printf("Média: %.2f\n", media);


    if (media >= 6) {
        printf("Aprovado! \n");
    } else {
        printf("Reprovado! \n");
    }
    
    

    // CODIGO ANTIGO =  resultado = Dobro(4.5);
    // printf("Dobro: %.2f\n", resultado);

    float numero;
    printf("Digite o número para o dobro: ");
    scanf("%f", &numero);
    printf("Dobro: %.2f\n", /* Chame a função aqui*/ Dobro(numero)); 



    int iop;
    printf("Digite um número: ");
    scanf("%d", &iop);

    ImparOuPar(iop);
    // ImparOuPar(iop);

    // for (int i = 1; i <= iop; i++) {
    //     printf("%d ", i);
    // }
    // printf("\n");

    int tabuada; 

    printf("Digite um número: ");
    scanf("%d", &tabuada);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", tabuada, i, tabuada * i);
    }


    int termial;
    int soma = 0;

    printf("Digite um número: ");
    scanf("%d", &termial);

    for (int i = 1; i <= termial; i++) {
        soma = soma + i;
    }

    
    /* Soma com o for*/ printf("Soma com for: %d\n", soma);
     // MÉTODO COM FÓRMULA
    /* Soma com a fórmula termial*/ printf("Soma com fórmula termial: %d\n", termial * (termial + 1) / 2);


    int nfat;
    int fat = 1;

    printf("Digite um número: ");
    scanf("%d", &nfat);
    for (int i = 1; i <= nfat; i++) {
        fat = fat * i;
    }
    
    printf("Fatorial: %d\n", fat);

    return 0;
}