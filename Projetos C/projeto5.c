#include <stdio.h>


int main(void) {


    int opcao = -1;

    while (opcao != 0) {

        printf("\n=== MENU ===\n");
        printf("1 - Dizer oi\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Oi!\n");
        }

        else if (opcao != 0) {
            printf("Opção inválida!\n");
        }
    }

    printf("Até mais!\n");

    return 0;
}