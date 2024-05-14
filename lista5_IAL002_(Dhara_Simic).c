#include "stdio.h"
#include "windows.h"
#define ex1
//teste
#ifdef ex1
/*Exercíco 1 da lista 05 de Algoritmos da Professora Nádia;
O enunciado: Receba doze números positivos e armazene no vetor A. Após a alimentação de todos os números mostre apenas os
números maiores que 121 que estão armazenados no vetor.*/

int main()
{

    char executar_novamente;
    int i, k, A[12], cont = 0, maior[12];

    do
    {
        cont = 0;

        for (i = 0; i < 12; i++)
        {
            printf("Digite um valor qualquer:\n");
            scanf(" %d", &A[i]);

            if (A[i] > 121)
            {
                maior[cont] = A[i];
                cont++;
            }
        }
        printf("O numeros maiores que 121 foram: ");
        for (k = 0; k < cont; k++)
        {
            printf("%d", maior[k]);

            if (k == (cont - 1))
            {
                printf(". ");
            }

            else
            {
                printf(", ");
            }
        }

        printf("\n");
        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido. Tente novamente. Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex2
/*Exercíco 2 da lista 05 de Algoritmos da Professora Nádia;
O enunciado: Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma dimensão com os elementos do
vetor A multiplicados por 3. Apresente o conteúdo dos dois vetores.*/

int main()
{
    int A[8], B[8], i;
    char executar_novamente;

    do
    {
        for (i = 0; i < 8; i++)
        {
            printf("Digite um valor:\n");
            scanf(" %d", &A[i]);

            B[i] = A[i] * 3;
        }

        printf("O oito numeros digitados foram: ");

        for (i = 0; i < 8; i++)
        {
            printf("%d", A[i]);

            if (i == 7)
            {
                printf(". ");
            }

            else
            {
                printf(", ");
            }
        }

        printf("Esses sao os produtos de cada numero digitado multiplicado por 3: ");

        for (i = 0; i < 8; i++)
        {
            printf("%d", B[i]);

            if (i == 7)
            {
                printf(". ");
            }

            else
            {
                printf(", ");
            }
        }

        printf("\n");
        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido. Tente novamente. Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex3
/*Exercíco 3 da lista 05 de Algoritmos da Professora Nádia;
O enunciado: Faça um programa que armazene num vetor 6 números negativos. Calcule a soma dos seus quadrados;
se a soma for inferior a 1000 solicite novos dados. Mostre somente a soma que satisfaz a condição.*/

int main()
{

    int numeros[6], soma = 0, i;
    char executar_novamente;

    do
    {
        for (i = 0; i < 6; i++)
        {
            do
            {
                printf("Digite um numero negativo:\n");
                scanf(" %d", &numeros[i]);

                if (numeros[i] > 0)
                {
                    printf("Voce digitou um numero positivo. Tente novamente.\n");
                }
            } while (numeros[i] > 0);

            soma += (numeros[i] * numeros[i]);

            if (i == 5)
            {
                if (soma < 1000)
                {
                    printf("A soma dos quadrados dos numeros negativos digitados deve ser maior que 1000. Digite os numeros novamente.\n");
                    i = 0;
                }
            }
        }

        printf("A soma dos quadrados dos numeros negativos digitado e igual a: %d\n", soma);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido. Tente novamente. Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex4
/*Exercíco 4 da lista 05 de Algoritmos da Professora Nádia;
O enunciado: Armazene num vetor dez números positivos. Exiba o conteúdo do vetor. Mostre o maior número, quantas vezes ele foi
digitado e em que posições ele apareceu dentro do vetor.*/

int main()
{

    int i, numeros[10], maior = 0, cont, posicao[10];
    char executar_novamente;

    do
    {
        maior = 0;
        cont = 0;

        for (i = 0; i < 10; i++)
        {
            do
            {
                printf("Digite um numero positivo:\n");
                scanf(" %d", &numeros[i]);

                if (numeros[i] < 0)
                {
                    printf("Voce digitou um numero negativo. Tente novamente.\n");
                }
            } while (numeros[i] < 0);

            if (numeros[i] > maior)
            {
                cont = 0;
                maior = numeros[i];
                posicao[cont - 1] = i;
            }

            if (numeros[i] == maior)
            {
                cont++;
                posicao[cont - 1] = i;
            }
        }
        printf("Os numeros digitados foram: ");

        for (i = 0; i < 10; i++)
        {
            printf("%d", numeros[i]);

            if (i == 9)
            {
                printf(". \n");
            }

            else
            {
                printf(", ");
            }
        }

        printf("O maior numero digitado foi: %d\n", maior);
        printf("Esse numero foi digitado %d vezes.\n", cont);
        printf("O numero %d foi digitado nas seguintes posicoes: ", maior);

        for (i = 0; i < cont; i++)
        {
            printf("%d", posicao[i] + 1);

            if (i == (cont - 1))
            {
                printf(". \n");
            }

            else
            {
                printf(", ");
            }
        }

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido. Tente novamente. Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex5
/*Exercíco 5 da lista 05 de Algoritmos da Professora Nádia;
O enunciado: Armazene no vetor A 10 elementos positivos. Construa o vetor B do mesmo tipo e dimensão.
Cada elemento do vetor B deve ser o valor negativo do elemento correspondente do vetor A. Desta forma,
se em A [1] estiver armazenado o elemento 8 deve estar em B [1] o valor –8, e assim por diante.
Apresentar o conteúdo dos dois vetores.*/
int main()
{

    int A[10] = {0}, B[10] = {0}, i;
    char executar_novamente;

    do
    {
        for (i = 0; i < 10; i++)
        {
            do
            {
                printf("Digite um numero positivo:\n");
                scanf(" %d", &A[i]);

                if (A[i] < 0)
                {
                    printf("Voce digitou um numero negativo. Tente novamente.\n");
                }
            } while (A[i] < 0);

            B[i] = A[i] - (A[i] * 2);
        }

        printf("Essa foi a sua sequencia de numeros positivos:\n");

        for (i = 0; i < 10; i++)
        {
            printf("%d", A[i]);

            if (i == 9)
            {
                printf(". \n");
            }

            else
            {
                printf(", ");
            }
        }

        printf("Essa e a sua sequencia se todos os positivos fossem negativos:\n");

        for (i = 0; i < 10; i++)
        {
            printf("%d", B[i]);

            if (i == 9)
            {
                printf(". \n");
            }

            else
            {
                printf(", ");
            }
        }

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido. Tente novamente. Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex6
/*Exercíco 6 da lista 05 de Algoritmos da Professora Nádia;
O enunciado: Leia o vetor A de uma dimensão máxima de 15 elementos. O usuário poderá digitar a quantidade desejada desde que o
valor seja inferior ou igual a 15. Construir um vetor B de mesmo tipo, de modo que cada elemento do vetor B seja fatorial do elemento
correspondente do vetor A. Apresentar o conteúdo dos dois vetores.*/
int main()
{

    char executar_novamente;
    int dimensao, fatorial, i, j;

    do
    {
        do
        {
            printf("Quantos elementos tera o vetor A? O limite e 15. \n");
            scanf(" %d", &dimensao);

            if (dimensao > 15)
            {
                printf("Voce digitou uma valor maior que 15. Tente novamente.\n");
            }

            if (dimensao <= 0)
            {
                printf("Voce digitou um valor negativo. Tente novamente.\n");
            }
        } while (dimensao > 15 || dimensao <= 0);

        int A[dimensao], B[dimensao];

        for (i = 1; i <= dimensao; i++)
        {
            do
            {
                printf("Digite um valor para ser armazenado no vetor A.\n");
                scanf(" %d", &A[i]);

                if (A[i] < 0)
                {
                    printf("Voce digitou um numero negativo. Numeros negativos nao tem fatorial.\n");
                }
            } while (A[i] < 0);

            fatorial = 1;
            for (j = 1; j <= A[i]; j++)
            {
                fatorial *= j;
            }

            B[i] = fatorial;
        }

        printf("A sequencia digitada foi:\n");
        for (i = 1; i <= dimensao; i++)
        {
            printf("%d", A[i]);

            if (i < dimensao)
            {
                printf(", ");
            }

            if (i == dimensao)
            {
                printf(".\n");
            }
        }

        printf("A sequencia de fatoriais respectiva e:\n");
        for (i = 1; i <= dimensao; i++)
        {
            printf("%d", B[i]);

            if (i < dimensao)
            {
                printf(", ");
            }

            if (i == dimensao)
            {
                printf(".\n");
            }
        }

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido. Tente novamente. Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex7

#endif