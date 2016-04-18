#include <stdio.h>
    int main ()
    {
        int num1, num2;
        int soma;
        printf("digte o primeiro numero aqui: ");
        scanf("%d", &num1);
        printf("digite o segundo numero aqui: ");
        scanf("%d", &num2);
       
        soma=num1+num2;
        printf("soma=%d", soma);
        return 0;
    }