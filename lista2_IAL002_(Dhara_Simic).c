#define ex7
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "windows.h"

#ifdef ex1
/*Exercíco 1 da lista 02 de Algoritmos da Professora Nádia;
O enunciado: Receba três números que garantam a existência de uma equação do 2º grau.
Se houver raízes reais exiba-as, caso contrário informe ao usuário.*/

int main(void)
{
    float a, b, c, triangulo, x1, x2, raiz;
    char executar_novamente;

    do
    {
        printf("Digite tres numeros para ver o resultado da equacao de segundo grau.\nQual o valor de a?\n");
        scanf("%f", &a);

        printf("Qual o valor de b?\n");
        scanf("%f", &b);

        printf("Qual o valor de c?\n");
        scanf("%f", &c);

        triangulo = (b * b) - 4 * a * c;
        x1 = (-b + sqrt(triangulo)) / (2 * a);
        x2 = (-b - sqrt(triangulo)) / (2 * a);

        if (triangulo > 0)
        {
            printf("Os resultados da sua equacao sao:\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
        }

        else if (triangulo == 0)
        {
            raiz = -b / (2 * a);
            printf("Raiz real: %.2f\n", raiz);
        }

        else
        {
            printf("Nao ha raizes reais!\n");
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
/*Exercíco 2 da lista 02 de Algoritmos da Professora Nádia;
O enunciado: A FATEC RUBENS LARA faz o pagamento de seus professores por hora/aula.
Faça um algoritmo que calcule e exiba o salário de um professor.
Sabe-se que o valor da hora/aula segue a tabela abaixo: Professor Nível 1 R$55,00 por hora/aula
Professor Nível 2 R$67,00 por hora/aula Professor Nível 3 R$78,00 por hora/aula.*/

int main(void)

{

    float n_aulas, salario;
    int numero;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite quantas aulas voce tem atribuidas:\n");
            scanf("%f", &n_aulas);
        } while (0 >= n_aulas);

        do
        {
            printf("Digite qual o seu nivel (1, 2 ou 3):\n");
            scanf("%d", &numero);
        } while (1 > numero || numero > 3);

        if (numero == 1)
        {
            salario = (n_aulas * 55);
            printf("Seu salario como professor nivel 1 e igual a: %.2f", salario);
        }

        else if (numero == 2)
        {
            salario = (n_aulas * 67);
            printf("Seu salario como professor nivel 2 e igual a: %.2f", salario);
        }

        else
        {
            salario = (n_aulas * 78);
            printf("Seu salario como professor nivel 3 e igual a: %.2f\n", salario);
        }

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}
#endif // ex2

#ifdef ex3
/*Exercíco 3 da lista 02 de Algoritmos da Professora Nádia;
O enunciado: Escrever um algoritmo que leia três números quaisquer
e informe qual é o maior e se eles forem todos igual informe ao usuário e solicite novos dados.*/

int main(void)
{
    int a, b, c, maior;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite tres numeros inteiros diferentes:\n");
            scanf("%d %d %d", &a, &b, &c);
        } while (a == b || a == c || b == c);

        maior = a;

        if (b > maior)
        {
            maior = b;
        }

        if (c > maior)
        {
            maior = c;
        }

        printf("O maior numero e: %d\n", maior);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex4
/*Exercíco 4 da lista 02 de Algoritmos da Professora Nádia;
O enunciado: Receba três números que representam os lados de um triângulo e
garantam a existência de um triângulo. Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.
Observações:
a.	Garantir que cada lado é menor que a soma dos outros dois lados.
b.	O triângulo é equilátero quando todos os lados são iguais.
c.	O triângulo é isóscele quando apenas dois lados são iguais.
d.	O triângulo é escaleno quando todos os lados são diferentes.
*/

int main(void)
{

    float a, b, c;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite um valor maior que zero para o lado a de um triangulo qualquer:\n");
            scanf("%f", &a);

        } while (a <= 0);

        do
        {
            printf("Digite um valor maior que zero para o lado b de um triangulo qualquer:\n");
            scanf("%f", &b);

        } while (b <= 0);

        do
        {
            printf("Digite um valor maior que zero para o lado c de um triangulo qualquer:\n");
            scanf("%f", &c);

        } while (c <= 0);

        if ((a + b) > c && (a + c) > b && (b + c) > a)
        {
            if (a == b && b == c)
            {
                printf("O triangulo digitado e equilatero pois todos os seus lados sao iguais.\n");
            }

            else if (a == b && b != c)
            {
                printf("O triangulo digitado e isocele pois dois dos seus lados sao iguais.\n");
            }

            else if (b == c && c != a)
            {
                printf("O triangulo digitado e isocele pois dois dos seus lados sao iguais.\n");
            }

            else if (a == c && a != b)
            {
                printf("O triangulo digitado e isocele pois dois dos seus lados sao iguais.\n");
            }

            else
            {
                printf("O triangulo digitado e escaleno pois todos os seus lados sao diferentes.\n");
            }
        }

        else
        {
            printf("Os valores dados nao formam um triangulo valido. (onde cada lado e menor que a soma dos outros dois lados.)\n");
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
/*Exercíco 5 da lista 02 de Algoritmos da Professora Nádia;
O enunciado: Faça um progama que receba o número de horas trabalhadas
e o valor do salário mínimo. Calcule o salário a receber seguindo as regras abaixo:
a.	a hora trabalha vale a metade do salário mínimo;
b.	o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
c.	o imposto equivale a 3% do salário bruto;
d.	o salário a receber equivale ao salário bruto menos o imposto.
*/

int main(void)
{

    float salario_m, imposto, h_trabalhada, salario_b, salario_final;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite quantas horas voce trabalha por dia:\n");
            scanf("%f", &h_trabalhada);
        } while (h_trabalhada <= 0 || h_trabalhada > 24);

        do
        {
            printf("Digite o valor do salario minimo:\n");
            scanf("%f", &salario_m);
        } while (salario_m <= 0);

        salario_b = h_trabalhada * (salario_m / 2);
        imposto = salario_b * 0.03;
        salario_final = salario_b - imposto;

        printf("O seu salario final e: %.2f\n", salario_final);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex6

/*Exercíco 6 da lista 02 de Algoritmos da Professora Nádia;
O enunciado: Cada degrau de uma escada tem X de altura.
Faça um programa que receba essa altura e a altura que o usuário deseja subindo a escada.
Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo,
sem se preocupar com a altura do usuário.*/

int main(void)
{
    float h_degrau, altura, n_degraus;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite a altura dos degrais da sua escada em metros:\n");
            scanf("%f", &h_degrau);
        } while (h_degrau <= 0);

        do
        {
            printf("Digite a altura que voce pretende alcancar com essa escada em metros:\n");
            scanf("%f", &altura);
        } while (altura <= 0);

        n_degraus = altura / h_degrau;

        printf("Voce devera subir %.2f degraus para alcancar seu objetivo de %.2f metro de altura.\n", n_degraus, altura);

        system("pause");
        system("cls");

        printf("Deseja executar esse programa novamente? (S ou N)\n");
        scanf(" %c", &executar_novamente);
    } while (executar_novamente == 'S' || executar_novamente == 's');

    return 0;
}

#endif

#ifdef ex7
/*Exercíco 7 da lista 02 de Algoritmos da Professora Nádia;
O enunciado: O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de peso de uma pessoa adulta.
A fórmula é IMC = peso / (altura)2. Elabore um algoritmo que leia o peso e a altura de um adulto
e mostre sua condição de acordo com as condições abaixo:
Abaixo de 17 - Muito abaixo do peso
Entre 17 e 18.49 - Abaixo do peso
Entre 18.5 e 24.99 - Peso normal
Entre 25 e 29.99 - Acima do peso
Entre 30 e 34.99 - Obesidade I
Entre 35 e 39.99 - Obesidade II (severa)
Acima de 40 - Obesidade III (mórbida)
*/

int main(void)
{

    float peso, altura, imc;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite seu peso atual em Kg:\n");
            scanf("%f", &peso);
        } while (peso <= 0);

        do
        {
            printf("Digite sua altura atual em metros:\n");
            scanf("%f", &altura);
        } while (altura <= 0);

        imc = peso / (altura * altura);

        if (imc < 17)
        {
            printf("Seu IMC indica que voce esta muito abaixo do peso.\n");
        }

        else if (imc <= 18.49)
        {
            printf("Seu IMC indica que voce esta abaixo do peso.\n");
        }

        else if (imc <= 24.99)
        {
            printf("Seu IMC indica que voce esta no peso normal.\n");
        }

        else if (imc <= 29.99)
        {
            printf("Seu IMC indica que voce esta acima do peso.\n");
        }

        else if (imc <= 34.99)
        {
            printf("Seu IMC indica que voce esta com obesidade tipo I.\n");
        }

        else if (imc <= 39.99)
        {
            printf("Seu IMC indica que voce esta com obesidade tipo II.\n");
        }

        else
        {
            printf("Seu IMC indica que voce esta com obesidade tipo III.\n");
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
/*Exercíco 8 da lista 02 de Algoritmos da Professora Nádia;
O enunciado: Faça um programa que receba a altura e o peso de uma pessoa.
De acordo com a tabela a seguir e mostre qual a classificação dessa pessoa.
Altura              Peso
                    Até 60      Entre 60 e 90(inclusive)        Acima de 90
Menos de 1.20         A                   D                           G
De 1.20 a 1.70        B                   E                           H
Maiores de 1.70       C                   F                           I
*/

int main(void)
{
    float peso, altura;
    char executar_novamente;

    do
    {
        do
        {
            printf("Digite seu peso atual em Kg:\n");
            scanf("%f", &peso);
        } while (peso <= 0);

        do
        {
            printf("Digite sua altura atual em metros:\n");
            scanf("%f", &altura);
        } while (altura <= 0);

        if (peso < 60)
        {
            if (altura < 1.20)
            {
                printf("Voce se encaixa na categoria A. Peso menor que 60kg e altura menor que 1,20 metros.\n");
            }

            else if (altura <= 1.70)
            {
                printf("Voce se encaixa na categoria B. Peso menor que 60kg e altura entre 1,20 e 1,70 metros.\n");
            }

            else if (altura > 1.70)
            {
                printf("Voce se encaixa na categoria C. Peso menor que 60kg e altura maior que 1,70 metros.\n");
            }
        }

        else if (peso <= 90)
        {
            if (altura < 1.20)
            {
                printf("Voce se encaixa na categoria D. Peso entre 60kg e 90kg e altura menor que 1,20 metros.\n");
            }

            else if (altura <= 1.70)
            {
                printf("Voce se encaixa na categoria E. Peso entre 60kg e 90kg e altura entre 1,20 e 1,70 metros.\n");
            }

            else if (altura > 1.70)
            {
                printf("Voce se encaixa na categoria F. Peso entre 60kg e 90kg e altura maior que 1,70 metros.\n");
            }
        }

        else if (peso > 90)
        {
            if (altura < 1.20)
            {
                printf("Voce se encaixa na categoria G. Peso maior que 90kg e altura menor que 1,20 metros.\n");
            }

            else if (altura >= 1.20 && altura <= 1.70)
            {
                printf("Voce se encaixa na categoria H. Peso maior que 90kg e altura entre 1,20 e 1,70 metros.\n");
            }

            else if (altura > 1.70)
            {
                printf("Voce se encaixa na categoria I. Peso maior que 90kg e altura maior que 1,70 metros.\n");
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

#ifdef ex9
/*Exercíco 9 da lista 02 de Algoritmos da Professora Nádia;
O enunciado: 9.	Faça um algoritmo que receba o a idade, o sexo
(1 para masculino e 2 para feminino) e salário fixo de um funcionário.
Mostre o sexo, a idade e o salário obtido após o acréscimo do abono:
Sexo                     Idade           Abono
1 - Masculino          >= 30              200
                        <30               120
2 - Feminino           >= 30              220
                        <30               130

*/

int main(void)
{
    float idade, salario, novo_salario;
    char sexo, executar_novamente;

    do
    {
        do
        {
            printf("Digite sua idade:\n");
            scanf("%f", &idade);
        } while (idade <= 0);

        do
        {
            printf("Digite seu sexo, se for masculino digite M e se for feminino, digite F:\n");
            scanf(" %c", &sexo);

        } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

        do
        {
            printf("Digite seu salario:\n");
            scanf("%f", &salario);
        } while (salario <= 0);

        if (sexo == 'M' || sexo == 'm')
        {
            if (idade >= 30)
            {
                novo_salario = salario + 200;
                printf("Seu salario novo e: %.2f\n", novo_salario);
            }

            else
            {
                novo_salario = salario + 120;
                printf("Seu salario novo e: %.2f\n", novo_salario);
            }
        }

        if (sexo == 'F' || sexo == 'f')
        {
            if (idade >= 30)
            {
                novo_salario = salario + 220;
                printf("Seu salario novo e: %.2f\n", novo_salario);
            }

            else
            {
                novo_salario = salario + 130;
                printf("Seu salario novo e: %.2f\n", novo_salario);
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