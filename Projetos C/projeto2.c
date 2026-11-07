#include <stdio.h>

int main(void)
{
    float numeros[5];
    float soma = 0;

    for (int i = 0; i < 5; i++)
    {

        // peça numeros e guarde em numeros [i]
        // some numeros[i] na soma

        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma = soma + numeros[i];
    }

    printf("Soma: %.2f\n", soma);
    printf("Média: %.2f\n", soma / 5);

    // mostre a soma e a media ( soma / 5)

    for (int i = 0; i < 5; i++)
    {
        printf("Numero %d: %.2f\n", i + 1, numeros[i]);
    }

    // DESAFIO DO MAIOR NÚMERO

    float maior = numeros[0];
    for (int i = 1; i < 5; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }

    printf("Maior: %.2f\n", maior);

    // DESAFIO DO MENOR NÚMERO

    float menor = numeros[0];
    for (int i = 1; i < 5; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    printf("Menor: %.2f\n", menor);

    // peça ao usuário quantos números ele quer digitar, e depois leia essa quantidade. Hoje o 5 está fixo no código. A ideia é trocar por uma variável n:

    int n;
    printf("Quantos números? ");
    scanf("%d", &n);
    
    if (n < 1 || n > 100) {
        printf("Valor inválido\n");
        return 1;
    }

    float numeros1[n];
    float soma1 = 0;
    
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros1[i]);
        soma1 = soma1 + numeros1[i];
    }

    printf("Soma: %.2f\n", soma1);
    printf("Média: %.2f\n", soma1 / n);

    return 0;
}
