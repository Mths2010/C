#include <stdio.h>

int main(void)
{

    int n;

    printf("Quantos números? ");
    scanf("%d", &n);

    while (n < 1 || n > 100)
    {
        printf("Valor inválido, tente de novo: ");
        scanf("%d", &n);
    }

    float numeros[n];
    float soma = 0;

    // 1. for que pede os numeros, guarda em numeros[i] e soma
    for (int i = 0; i < n; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma = soma + numeros[i];
    }

    // 2. mostre a soma e a media ( soma divida por n)
    // MEDIA AQUI:
    
    printf("Soma: %.2f\n", soma);
    printf("Média: %.2f\n", soma / n);

    // 3. maior: começa em numeros[0], for começa em i = 1
    float maior = numeros[0];

    for (int i = 1; i < n; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }

    printf("Maior: %.2f\n", maior);

    // 4. menor: mesmo molde do maior, trocando > por <

    float menor = numeros[0];

    for (int i = 1; i < n; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    printf("Menor: %.2f\n", menor);

    return 0;
}