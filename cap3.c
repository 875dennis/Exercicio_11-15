#define ex1
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*OBS.: Todos os programa devem ser finalizados pelo usuario.*/

#ifdef ex1

/*
1 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().
*/

int adicao(int numA, int numB)
{
    int z;
    z=numA+numB;
    return z;
}

int subtracao(int numA, int numB)
{
    int z;
    z=numA-numB;
    return z;
}

int multiplicacao(int numA, int numB)
{
    int z;
    z=numA*numB;
    return z;
}

float divisao(float numA, float numB)
{
    float z;
    z=numA/numB;
    return z;
}

void main()
{
    setlocale(LC_ALL,"");

    int numA,numB;
    char sair;
do{
    printf("Digite o primeiro número: ");
    scanf("%d",&numA);

    printf("Digite o segundo número: ");
    scanf("%d",&numB);

    printf("\n\nA soma dos números %d e %d é igual a %d",numA,numB,adicao(numA,numB));
    printf("\nA subtração dos números %d e %d é igual a %d",numA,numB,subtracao(numA,numB));
    printf("\nA multiplicação dos números %d e %d é igual a %d",numA,numB,multiplicacao(numA,numB));
    printf("\nA divisão dos números %d e %d é igual a %.2f",numA,numB,divisao(numA,numB));

    printf("\n\nDeseja continuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair=='s') || (sair=='S'));

    printf("\n\nFim do programa");

}

#endif // ex1

#ifdef ex2

/*
2 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch). As operacoes
    aritmeticas devem estar em funcoes. O resultado deve ser mostrado na
    funcao main()
*/

int adicao(int numA, int numB)
{
    int z;
    z=numA+numB;
    return z;
}

int subtracao(int numA, int numB)
{
    int z;
    z=numA-numB;
    return z;
}

float multiplicacao(float numA, float numB)
{
    float z;
    z=numA*numB;
    return z;
}

float divisao(int numA, int numB)
{
    float z;
    z=numA/numB;
    return z;
}

main()
{
    setlocale(LC_ALL,"");


    float numA,numB,resultado;
    char opcao,sair;

    printf("\t\tCALCULADOR\n");

    printf("Digite o número: ");
    scanf("%f",&numA);
do{
    printf("Digite uma operação (+ - / *): ");
    scanf("%s",&opcao);
    if(opcao=='=')
    {
        break;
    }
    printf("Digite o número: ");
    scanf("%f",&numB);

    switch(opcao)
    {
        case '+':
        {
            resultado = adicao(numA,numB);
            printf("%.2f",resultado, numB, adicao(numA,numB));
            break;
        }
        case '-':
        {
            resultado = subtracao(numA,numB);
            printf("%.2f",resultado, numB, subtracao(numA,numB));
            break;
        }
        case '/':
        {
           resultado = divisao(numA,numB);
            printf("%.2f",resultado, numB, divisao(numA,numB));
            break;
        }
        case '*':
        {
            resultado = multiplicacao(numA,numB);
            printf("%.2f",resultado, numB, multiplicacao(numA,numB));
            break;
        }

        default:
            {
                printf("Erro");
            }
        }
        numA=resultado;

    printf("\nEncerrar operação? (s/n)");
    scanf("%s",&sair);
    getchar();
}while(sair == 'n');

        printf("\nResultado final: %.2f\n",resultado);

printf("\n\nFIM DO PROGRAMA\n\n");

}

#endif ex2

#ifdef ex3
/*
3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/
char vetor []={'b','d','f','h','j','k','m','o','q','s','u','w','y'};

char verifLetra(char letra)
{
    int x;
    int achouValor = 0;

    for(x=0; x<13; x++)
    {
        if(letra==vetor[x])
    {
       achouValor = 1;
    }
    }

    if(achouValor == 0)
    {
         printf("Letra não encontrada no vetor.\n");
    }
    else if(achouValor == 1)
    {
         printf("Letra foi encontrada no vetor\n");
    }
}

main()
{
    setlocale(LC_ALL,"");

    char letra,sair;
do{
    printf("Digite uma letra: ");
    letra=getchar();
    verifLetra(letra);

    printf("Deseja contiuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair == 's') || (sair == 'S'));

printf("\n\n Fim do Programa\n\n");

}
#endif ex3

#ifdef ex4

/*4 - Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
      entre eles.
*/

int positivos(int num1,int num2)
{
    int result;

        result=num1+num2;
        printf("\nA soma dos números é: %d",result);

    return result;
}

int negativos(int num1,int num2)
{

    int result;

        result=num1*num2;
        printf("\nA multiplicação dos números é: %.2d",result);

    return result;
}

int verificar(int numero)
{
    if(numero>0)
    {
        return 1;
    }
    else if(numero<0)
    {
        return 0;
    }
    else
    {
        return -1;
    }

}

main()
{
    setlocale (LC_ALL,"");

    int num1,num2;
    char sair;

do{
    printf("\nDigite um numero\n");
    scanf("%d",&num1);
    printf("Digite outro numero\n");
    scanf("%d",&num2);

    printf("\nVerificação dos números:\n");
    printf("1 Positivo\n");
    printf("0 Negativo\n");
    printf("-1 Igual a zero\n");
    printf("\nRetorno do primeiro número %d",verificar(num1));
    printf("\nRetorno do segundo número %d\n",verificar(num2));

    if((num1 > 0) && (num2 > 0))
    {
        positivos(num1,num2);
    }
    else if((num1 < 0) && (num2 < 0))
    {
        negativos(num1,num2);
    }

    printf("Deseja contiuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair == 's') || (sair == 'S'));

    printf("\n\nFIM\n\n");
}

#endif // ex4


#ifdef ex5
/*
5 - Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!. O resultado deve ser mostrado na funcao
    main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.
*/

int somaDosAlgarismos(int n)
{
    int fat;
    int somaAlg = 0;
    int resto;

    for(fat=1;n>1;n--) // Laço for para achar a fatorial
    {
        fat*=n;
    }
     printf("A fatorial é %d",fat);

    while(fat > 0) // Enquanto fatorial menor que 0 repete o processo
    {
     resto=fat % 10;   //Resto da fatorial, para achar o ultimo digito
     somaAlg += resto; //soma do resto da fatorial (ultimo digito)
     fat=fat / 10; //Divisão da fatorial por 10 (para separar o ultimo digito)
    }

    return somaAlg; //retorna a soma dos algarismos
}

main()
{
    setlocale(LC_ALL,"");

    int n;
    char sair;

do{
    printf("Digite um número: ");
    scanf("%d",&n);
    printf("\nA soma dos algarismos é %d\n\n",somaDosAlgarismos(n));

    printf("Deseja contiuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair == 's') || (sair == 'S'));

    printf("\n\nFIM\n\n");

}


#endif // ex5
