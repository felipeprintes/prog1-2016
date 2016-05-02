#include <stdio.h>
    int main()
{
    int x;
    int resp;
    int maior=-999, menor=1000;
    do
    {
        printf("entre com um número: ");
            scanf("%d", &x);
        
        //guarde o maior número
        if(x>maior)
            x=maior;
        //guarde o menor número
        if(x<menor)
            x=menor;
            
        //continua no loop
        printf("deseja continuar? ");
            scanf("%d, &resp");
            
    }
     while(resp==1);
     {
        printf("maior número=%d", maior);
        printf("menor número=%d", menor);
     }
            
        
            
            
    
    return 0;
}    