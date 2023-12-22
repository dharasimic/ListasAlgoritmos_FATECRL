#include "stdio.h"
#include "windows.h"
#define ex4

// Funções:

float Esfera(float raio)
{
    // Fórmula do volume de uma esfera: V = 4/3 pi r³;
    float volume, pi = 3.14;

    volume = (4.0 / 3.0) * pi * (raio * raio * raio);
    return volume;
}

int Verifica(int a)
{
    if (a > 0)
    {
        printf("O numero %d e positivo.\n", a);
    }

    if (a < 0)
    {
        printf("O numero %d e negativo.\n", a);
    }

    if (a == 0)
    {
        printf("Voce digitou 0.\n");
    }

    return 0;
}

void Divisao(float A, float B, float *resultado)
{
    if (B == 0)
    {
        printf("Erro: Divisao por zero.\n");
    }
    else
    {
        *resultado = A / B;
    }
}

float ReajSalNovo(float salario, float *novoSalario)
{
    if (salario < 800)
    {
        *novoSalario = salario + (salario * 0.15);
    }

    if (salario <= 1000)
    {
        *novoSalario = salario + (salario * 0.10);
    }

    else
    {
        *novoSalario = salario + (salario * 0.05);
    }

    return *novoSalario;
}

#ifdef ex1
/*Exercíco 01 da lista 06 de Algoritmos da Professora Nádia;
O enunciado: Crie a função Esfera que receba da função main o valor do raio e calcule o volume da esfera o seu volume.
Exiba o resultado obtido no interior da função main.*/

int main()
{
    char executar_novamente;
    float volume, raio;

    do
    {

        do
        {
            printf("Qual o raio da sua esfera?\n");
            scanf(" %f", &raio);

            if (raio <= 0)
            {
                printf("Voce digitou um valor menor que zero ou negativo. Tente novamente.\n");
            }
        } while (raio <= 0);

        volume = Esfera(raio);

        printf("O volume de uma esfera de raio %.1f e igual a: %.1f unidades cubicas.\n", raio, volume);

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
/*Exercíco 02 da lista 06 de Algoritmos da Professora Nádia;
O enunciado: Crie a função Verifica que receba da função main um valor do tipo inteiro e declarado localmente na função main.
Na função verifica  verifique e exiba se o valor é positivo ou negativo ou zero.*/

int main()
{

    char executar_novamente;
    int a;

    do
    {
        printf("Digite um numero inteiro:\n");
        scanf(" %d", &a);

        Verifica(a);

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
/*Exercíco 03 da lista 06 de Algoritmos da Professora Nádia;
O enunciado: Crie a função Divisão que receba da função main dois números que possibilitem o cálculo da divisão do primeiro
pelo segundo. Exiba na função main os números e o resultado obtido na função Divisão.*/
// Função Divisao agora recebe ponteiros como parâmetros

int main()
{
    float A, B, resultado;
    char executar_novamente;

    do
    {
        printf("Qual sera o numerador?\n");
        scanf("%f", &A);

        do
        {
            printf("Qual sera o denominador?\n");
            scanf("%f", &B);

            if (B == 0)
            {
                printf("O denominador nao pode ser 0.\n");
            }
        } while (B == 0);

        Divisao(A, B, &resultado);

        printf("O resultado da divisao %.1f/%.1f foi %.2f.\n", A, B, resultado);

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
/*Exercíco 04 da lista 06 de Algoritmos da Professora Nádia;
O enunciado: Crie a função ReajSalNovo que receba da função main o valor do salário e efetue o cálculo do reajuste de salário cada
funcionário. Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais.
Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000,
o reajuste deve ser de 5%. Exiba na função main o salário antigo e novo salário obtido na função.*/

int main()
{

    float salario, novoSalario;
    char executar_novamente;

    do
    {
        printf("Digite o seu salario:\n");
        scanf(" %f", &salario);

        ReajSalNovo(salario, &novoSalario);

        printf("O seu novo salario e: $%.2f.\n", novoSalario);

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