#include <stdio.h>
#include <stdlib.h>

    int main ()
{
    float peso, altura,caloria,idade;
    char sexo;

            
    printf ("homem ou mulher? ");
        scanf("%c ", &sexo);
        
    printf("qual seu peso? ");
        scanf("%f", &peso);
    printf(" qual sua idade?");
        scanf("%f", &idade);
    printf("qual sua altura? ");
        scanf("%f", &altura);
        
        if(sexo=='h'){
          caloria=66.47 + (13.7 * peso ) + (5 * altura ) - (6.8 * idade );
            printf("sua taxa metabólica basal é calorias=%0.2f", caloria);
        }
         else{ 
          caloria=655.1 + (9.6 * peso) + (1.8 * altura) - (4.7 * idade);
            printf("sua taxa metabólica basal é calorias=%0.2f", caloria);
         }
    return 0;
}



 