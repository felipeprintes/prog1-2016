#include <stdio.h>
    int main ()
    {
        int idade;
        
            printf("qual sua iadade: ");
                scanf("%i", &idade);
                
            
        if(idade>= 16 && idade<= 17){
            printf("\n você pode votar, se quiser");
        }
        if(idade<=15){
            printf("\nvocê não pode votar");
        }
        
        if(idade>=18 && idade<=70){
            printf("\nvocê é obrigado a votar");
        }
        if(idade>=71){
            printf("você pode votar, se quiser");
        }
        
        return 0;
    }