#include <stdio.h>

float EncontrarMaior(float v[], int tam) {
    float maior = v[0];

    for (int i = 1; i < tam; i ++) {
        if (v[i] > maior) {
            maior = v[i];
        }

    }
    return maior;
}

float EncontrarMenor(float v[], int tam) {
    float menor = v[0];

    for (int i = 1; i < tam; i ++) {
        if (v[i] < menor) {
            menor = v[i];
        }


    }
    return menor;
}

float EncontrarMedia(float v[], int tam) {
    
    float soma = 0;

    for (int i = 0; i < tam; i++) {
        soma = soma + v[i];
    }

    return soma / tam;
}


int main(void) {
    int opcao = -1;
    int n = 0;
    float numeros[100];

    while (opcao != 0) {
        printf("\n=== MENU ===\n");
        printf("1- Digitar Números\n");
        printf("2- Mostrar Maior\n");
        printf("3- Mostrar menor\n");
        printf("4- Mostrar média\n");
        printf("5- Mostrar todos os números digitados pelo usuário.\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Quantos Números? "); // quantos números a pessoa digitará
            scanf("%d", &n);

            while (n < 1 || n > 100) {
                printf("Valor inválido, tente de novo: ");
                scanf("%d", &n);
            }

            for (int i = 0; i < n; i++)
            {
                printf("Digite o número %d:  ", i + 1);
                scanf("%f", &numeros[i]);
            }    


        } else if (opcao == 2) { // maior
            if (n == 0) {
                printf("Digite os números primeiro (opcao 1)\n");
            } else {    
                
                float maior = EncontrarMaior(numeros, n);
                printf("Maior: %.2f\n", maior);
            }    


        } else if (opcao == 3) { // menor
            if (n == 0) {
                printf("Digite os números primeiro (opcao 1)\n");
            } else {    

                float menor = EncontrarMenor(numeros, n);
                printf("Menor: %.2f\n", menor);
            }    


        } else if (opcao == 4) { // média
            if (n == 0) {
                printf("Digite os números primeiro (opcao 1)\n");
            } else { 

                float media = EncontrarMedia(numeros, n);
                printf("Média: %.2f\n", media);
            }    


        } else if (opcao == 5) {
            if (n == 0) {
                printf("Digite os números primeiro (opcao 1)\n");
            } else {    
                for (int i = 0; i < n; i++) {
                    printf("Número %d: %.2f\n", i + 1, numeros[i]);
                }
            }


        }  else if (opcao != 0) { // opção inválida (caso seja diferente de 0 e dos demais acima.)
            printf("Opção inválida!\n");
        }    


        
    }   

    printf("\nAté mais!\n");
    return 0;
}