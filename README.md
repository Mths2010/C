# Estudos em C

Repositório com os exercícios que faço enquanto aprendo C.
Venho do Python e estou começando em C, então o código aqui mostra minha evolução.

## Projetos

| Arquivo | O que faz | Conceitos |
|---------|-----------|-----------|
| `media.c` | Lê 3 notas e diz se o aluno foi aprovado | `scanf`, `if/else`, funções |
| `par_impar.c` | Diz se um número é par ou ímpar | `%`, `if/else` |
| `tabuada.c` | Mostra a tabuada de um número | `for` |
| `termial.c` | Soma de 1 até n (com `for` e com fórmula) | acumulador |
| `fatorial.c` | Calcula o fatorial de n | `for`, acumulador |
| `estatisticas.c` | Maior, menor e média de n números | arrays, funções com array |
| `menu.c` | Menu interativo que repete até o usuário sair | `while`, `if/else` |

## Como compilar e rodar

Precisa do `gcc` instalado.

```bash
gcc -Wall -o estatisticas estatisticas.c
./estatisticas
```

No Windows, o executável é `estatisticas.exe`.

## Exemplo de execução

```
Quantos numeros? 4
Digite o numero 1: 3
Digite o numero 2: 9
Digite o numero 3: 2
Digite o numero 4: 7
Maior: 9.00
Menor: 2.00
Media: 5.25
```

## Próximos passos

- [ ] Strings
- [ ] Ordenação de arrays
- [ ] Ponteiros
- [ ] Structs
