#include "stdio.h"
#include "windows.h"
#define ex13

#ifdef ex1
/*Exercíco 1 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Calcule e mostre a média dos K primeiros pares e múltiplos de cinco.
OBS: K representa a quantidade de números pares solicitados via teclado pelo   usuário. Os números pares deverão
ser gerados pelo programador. Utilize o laço while para a entrada da quantidade K e um laço for para o cálculo da média.
        2, 4, 6, 8, 10, ...
*/
int main()
{
    int k, i, termo = 0, soma = 0, contador = 0;
    float media = 0;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite quantos numeros pares voce quer gerar:\n");
            scanf("%d", &k);

            if (k <= 0)
            {
                prinf("Digite um valor valido.");
            }
        } while (k <= 0);

        for (i = 1; i <= k; i++)
        {
            termo = i * 2;
            printf("%d, ", termo);

            if (termo % 5 == 0)
            {
                soma += termo;
                contador++;
            }
        }

        media = soma / contador;

        printf("\nA media dos multiplos de cinco dentro dos %d primeiros pares e: %.2f\n", k, media);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido.\nVoce quer executar esse programa novamente? Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex2
/*Exercíco 2 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Leia um número inteiro representado pela variável N até que N seja igual a zero.
Exiba uma mensagem informando se o número é par ou ímpar.*/

int main()
{
    int n;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite um numero inteiro:\n");
            scanf(" %d", &n);

            if (n != 0)
            {
                if (n % 2 == 0)
                {
                    printf("Voce digitou um numero par!\n");
                }

                else
                {
                    printf("Voce digitou um numero impar!\n");
                }
            }

            else
            {
                printf("Voce digitou zero!\nO programa sera encerrado!\n");
            }

        } while (n != 0);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido.\nVoce quer executar esse programa novamente? Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex3
/*Exercíco 3 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Receba K números inteiros quaisquer, K representa a quantidade de termos solicitada pelo usuário
e cada termo pode ser representado pela variável N. Exiba a quantidade de números positivos recebidos e a média dos números ímpares.
Utilize o laço do while para a entrada da quantidade K e um laço while para efetuar os cálculos solicitados.*/

int main()
{
    int k, i, n, contador_positivo, contador_impar;
    float soma_impar, media;
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos numeros voce quer digitar?\n");
            scanf(" %d", &k);

            if (k <= 1)
            {
                printf("Digite um valor maior que 0.\n");
            }
        } while (k <= 0);

        contador_positivo = 0;
        contador_impar = 0;
        soma_impar = 0;
        media = 0;

        for (i = 1; i <= k; i++)
        {
            printf("digite o termo numero %d:\n", i);
            scanf(" %d", &n);

            if (n >= 0)
            {
                contador_positivo++;
            }

            if (n % 2 != 0)
            {
                contador_impar++;
                soma_impar += n;
            }
        }

        media = soma_impar / contador_impar;

        if (contador_positivo > 1)
        {
            printf("Voce digitou %d numeros positivos!\n", contador_positivo);
        }

        else if (contador_positivo == 1)
        {
            printf("Voce digitou 1 numero positivo!\n");
        }

        else if (contador_positivo == 0)
        {
            printf("Voce nao digitou nenhum numero positivo!\n");
        }

        else if (contador_impar > 1)
        {
            printf("Voce digitou %d numeros impares e a media desses numeros impares e %.1f\n", contador_impar, media);
        }

        else if (contador_impar == 1)
        {
            printf("Voce digitou apenas um numero impar. Esse numero foi %.1f\n", media);
        }

        else if (contador_impar == 0)
        {
            printf("Voce nao digitou nenhum numero impar.\n");
        }

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido.\nVoce quer executar esse programa novamente? Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex4
/*Exercíco 4 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Receba K números quaisquer, K representa a quantidade de termos solicitada pelo usuário e cada termo
pode ser representado pela variável N. Exiba o maior número digitado. Utilize o laço do while para a entrada da quantidade K
e um laço for para exibir o maior número.*/

