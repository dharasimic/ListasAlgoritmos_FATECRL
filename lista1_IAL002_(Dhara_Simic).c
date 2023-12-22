#define ex1
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "windows.h"

#ifdef ex1
/*Exercíco 1 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Receba via teclado um número inteiro qualquer e exiba seu sucessor e seu antecessor*/

int main(void)
{
    int numero, antecessor, sucessor;
    char executar_novamente;

    do
    {

        printf("Digite um numero inteiro qualquer:\n");
        scanf("%i", &numero);

        antecessor = (numero - 1);
        sucessor = (numero + 1);

        printf("O antecessor do seu numero e %i e o sucessor e %i.\n", antecessor, sucessor);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex2
/*Exercíco 2 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Receba via teclado um número inteiro qualquer e exiba se ele é positivo ou negativo ou zero.*/

int main(void)
{
    int numero;
    char executar_novamente;

    do
    {
        printf("Digite um numero inteiro qualquer, seja positivo, negativo ou 0:\n");
        scanf("%i", &numero);

        if (numero > 0)
        {
            printf("O numero %i e positivo.\n", numero);
        }

        else if (numero < 0)
        {
            printf("O numero %i e negativo\n", numero);
        }

        else
        {
            printf("%i e zero.\n", numero);
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex3
/*Exercíco 3 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Calcule a média aritmética das quatro notas de um aluno e mostre,
além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior que 6,
ou a mensagem "Reprovado" caso contrário.*/

int main(void)
{
    float nota1, nota2, nota3, nota4, media;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite a primeira nota do aluno:\n");
            scanf("%f", &nota1);

        } while (nota1 < 0 || nota1 > 10);

        do
        {
            printf("Digite a segunda nota do aluno:\n");
            scanf("%f", &nota2);

        } while (nota2 < 0 || nota2 > 10);

        do
        {
            printf("Digite a terceira nota do aluno:\n");
            scanf("%f", &nota3);

        } while (nota3 < 0 || nota3 > 10);

        do
        {
            printf("Digite a quarta nota do aluno:\n");
            scanf("%f", &nota4);

        } while (nota1 < 0 || nota1 > 10);

        media = (nota1 + nota2 + nota3 + nota4) / 4;

        printf("Media do aluno = %.2f\n", media);

        if (media >= 6)
        {
            printf("Aluno(a) aprovado.\n");
        }
        else
        {
            printf("Aluno(a) reprovado.\n");
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex4
/*Exercíco 4 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Leia dois valores a e b e os escreve com a mensagem: "São múltiplos" ou "Não são múltiplos."*/

int main(void)
{

    int a, b;
    char executar_novamente;

    do
    {
        printf("Digite dois numeros inteiros quaisquer:\n");
        scanf("%i %i", &a, &b);

        if (a % b == 0)
        {
            printf("Os numeros %i e %i sao multiplos.", a, b);
        }

        else
        {
            printf("Os numeros %i e %i nao sao multiplos.\n", a, b);
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex5
/*Exercíco 5 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Receba dois valores a e b e os escreva com a mensagem "São pares" ou "São ímpares".*/

int main(void)
{

    int a, b;
    char executar_novamente;

    do
    {

        printf("Digite dois numero inteiros:\n");
        scanf("%i %i", &a, &b);

        if (a % 2 == 0)
        {
            if (b % 2 == 0)
                printf("Ambos numeros sao pares.\n");
        }

        if (a % 2 == 0)
        {
            if (b % 2 != 0)
                printf("Somente %i e par.\n", a);
        }

        if (a % 2 != 0)
        {
            if (b % 2 == 0)
                printf("Somente %i e par.\n", b);
        }

        if (a % 2 != 0)
        {
            if (b % 2 != 0)
                printf("Ambos numeros sao impares.\n");
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex6
/*Exercíco 6 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Leia dois números inteiros e mostre o maior deles. Caso sejam iguais informe ao usuário.*/

int main(void)
{

    int a, b;
    char executar_novamente;

    do
    {
        printf("Digite dois numeros inteiros quaisquer:\n");
        scanf("%i %i", &a, &b);

        if (a > b)
        {
            printf("O numero %i e maior que o numero %i\n", a, b);
        }

        else if (b > a)
        {
            printf("O numero %i e maior que o numero %i\n", b, a);
        }
        else
        {
            printf("Os numeros digitados sao iguais.\n");
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex7
/*Exercíco 7 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Tendo como dados de entrada a altura e o sexo de uma pessoa (?1? masculino e ?2? feminino),
construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas;
    para homens: (72.7*H) - 58
    para mulheres: (62.1*H) - 44.7 */

int main(void)
{

    char genero, executar_novamente;
    float altura, ideal;

    do
    {
        do
        {
            printf("Digite seu genero, se for masculino digite M e se for feminino, digite F:\n");
            scanf(" %c", &genero);

        } while (genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f');

        do
        {
            printf("Digite sua altura em metros:");
            scanf("%f", &altura);
        } while (altura <= 0);

        if (genero == 'M' || genero == 'm')
        {
            ideal = (72.7 * altura) - 58;

            printf("Seu peso ideal seria:%.2f\n", ideal);
        }

        else
        {
            ideal = (62.1 * altura) - 44.7;

            printf("Seu peso ideal seria: %.2f\n", ideal);
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex8
/*Exercíco 8 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Informar o preço de um produto. Calcule e exiba o preço com desconto de 9%
e o preço com reajuste de 10%.*/

int main(void)
{

    float preco, des1, des2;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite o valor original do produto em reais:\n");
            scanf("%f", &preco);
        } while (preco <= 0);

        des1 = preco * 0.9;
        des2 = preco + (preco * 0.1);

        printf("O produto com desconto de 9 porcento resulta no valor de %.2f e com desconto de 10 porcento resulta no valor %.2f\n", des1, des2);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex9
/*Exercíco 9 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Cálculo de um salário líquido de um professor. Serão fornecidos via teclado o valor da hora aula,
número de aulas dadas e o % de desconto do INSS.*/

int main(void)
{
    float salario, h_aula, n_aulas, inss;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite quantas aulas voce tem atribuidas:\n");
            scanf("%f", &n_aulas);
        } while (n_aulas <= 0);

        do
        {
            printf("Qual o valor da hora aula?\n");
            scanf("%f", &h_aula);
        } while (h_aula <= 0);

        do
        {
            printf("Qual o valor de desconsto do INSS em porcentagem?\n");
            scanf("%f", &inss);
        } while (inss <= 0);

        salario = (n_aulas * h_aula) - (inss / 100);

        printf("Seu salario liquido sera: %.2f\n", salario);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);

    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex10
/*Exercíco 10 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: O custo ao consumidor de um carro novo é a soma do preço da fábrica com o
percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor
e o percentual de impostos. Calcule e mostre:
a. O valor correspondente ao lucro do distribuidor
b. O valor correspondente aos impostos
c. O preço final do veículo*/

int main(void)
{

    float p_fabrica, pe_lucro, pe_impostos, v_lucro, v_impostos, p_final;
    char executar_novamente;

    do
    {
        do
        {
            printf("Qual o valor de fabrica do veiculo?\n");
            scanf("%f", &p_fabrica);
        } while (p_fabrica <= 0);

        do
        {
            printf("Qual o percentual de lucro do distribuidor? (Digite sem o simbolo de porcentagem)\n");
            scanf("%f", &pe_lucro);
        } while (pe_lucro <= 0);

        do
        {
            printf("Qual o percentual de impostos? (Digite sem o simbolo de porcentagem)\n");
            scanf("%f", &pe_impostos);
        } while (pe_impostos <= 0);

        v_lucro = p_fabrica * (pe_lucro / 100);

        v_impostos = p_fabrica * (pe_impostos / 100);

        p_final = p_fabrica + v_lucro + v_impostos;

        printf("O valor do lucro do distribuidor e igual a: %.2f\nO valor dos impostas corresponde a: %.2f\nPortanto o preco final do veiculo corresponde a: %.2f\n", v_lucro, v_impostos, p_final);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex11
/*Exercíco 11 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Leia o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e
em 20% se ele for maior ou igual a 100.*/

int main(void)
{
    float preco, novo_preco;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite o valor de um produto:\n");
            scanf("%f", &preco);
        } while (preco <= 0);

        if (preco < 100)
        {
            novo_preco = preco + (preco * 0.1);
            printf("O preco digitado e menor que 100 reais portanto sofreu inflacao de 10 porcento.\nO novo preco e %.2f\n", novo_preco);
        }

        else
        {
            novo_preco = preco + (preco * 0.2);
            printf("O preco digitado e maior ou igual a 100 reais portanto sofreu inflacao de 20 porcento.\nO novo preco e %.2f\n", novo_preco);
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif

#ifdef ex12

/*Exercíco 12 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Elabore um programa que receba o salário de um funcionário e calcule o reajuste desse
salário. Considere que o funcionário deve receber um reajuste de 15% caso seu salário
seja menor que 800 reais. Se o salário for maior ou igual a 800 e menor ou igual a 1000,
seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Ao final
do programa deve apresentar o valor antigo e o novo salário.*/

int main(void)
{
    float salario, novo_salario;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite seu salario atual:\n");
            scanf("%f", &salario);
        } while (salario <= 0);

        if (salario < 800)
        {
            novo_salario = salario + (salario * 0.15);
            printf("Seu salario e menor que 800 reais, portanto sofreu um reajuste de 15 porcento. Seu salario atual e: %.2f", novo_salario);
            printf("\nSeu antigo salario era: %.2f\n", salario);
        }

        else if (salario <= 1000)
        {
            novo_salario = salario + (salario * 0.1);
            printf("Seu salario esta entre 800 reais e 1000 reais, portanto sofreu um reajuste de 10 porcento. Seu salario atual e: %.2f", novo_salario);
            printf("\nSeu antigo salario era: %.2f\n", salario);
        }

        else
        {
            novo_salario = salario + (salario * 0.5);
            printf("Seu salario e maior que 1000 reais, portanto sofreu um ajuste de 5 porcento. Seu salario atual e: %.2f", novo_salario);
            printf("\nSeu antigo salario era: %.2f\n", salario);
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex13

/*Exercíco 13 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Receba dois números, o primeiro deve ser maior que 10 e menor que 25, o segundo deve
ser maior ou igual a zero, o terceiro deve ser a soma dos dois primeiros e o quarto é o
produto dos três números anteriores. Calcule e exiba a soma dos quadrados de cada um
dos quatro números. Caso o resultado seja menor que 50000, solicite novos dados.*/

int main(void)
{
    int a, b, c, d, soma;
    char executar_novamente;

    do
    {
        do
        {
            do
            {
                printf("Digite um numero inteiro maior que 10 e menor que 25:\n");
                scanf("%d", &a);
            } while (a <= 10 || a >= 25);

            do
            {
                printf("Digite um numero inteiro maior ou igual a zero:\n");
                scanf("%d", &b);
            } while (b < 0);

            c = a + b;
            d = a * b * c;

            soma = (a * a) + (b * b) + (c * c) + (d * d);

            printf("O primeiro numero digitado e: %d. \nO segundo numero e: %d.\nA soma dos dois primeiros e: %d\nE a multiplicacao dos tres numeros e: %d.\nA soma dos quadrados dos quatro numeros anteriores e: %d.\n", a, b, c, d, soma);
        } while (soma < 50000);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex14
/*Exercíco 14 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente.
O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total,
usando a tabela abaixo:
Código do Produto           Preço Unitário
1001                            5,32
1324                            6,45
6548                            2,37
0987                            5,32
7623                            6,45
*/

int main(void)
{
    int produto, quantidade;
    float preco;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite o codigo do produto(Caso o codigo comece com 0, ignore o 0.):\n");
            scanf("%d", &produto);
        } while (produto != 1001 && produto != 1324 && produto != 6548 && produto != 987 && produto != 7623);

        do
        {
            printf("Digite a quantidade comprada pelo cliente:\n");
            scanf("%d", &quantidade);
        } while (quantidade <= 0);

        if (produto == 1001)
        {
            preco = 5.32 * quantidade;

            printf("O cliente que comprou %d unidades do produto %d deve %.2f reais.\n", quantidade, produto, preco);
        }

        else if (produto == 1324)
        {
            preco = 6.45 * quantidade;

            printf("O cliente que comprou %d unidades do produto %d deve %.2f reais.\n", quantidade, produto, preco);
        }

        else if (produto == 6548)
        {
            preco = 2.37 * quantidade;

            printf("O cliente que comprou %d unidades do produto %d deve %.2f reais.\n", quantidade, produto, preco);
        }

        else if (produto == 987)
        {
            preco = 5.32 * quantidade;

            printf("O cliente que comprou %d unidades do produto %d deve %.2f reais.\n", quantidade, produto, preco);
        }

        else
        {
            preco = 6.45 * quantidade;

            printf("O cliente que comprou %d unidades do produto %d deve %.2f reais.\n", quantidade, produto, preco);
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex15
/*Exercíco 15 da lista 01 de Algoritmos da Professora Nádia;
O enunciado: Leia o número de identificação, as 3 notas obtidas por um aluno
nas 3 verificações e a média dos exercícios que fazem parte da avaliação.
Calcular a média de aproveitamento, usando a fórmula:
MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7
A atribuição de conceitos obedece a tabela abaixo:
Média de Aproveitamento          Conceito
9,0                                 A
7,5 e < 9,0                         B
6,0 e < 7,5                         C
4,0 e < 6,0                         D
< 4,0                               E
O algoritmo deve escrever o número do aluno, suas notas, a média dos exercícios,
a média de aproveitamento, o conceito correspondente e a mensagem:
APROVADO se o conceito for A, B ou C e REPROVADO se o conceito for D ou E.
*/

int main(void)
{
    int aluno;
    float nota1, nota2, nota3, ME, MA;
    char executar_novamente;

    do
    {
        printf("Digite o numero de identificacao do aluno:\n");
        scanf("%i", &aluno);

        do
        {
            printf("Digite a primeira nota do aluno %d:\n", aluno);
            scanf("%f", &nota1);
        } while (nota1 < 0 || nota1 > 10);

        do
        {
            printf("Digite a segunda nota do aluno %d:\n", aluno);
            scanf("%f", &nota2);
        } while (nota2 < 0 || nota2 > 10);

        do
        {
            printf("Digite a terceira nota do aluno %d:\n", aluno);
            scanf("%f", &nota3);
        } while (nota3 < 0 || nota3 > 10);

        do
        {
            printf("Digite a media dos exercicios do aluno %d:\n", aluno);
            scanf("%f", &ME);
        } while (ME < 0 || ME > 10);

        MA = (nota1 + (nota2 * 2) + (nota3 * 3) + ME) / 7;

        if (MA >= 9)
        {
            printf("O aluno de numero %d obteve uma media de aproveitamento equivalente a %.2f.\nCorrespondente ao conceito A, portanto foi aprovado.\n", aluno, MA);
        }

        else if (MA >= 7.5)
        {
            printf("O aluno de numero %d obteve uma media de aproveitamento equivalente a %.2f.\nCorrespondente ao conceito B, portanto foi aprovado.\n", aluno, MA);
        }

        else if (MA >= 6)
        {
            printf("O aluno de numero %d obteve uma media de aproveitamento equivalente a %.2f.\nCorrespondente ao conceito C, portanto foi aprovado.\n", aluno, MA);
        }

        else if (MA >= 4)
        {
            printf("O aluno de numero %d obteve uma media de aproveitamento equivalente a %.2f.\nCorrespondente ao conceito D, portanto foi reprovado.\n", aluno, MA);
        }

        else
        {
            printf("O aluno de numero %d obteve uma media de aproveitamento equivalente a %.2f.\nCorrespondente ao conceito E, portanto foi reprovado.\n", aluno, MA);
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif
