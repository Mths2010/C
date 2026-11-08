# include <stdio.h>
# define MAX 50


float CalcularMedia(float v[], int tam) {
    float soma = 0;

    for (int i = 0; i < tam; i++) {
        soma = soma + v[i];
    }

    return soma / tam;
}


int ContarAprovados(float v[], int tam) {
    int contador = 0;
    
    for (int i = 0; i < tam; i++) {
        if (v[i] >= 6) {
            contador = contador + 1;
        }
    }

    return contador;
}

int ContarReprovados(float v[], int tam) {
    int contador = 0;

    for (int i = 0; i < tam; i++) {   
        if (v[i] < 6) {
            contador = contador + 1;
        }
    }

    return contador;
}





int main(void) {

    int opcao = -1;
    int n = 0;
    float notas[MAX];


    while (opcao != 0) {

        printf("\n=== MÉDIA DOS ALUNOS===\n");
        printf("1- Digitar notas\n");
        printf("2- Mostrar média\n");
        printf("3- Mostrar aprovados\n");
        printf("4- Mostrar reprovados\n");
        printf("5- Mostrar todas as notas\n");
        printf("0- Sair\n");

        printf("Escolha: ");
        scanf("%d", &opcao);


        if (opcao == 1) {
            printf("Quantas notas são? ");
            scanf("%d", &n);

            while (n < 1 || n > MAX) {
                printf("Valor inválido, tente de novo: ");
                scanf("%d", &n);
            }

            for (int  i = 0; i < n; i++) {
                printf("Digite a nota %d: ", i + 1);
                scanf("%f", &notas[i]);


                while (notas[i] < 0 || notas[i] > 10) {
                    printf("Nota inválida, digite de novo: ");
                    scanf("%f", &notas[i]);
                }
            }    

        }   else if (opcao == 2) {
                if (n == 0) {
                    printf("Digite as notas primeiro. (opcao 1)\n");
                } else {

                    float media = CalcularMedia(notas, n);
                    printf("Média: %.2f\n", media);
                }    

            } else if (opcao == 3)  {
                if (n == 0) {
                    printf("Digite as notas primeiro. (opcao 1)\n");
                } else {    
                    int aprovados = ContarAprovados(notas, n);
                    printf("Aprovados: %d\n", aprovados);
                }    

            }  else if (opcao == 4)  {
                if (n == 0) {
                    printf("Digite as notas primeiro. (opcao 1)\n");
                } else {
                    int reprovados = ContarReprovados(notas, n);
                    printf("Reprovados: %d\n", reprovados);
                }

            } else if (opcao == 5) {    
                if (n == 0) {
                    printf("Digite as notas primeiro. (opcao 1)\n");
                } else {
                    for (int i = 0; i < n; i++) {
                        printf("Nota %d: %.2f\n", i + 1, notas[i]);
                    }
                }
            }


        

    }



    printf("\nAté mais!\n");

return 0;
}