int main()
{
    int k, n, i, maior;
    char executar_novamente;
    do
    {
        do
        {
            printf("Quantos termos deseja digitar?\n");
            scanf(" %d", &k);

            if (k <= 0)
            {
                printf("Digite um valor maior que 0.\n");
            }
        } while (k <= 0);

        n = 0;
        maior = n;

        for (i = 1; i <= k; i++)
        {
            printf("Digite o termo numero %d da sua sequencia:\n", i);
            scanf(" %d", &n);

            if (n > maior)
            {
                maior = n;
            }
        }

        printf("O maior numero digitado foi %d\n", maior);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido.\nVoce quer executar esse programa novamente? Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex5
/*Exercíco 5 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Receba dois números. Calcule e mostre:
a)	A soma dos números pares desse intervalo, incluindo os números digitados;
b)	A multiplicação dos números ímpares desse intervalo de números incluindo os números digitados.
*/

int main()
{
    int i, a, b, soma, mult;
    char executar_novamente;

    do
    {
        printf("Digite um numero inteiro:\n");
        scanf(" %d", &a);

        printf("Digite um segundo numero inteiro:\n");
        scanf(" %d", &b);

        soma = 0;

        for (i = a; i <= b; i++)
        {
            if (i % 2 == 0)
            {
                soma += i;
            }
        }

        mult = 1;

        for (i = a; i <= b; i++)
        {
            if (i % 2 != 0)
            {
                mult *= i;
            }
        }

        printf("A soma dos numeros pares no intervalo entre %d e %d e igual a %d\n", a, b, soma);
        printf("O produto de todos os numeros impares dentro do intervalo de %d e %d e igual a %d\n", a, b, mult);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido.\nVoce quer executar esse programa novamente? Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex6
/*Exercíco 6 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Receba a quantidade de salários de K indivíduos. K representa essa quantidade e deve ser digitada pelo usuário.
A variável Salário armazena cada uma dos K salários digitados. Calcule e mostre a somatória dos salários superiores
a 3 salários-mínimos e inferior ou igual a 7 salários-mínimos. Exiba também o maior e o menor salário encontrado.
Utilize o laço while para a entrada da quantidade K e um laço while para efetuar os cálculos e as comparações solicitadas.
Obs: O valor do salário mínimo deverá ser pesquisado na Internet.

Art. 2º O valor do salário mínimo será de R$ 1.320,00 (mil trezentos e vinte reais) a partir de 1º de maio de 2023. Parágrafo único.
fonte: https://www.planalto.gov.br/ccivil_03/_ato2023-2026/2023/lei/L14663.htm#:~:text=Art.%202º%20O%20valor%20do,Parágrafo%20único.
*/

int main()
{
    int k, i;
    float salario, soma, maior, menor;
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos salarios deseja digitar?\n");
            scanf(" %d", &k);

            if (k <= 1)
            {
                printf("Por favor digite um valor acima de 1.\n");
            }
        } while (k <= 1);

        soma = 0;
        maior = 0;
        menor = 0;

        for (i = 1; i <= k; i++)
        {
            printf("Digite um salario:\n");
            scanf(" %f", &salario);

            if (salario > 3960 && salario <= 9240)
            {
                soma += salario;
            }

            if (salario > maior)
            {
                maior = salario;
            }

            if (i == 1)
            {
                menor = salario;
            }

            if (salario < menor)
            {
                menor = salario;
            }
        }

        printf("Essa e a soma de todos os salarios digitados dentro do intervalo de 3 salarios minimos e 7 salarios minimos: %.2f\n", soma);
        printf("Esse e o menor salario digitado: %.2f\n", menor);
        printf("Esse foi o maior salario digitado: %.2f\n", maior);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Voce digitou um valor invalido.\nVoce quer executar esse programa novamente? Digite S para sim e N para nao.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex7
/*Exercíco 7 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
A variável P representa cada peso digitado. Calcule e mostre a média dos pesos superiores ou iguais a 70 quilos e inferiores
ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba também o menor, a quantidade de vezes
que o menor peso foi encontrado e o maior peso encontrado. Utilize o laço while para a entrada da quantidade N e um laço do while para
efetuar os cálculos e as comparações solicitadas.*/

int main()
{
    int n, i, contador_soma, quantidade, quantos_menor, quantos_maior;
    float p, soma, media, menor, maior;
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos pesos deseja digitar?\n");
            scanf(" %d", &n);

            if (n <= 1)
            {
                printf("Digite um valor acima de 1.\n");
            }
        } while (n <= 1);

        soma = 0;
        media = 0;
        quantidade = 0;
        menor = 0;
        quantos_menor = 0;
        quantos_maior = 0;
        maior = 0;

        for (i = 1; i <= n; i++)
        {
            printf("Digite um peso:\n");
            scanf(" %f", &p);

            if (p >= 70 && p <= 85.5)
            {
                soma += p;
                contador_soma++;
            }

            if (p > 75)
            {
                quantidade++;
            }

            if (i == 1)
            {
                menor = p;
            }

            if (p < menor)
            {
                menor = p;
                quantos_menor = 1;
            }

            else if (p == menor)
            {
                quantos_menor++;
            }

            if (p > maior)
            {
                maior = p;
                quantos_maior = 1;
            }

            else if (p == maior)
            {
                quantos_maior++;
            }
        }

        if (contador_soma != 0)
        {
            media = soma / contador_soma;
            printf("A media dos pesos dentro do intervalo de 70kg e 85.5kg e: %.1f\n", media);
        }

        else
        {
            printf("Nenhum peso foi digitado dentro do intervalo de 70kg e 85.5kg, portanto nao foi possivel calcular a media.\n");
        }

        if (quantidade == 1)
        {
            printf("1 pessoa apresentou peso superior a 75kg.\n");
        }

        else
        {
            printf("%d pessoas apresentam peso superior a 75kg.\n", quantidade);
        }

        printf("O menor peso encontrado foi %.1f, que apareceu %d vezes\n", menor, quantos_menor);
        printf("O maior peso encontrado foi  %.1f, que apareceu %d vezes\n", maior, quantos_maior);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Digite uma resposta valida.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex8
/*Exercíco 8 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados:
sexo, idade e quantidade de livros que leu no ano anterior.  Faça um programa que leia os dados digitados pelo usuário,
sendo que deverão ser solicitados dados até que a idade digitada seja um valor negativo. Depois, calcule e imprima:
a)	A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
b)	A quantidade de mulheres que leram 5 livros ou mais.
c)  A média de idade dos homens que leram menos que 5 livros.
d)  O percentual de pessoas que não leram LIVROS.
*/

int main()
{
    int entrevistas, i, idade, livros, contador_10anos, contador_mulher, contador_homens, idades_homens, nao_leu;
    float percentual, media;
    char sexo, executar_novamente;

    do
    {
        do
        {
            printf("Quantas pessoas serao entrevistadas?\n");
            scanf(" %d", &entrevistas);

            if (entrevistas < 0)
            {
                printf("Voce digitou um valor menor ou igual a 0. Nao e possivel registrar 0 entrevistas ou um valor negativo de entrevistados. Tente novamente.\n");
            }
        } while (entrevistas <= 0);

        contador_10anos = 0;
        contador_mulher = 0;
        contador_homens = 0;
        idades_homens = 0;
        media = 0;
        nao_leu = 0;
        percentual = 0;

        for (i = 1; i <= entrevistas; i++)
        {
            do
            {
                printf("Qual o seu sexo? (F/M)\n");
                scanf(" %c", &sexo);

                if (sexo != 'F' && sexo != 'M' && sexo != 'f' && sexo != 'm')
                {
                    printf("Voce digitou uma letra invalida, por favor digite seu sexo. (F/M)\n");
                }
            } while (sexo != 'F' && sexo != 'M' && sexo != 'f' && sexo != 'm');

            do
            {
                printf("Digite a sua idade:\n");
                scanf(" %d", &idade);

                if (idade <= 0)
                {
                    printf("Voce digitou um numero menor que zero. Esse valor nao e aceito, por favor tente novamente.\n");
                }
            } while (idade <= 0);

            do
            {
                printf("Quantos livros voce leu no ano passado?\n");
                scanf(" %d", &livros);

                if (livros < 0)
                {
                    printf("Voce digitou um valor negativo. Nao e possivel ler um numero negativo de livros. Tente digitar novamente.\n");
                }
            } while (livros < 0);

            if (idade < 10)
            {
                contador_10anos += livros;
            }

            if (sexo == 'F' || sexo == 'f')
            {
                if (livros >= 5)
                {
                    contador_mulher++;
                }
            }

            if (sexo == 'M' || sexo == 'm')
            {
                if (livros < 5)
                {
                    contador_homens++;
                    idades_homens += idade;
                }
            }

            if (livros == 0)
            {
                nao_leu++;
            }
        }

        percentual = (nao_leu * 100) / entrevistas;
        media = idades_homens / contador_homens;

        printf("A quantidade de livros lidos por pessoas menores de 10 anos foi: %d\n", contador_10anos);
        printf("A quantidade de mulheres que leram 5 ou mais livros foi: %d\n", contador_mulher);
        printf("A media das idades dos homens que leram menos de 5 livros no ultimo ano e: %.1f\n", media);
        printf("O percetual de pessoas que nao leram nenhum livro no ano passado foi de: %.1f\n", percentual);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Digite uma resposta valida.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex9
/*Exercíco 9 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Receba a quantidade K de números quaisquer. K representa essa quantidade e deve ser digitada pelo usuário.
A variável num armazena cada uma dos K números digitados. Calcule e mostre a quantidade de números positivos divisíveis por 3,
a média dos números negativos. Exiba também o maior número encontrado e quantas vezes ele apareceu. Utilize o laço do while para a
entrada da quantidade K e um laço for para efetuar os cálculos e as comparações solicitadas.*/

int main()
{
    int k, i, num, contador_3, contador_negativo, maior, contador_maior;
    float soma_negativos, media_negativos;
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos numeros voce quer digitar?\n");
            scanf(" %d", &k);

            if (k <= 0)
            {
                printf("Voce digitou um numero menor ou igual a zero. Esse valor esta errado. Tente novamente.\n");
            }
        } while (k <= 0);

        contador_3 = 0;
        contador_maior = 0;
        contador_negativo = 0;
        maior = 0;
        soma_negativos = 0;

        for (i = 1; i <= k; i++)
        {
            printf("Digite um numero inteiro:\n");
            scanf(" %d", &num);

            if (num % 3 == 0)
            {
                contador_3++;
            }

            if (num < 0)
            {
                contador_negativo++;
                soma_negativos += num;
            }

            if (num > maior)
            {
                maior = num;
                contador_maior = 1;
            }

            else if (num == maior)
            {
                contador_maior++;
            }
        }

        media_negativos = soma_negativos / contador_negativo;

        printf("Voce digitou %d numeros divisiveis por 3.\n", contador_3);
        printf("A media dos numeros negativos digitados foi: %.1f\n", media_negativos);
        printf("O maior numero digitado foi %d e ele apareceu %d vezes.\n", maior, contador_maior);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Digite uma resposta valida.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex10
/*Exercíco 10 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Gere a seguinte sequência abaixo para K termos. K representa a quantidade de números que o usuário gostaria que fosse
exibida dessa sequência. Mostre também a somatória apenas dos números divisíveis por 3 dessa sequência. Utilize o laço do while para
a entrada da quantidade K e um laço for para efetuar os cálculos solicitados.
1, 1, 2, 3, 5, 8, 13, 21, .....*/

int main()
{
    int k, i;
    long int termo1, termo2, proximo_termo, soma_3;
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos termos da sequencia de Fibonacci voce quer gerar?\n");
            scanf(" %d", &k);

            if (k <= 0)
            {
                printf("Voce digitou um valor invalido. Tente novamente.\n");
            }
        } while (k <= 0);

        termo1 = 1;
        termo2 = 1;
        soma_3 = 0;

        printf("A sequencia de Fobinacci com %d termos:", k);
        printf("%ld, %ld, ", termo1, termo2);

        for (i = 3; i <= k; i++)
        {
            proximo_termo = termo1 + termo2;
            printf("%ld, ", proximo_termo);

            termo1 = termo2;
            termo2 = proximo_termo;

            if (proximo_termo % 3 == 0)
            {
                soma_3 += proximo_termo;
            }
        }

        printf("\nA somatoria dos numeros divisiveis por 3 dentro dessa sequencia foi: %ld\n", soma_3);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Digite uma resposta valida.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex11
/*Exercíco 11 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Solicite ao usuário um número maior ou igual a zero e inteiro representado pela variável num.
Calcular o fatorial desse número. Utilize o laço while para a entrada da variável num e um laço for para efetuar o cálculo do fatorial.
         OBS: O Fatorial de zero e de um é um.
         Exemplo de cálculo do Fatorial:
        5! =5 * 4 * 3 * 2 * 1
        ou
        5! =1 * 2 * 3 * 4 *5
*/

int main()
{
    int num, i, fatorial;
    char executar_novamente;

    do
    {
        do
        {
            printf("Qual numero inteiro e positivo voce deseja calcular o fatorial?\n");
            scanf(" %d", &num);

            if (num < 0)
            {
                printf("voce digitou um numero negativo. Tente novamente.\n");
            }
        } while (num < 0);

        fatorial = 1;

        for (i = 1; i <= num; i++)
        {
            fatorial *= i;
        }

        printf("%d! = %d\n", num, fatorial);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Digite uma resposta valida.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex12
/*Exercíco 12 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Uma empresa contratou a quantidade de funcionários representada pela variável Y.
Conforme o valor das vendas mensais, os funcionários adquirem pontos que determinarão seus salários ao final de cada mês.
Sabe-se que esses funcionários trabalharão nos meses de novembro a janeiro do ano subsequente. Utilize os laços que desejar.
a)	Leia as pontuações nos três meses de cada funcionário;
b)	Calcule e mostre a pontuação geral de cada funcionário nos três meses.
c)	Calcule e mostre a média das pontuações de cada funcionário nos três meses.
d)	Determine e mostre a maior pontuação atingida entre todos os funcionários nos três meses.
*/

int main()
{
    int y, i, pontos_nov, pontos_dez, pontos_jan, soma_pontos, maior;
    float media_pontos;
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos funcionarios foram contratados?\n");
            scanf(" %d", &y);

            if (y <= 0)
            {
                printf("Voce digitou um valor invalido. Tente novamente.\n");
            }
        } while (y <= 0);

        maior = 0;

        for (i = 1; i <= y; i++)
        {
            printf("Digite quantos pontos o funcionario numero %d fez no mes de novembro:\n", i);
            scanf(" %d", &pontos_nov);

            printf("Digite quantos pontos o funcionario numero %d fez no mes de dezembro:\n", i);
            scanf(" %d", &pontos_dez);

            printf("Digite quantos pontos o funcionario numero %d fez no mes de janeiro:\n", i);
            scanf(" %d", &pontos_jan);

            soma_pontos = pontos_nov + pontos_dez + pontos_jan;
            media_pontos = soma_pontos / 3;

            printf("A pontuacao geral do funcionario numero %d foi: %d\n", i, soma_pontos);
            printf("A media da pontuacao do funcionario numero %d foi: %.2f\n", i, media_pontos);

            if (soma_pontos > maior)
            {
                maior = soma_pontos;
            }
        }

        printf("A maior pontuação atingida entre os funcionarios digitados foi: %d\n", maior);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Digite uma resposta valida.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex13
/*Exercíco 13 da lista 04 de Algoritmos da Professora Nádia;
O enunciado: Solicite ao usuário a quantidade de números de termos que ele deseja. Exiba a somatória dos valores da série abaixo
referente a quantidade determinada pelo usuário: Utilize os laços que desejar.
2,  7, 3, 4,  21, 12 , 8,  63,  48,  16,  189,  192,  32,   567,  768,  64, ...
*/

/*Eu tentei fazer esse mas não consigo gerar uma sequencia, pedi ajuda até pro Chat GPT e pro Bard, não consegui. Eu fiz os
o número pedido de exercícios portanto estou entregando sem o exercício 13. Pretendo continuar tentando mas para entregar no prazo,
vou ficar devendo esse.*/
int main()
{
    int k, i, termo1, termo2, termo3, soma;
    char executar_novamente;

    do
    {
        do
        {
            printf("Quantos termos da sequencia voce pretende somar? So sao permitidos multiplos de 3.\n");
            scanf(" %d", &k);

            if (k < 0)
            {
                printf("Voce digitou um numero negativo. Tente novamente.\n");
            }

            if (k % 3 != 0)
            {
                printf("Digite um valor multiplo de 3.\n");
            }
        } while (k < 0 || k % 3 != 0);

        termo1 = 2;
        termo2 = 7;
        termo3 = 3;
        soma = 0;

        printf("%d, %d, %d, ", termo1, termo2, termo3);

        for (i = 1; i <= (k / 3 - 1); i++)
        {
            if (termo1 % 2 == 0)
            {
                printf("%d, ", termo1 * 2);
                termo1 = termo1 * 2;
            }

            if (termo2 % 7 == 0)
            {
                printf("%d, ", termo2 * 3);
                termo2 = termo2 * 3;
            }

            if (termo3 % 3 == 0)
            {
                printf("%d, ", termo3 * 4);
                termo3 = termo3 * 4;
            }
        }

        soma += termo1 + termo2 + termo3;

        printf("\nA soma dos primeiros %d termos da sequencia e igual a: %d\n", k, soma);

        system("pause");
        system("cls");

        do
        {
            printf("Voce quer executar esse programa novamente? (S/N)\n");
            scanf(" %c", &executar_novamente);

            if (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's')
            {
                printf("Digite uma resposta valida.\n");
            }

        } while (executar_novamente != 'N' && executar_novamente != 'n' && executar_novamente != 'S' && executar_novamente != 's');

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif
