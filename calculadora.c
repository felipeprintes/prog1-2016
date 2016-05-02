#include <stdio.h>
    int main()
{
    int operacoes, soma, sub, mult, divi;
    int num1, num2,resp;
    
        
            
        do
        {
            printf("entre com um número: ");
            scanf("%d",&num1);
        printf("entre com um número: ");
            scanf("%d",&num2);
            printf("qual operação você deseja? ");
                scanf("%d", &operacoes);
         if(operacoes==1)
         {
             soma=num1+num2;
             printf("\nsoma=%d", soma);
         }
         if(operacoes==2)
        {    
            sub=num1-num2;
            printf("\nsub=%d", sub);
        }
        if(operacoes==3)
        {
            mult=num1*num2;
            printf("\nmult=%d", mult);
        }
        if(divi==4)
        {
            divi=num1/num2;
            printf("\ndivi=%d", divi);
        }
        printf("\ndeseja continuar? ");
            scanf("%d", &resp);
        }
        
        while(resp==1);
        {
            printf("\ntchau ");
                
            
        }
}    