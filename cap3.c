//Grupo C05 - Alunos: Dennis Almeida, Lucas do Nascimento, Tatiana Gon�alves

#define ex5
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
    printf("Digite o primeiro n�mero: ");
    scanf("%d",&numA);

    printf("Digite o segundo n�mero: ");
    scanf("%d",&numB);

    printf("\n\nA soma dos n�meros %d e %d � igual a %d",numA,numB,adicao(numA,numB));
    printf("\nA subtra��o dos n�meros %d e %d � igual a %d",numA,numB,subtracao(numA,numB));
    printf("\nA multiplica��o dos n�meros %d e %d � igual a %d",numA,numB,multiplicacao(numA,numB));
    printf("\nA divis�o dos n�meros %d e %d � igual a %.2f",numA,numB,divisao(numA,numB));

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

    printf("Digite o n�mero: ");
    scanf("%f",&numA);
do{
    printf("Digite uma opera��o (+ - / *): ");
    scanf("%s",&opcao);
    if(opcao=='=')
    {
        break;
    }
    printf("Digite o n�mero: ");
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

    printf("\nEncerrar opera��o? (s/n)");
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
         printf("Letra n�o encontrada no vetor.\n");
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

/*4 - Fa�a um programa receba dois n�meros inteiros e execute as seguintes fun��es:
    - Verificar se o n�mero digitado � positivo ou negativo. Sendo que o valor de
      retorno ser� 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 n�meros s�o positivos, retorne a soma dos N n�meros existentes entre
      eles.
    - Se os 2 n�meros s�o negativos, retorne a multiplica��o dos N n�meros existente
      entre eles.
*/

int positivos(int num1,int num2)
{
    int result;

        result=num1+num2;
        printf("\nA soma dos n�meros �: %d",result);

    return result;
}

int negativos(int num1,int num2)
{

    int result;

        result=num1*num2;
        printf("\nA multiplica��o dos n�meros �: %.2d",result);

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

    printf("\nVerifica��o dos n�meros:\n");
    printf("1 Positivo\n");
    printf("0 Negativo\n");
    printf("-1 Igual a zero\n");
    printf("\nRetorno do primeiro n�mero %d",verificar(num1));
    printf("\nRetorno do segundo n�mero %d\n",verificar(num2));

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
5 - Escreva um programa que receba um numero N. Escreva uma fun��o que
    retorne a soma dos algarismos de N!. O resultado deve ser mostrado na funcao
    main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos �e 2 + 4 = 6.
*/

int somaDosAlgarismos(int n)
{
    int fat;
    int somaAlg = 0;
    int resto;

    for(fat=1;n>1;n--) // La�o for para achar a fatorial
    {
        fat*=n;
    }
     printf("A fatorial � %d",fat);

    while(fat > 0) // Enquanto fatorial menor que 0 repete o processo
    {
     resto=fat % 10;   //Resto da fatorial, para achar o ultimo digito
     somaAlg += resto; //soma do resto da fatorial (ultimo digito)
     fat=fat / 10; //Divis�o da fatorial por 10 (para separar o ultimo digito)
    }

    return somaAlg; //retorna a soma dos algarismos
}

main()
{
    setlocale(LC_ALL,"");

    int n;
    char sair;

do{
    printf("Digite um n�mero: ");
    scanf("%d",&n);
    printf("\nA soma dos algarismos � %d\n\n",somaDosAlgarismos(n));

    printf("Deseja contiuar? (s/n): ");
    scanf("%s",&sair);
    getchar();
}while((sair == 's') || (sair == 'S'));

    printf("\n\nFIM\n\n");

}


#endif // ex5
