#include <stdio.h>
#include <math.h>
    int main()
{
int num1, num2;
int soma, sub, mult,divi, resp, operacoes, raiz;

    printf("\ntabela da calculadora\n");
    printf("_____________________");
    printf("\n1)soma\n");
    printf("\n2)subtração\n");
    printf("\n3)multiplicação\n");
    printf("\n4)divisão\n");
    
        do
        {
            printf("\nentre com num1:\n ");
                scanf("%d", &num1);
            printf("\nentre com um2:\n ");
                scanf("%d", &num2);
            printf("escolha sua operação pelos números da tabela ");
                scanf("%d", &operacoes);
                
        if(operacoes==1)
        {
            soma=num1+num2;
                printf("soma=%d",  soma);
                printf("\ndeseja tirar a raiz quadrada: ");
                    scanf("%d", &operacoes);
                if(resp==5)
                {
                    sqrt(soma);
                    printf("%d", raiz);
                }
        }
        }
        while(resp==1);
        {
            printf("bons estudos");
        }
        return 0;
}