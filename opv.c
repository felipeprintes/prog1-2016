#include <stdio.h>
    int main ()
    {
        int num1, num2, soma, sub, mult;
        float divi;
            printf("num1? ");
                scanf("%i", &num1);
            printf("num2? ");
                scanf("%i", &num2);
                
            soma=num1+num2;
            sub= num1-num2;
            divi=(float)num1/num2;
            mult=num1*num2;
            
                printf("\nsoma=%i", soma);
                printf("\nsub=%i", sub);
                printf("\ndivi=%f", divi);
                printf("\nmult=%i", mult);
                
                    return 0;
                
                    
    }