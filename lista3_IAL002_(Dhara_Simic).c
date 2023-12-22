#include "stdio.h"
#include "windows.h"
#define ex8

#ifdef ex1
/*Exercíco 1 da lista 03 de Algoritmos da Professora Nádia;
O enunciado: Gere e exiba cada uma das seqüências abaixo com uma quantidade k de termos determinados pelo usuário.
3, 6, 9, 12, 15,...
1/4, 1/8, 1/12, 1/16, 1/20,...*/

int main(void)
{
    int sequencia, k, i, termo, numerador, denominador;
    char executar_novamente;

    do
    {
        do
        {
            printf("Qual sequencia voce quer testar?\nDigite 1 para a sequencia de 3 em 3 (3, 6, 9, 12..)\nDigite 2 para a sequencia de quartos (1/4, 1/8, 1/12...)\n");
            scanf("%d", &sequencia);

            if (sequencia != 1 && sequencia != 2)
            {
                printf("Voce digitou um valor invalido, tente novamente.\n");
            }

        } while (sequencia != 1 && sequencia != 2);

        if (sequencia == 1)
        {
            do
            {
                printf("Digite quantos termos voce quer que a sua sequencia tenha:\n");
                scanf("%d", &k);
            } while (k <= 0);

            for (i = 1; i <= k; i++)
            {
                termo = 3 * i;
                printf("%d, ", termo);
            }
        }

        if (sequencia == 2)
        {
            do
            {
                printf("Digite quantos termos voce quer que a sua sequencia tenha:\n");
                scanf("%d", &k);
            } while (k <= 0);
            for (i = 1; i <= k; i++)
            {
                numerador = 1;
                denominador = 4 * i;
                printf("%d/%d, ", numerador, denominador);
            }
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex2
/*Exercíco 2 da lista 03 de Algoritmos da Professora Nádia;
O enunciado: Gere e exiba cada uma das sequências abaixo com uma quantidade k de termos determinados pelo usuário.
2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
4/8, 1, 36/24, 2, 100/40, 144/48, ... */

int main(void)
{
    int sequencia, k, numerador, denominador;
    float i;
    char executar_novamente;

    do
    {
        do
        {
            printf("Qual sequencia voce deseja executar?\nDigite 1 para a sequencia 2/4, 4/10, 6/15, 8/20...\nDigite 2 para a sequencia 4/8, 1, 36/24, 2, 100/40, 144/48...\n");
            scanf(" %d", &sequencia);

            if (sequencia != 1 && sequencia != 2)
            {
                printf("Voce digitou um valor invalido, tente novamente.\n");
            }

        } while (sequencia != 1 && sequencia != 2);

        if (sequencia == 1)
        {
            do
            {
                printf("Digite quantos termos voce quer na sua sequencia:\n");
                scanf("%d", &k);

            } while (k <= 0);

            for (i = 1; i <= k; i++)
            {
                numerador = 2 * i;
                denominador = 5 * i;
                printf("%d/%d, ", numerador, denominador);
            }
        }

        if (sequencia == 2)
        {
            do
            {
                printf("Digite quantos termos voce quer na sua senquencia:\n");
                scanf("%d", &k);
            } while (k <= 0);

            for (i = 1; i <= k; i++)
            {
                numerador = (8 * i) / (2 / i);
                denominador = 8 * i;

                if(numerador % denominador == 0)
                {
                    printf("%d, ", numerador/denominador);
                }

                else 
                {
                printf("%d/%d, ", numerador, denominador);
                }            
            }
        }

        system("pause");
        system("cls");

        printf("Voce quer executar esse programa novamente?\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex3
/*Exercíco 3 da lista 03 de Algoritmos da Professora Nádia;
O enunciado: Receba a quantidade de idades de K indivíduos. K representa essa quantidade e deve ser digitada pelo usuário.
A variável Idade armazena cada uma das K idades digitadas. Calcule e mostre a somatória dessas idades. */

int main(void)
{
    int i, k, idade, soma = 0;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite quantas idades voce quer armazenar?\n");
            scanf("%d", &k);

            if (k <= 0)
            {
                printf("Digite um valor válido.\n");
            }
        } while (k <= 0);

        for (i = 1; i <= k; i++)
        {
            printf("Digite a idade numero %d:\n", i);
            scanf(" %d", &idade);
            soma += idade;
        }

        printf("A soma das idades que voce digitou e: %d\n", soma);

        system("pause");
        system("cls");

        printf("Voce quer executar esse programa novamente?\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex4
/*Exercíco 4 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: O programador deverá gerar a seguinte sequência:

2,4,6,8, 10...

A quantidade de termos deve ser definida pelo usuário. Exiba apenas a quantidade de múltiplos de cinco e positivos.
*/
int main(void)
{
    int k, i, j, termo, contador = 0;
    int multiplos_de_cinco[100];
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite quantos numeros pares voce quer?\n");
            scanf(" %d", &k);

            if (k <= 0)
            {
                printf("Digite um numero maior que zero.\n");
            }
        } while (k <= 0);

        printf("Sua sequencia de numeros pares com %d termos:", k);

        for (i = 1; i <= k; i++)
        {
            termo = 2 * i;
            printf("%d, ", termo);

            if (termo % 5 == 0)
            {
                multiplos_de_cinco[contador] = termo;
                contador++;
            }
        }

        printf("\nEsses sao os multiplos de cinco encontrados dentro dos %d numeros pares gerados:\n", k);

        for (j = 0; j < contador; j++)
        {
            printf("%d\n", multiplos_de_cinco[j]);
        }

        system("pause");
        system("cls");

        printf("Voce quer executar esse programa novamente? (S/N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex5
/*Exercíco 5 da lista 03 de Algoritmos da Professora Nádia;
O enunciado: Receba K números. A variável Num armazena cada número digitado considerando essa quantidade k.
Exiba a quantidade de números pares negativos e quantas vezes o número zero foi digitado.
Obs1: K representa a quantidade de números digitados pelo usuário.
Obs2: A variável Num representa cada número digitado pelo usuário.

*/
int main(void)
{
    int k, i, j, contagem_zero = 0;
    int num[100];
    char executar_novamente;

    do
    {

        do
        {
            printf("Quantos numeros voce quer digitar?\n");
            scanf(" %d", &k);
        } while (k <= 0);

        for (i = 0; i < k; i++)
        {
            printf("Digite o numero %d da sua sequencia:\n", i + 1);
            scanf(" %d", &num[i]);

            if (num[i] == 0)
            {
                contagem_zero++;
            }
        }

        printf("Esses foram seus numeros digitados:\n");

        for (j = 0; j < k; j++)
        {
            printf("%d\n", num[j]);
        }

        printf("O numero zero foi digitado %d vezes.\n", contagem_zero);

        system("pause");
        system("cls");

        printf("Voce quer executar esse programa novamente? (S/N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex6
/*Exercíco 6 da lista 03 de Algoritmos da Professora Nádia;
O enunciado: 6)	Receba K números positivos. Cada número recebido deverá ser armazenado na variável Num e a variável K representa a
quantidade de números solicitada pelo usuário. Exiba a quantidade de múltiplos 7.*/

int main()
{
    int k, i, j, contador = 0;
    int multiplos_de_sete[100];
    int num[100];
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos numeros voce quer digitar?\n");
            scanf(" %d", &k);

            if (k <= 0)
            {
                printf("Digite um valor valido.");
            }
        } while (k <= 0);

        for (i = 0; i < k; i++)
        {
            printf("Digite o numero %d da sua sequencia:\n", i + 1);
            scanf(" %d", &num[i]);

            if (num[i] % 7 == 0)
            {
                multiplos_de_sete[contador] = num[i];
                contador++;
            }
        }

        printf("Esses sao os multiplos de sete dentro da sua sequencia:\n");

        for (j = 0; j < contador; j++)
        {
            printf("%d\n", multiplos_de_sete[j]);
        }

        system("pause");
        system("cls");

        printf("Voce quer executar esse programa novamente?\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex7
/*Exercíco 7 da lista 03 de Algoritmos da Professora Nádia;
O enunciado: 7)	Receba via teclado um número X, onde este número representa a quantidade de termos que o usuário deseja.
H representa cada um desses números, calcule o produto dos X números.
OBS: H deve ser maior ou igual a 15.*/

int main()
{
    int i, x, h, produto;
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos numeros deseja multiplicar?\n");
            scanf(" %d", &x);

            if (x <= 0)
            {
                printf("\nPor favor digite um numero valido.\n");
            }
        } while (x <= 0);

        produto = 1;

        for (i = 0; i < x; i++)
        {
            do
            {
                printf("Digite o numero %d da sua sequencia de multiplicacoes:\n", i + 1);
                scanf(" %d", &h);

                if (h < 15)
                {
                    printf("O numero para ser multiplicado so pode ser maior ou igual a 15. Tente novamente.\n");
                }
            } while (h < 15);

            produto *= h;
        }

        printf("O resultado da multiplicacao dos numeros digitados e: %d\n", produto);

        system("pause");
        system("cls");

        printf("Voce quer executar esse programa novamente? (S/N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex8
/*Exercíco 8 da lista 03 de Algoritmos da Professora Nádia;
O enunciado: 8)	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
A variável Peso armazena cada um do N pesos digitados. Calcule e mostre a média dos pesos digitados.*/

int main()
{
    int n, peso, soma, i;
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos pesos deseja digitar?\n");
            scanf(" %d", &n);

            if (n <= 0)
            {
                printf("Por favor digite um valor valido.\n");
            }
        } while (n <= 0);

        soma = 0;

        for (i = 0; i < n; i++)
        {
            do
            {
            printf("Digite o peso numero %d em kg:\n", i + 1);
            scanf(" %d", &peso);
            } while (peso <= 0);
            soma += peso;
        }

        printf("A media dos pesos digitados e: %.2dkg\n", soma/n);

        system("pause");
        system("cls");

        printf("Voce deseja executar esse programa novamente? (S/N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif
