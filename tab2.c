//programa para identificar se uma letra é maiúscula ou minúscula
#include <stdio.h>
    int main ()
{
    char lt;
    //entre com uma letra
        printf("entre com uma letra, maiúscula ou minúscula: ");
            lt= getchar();
            printf("\n caracter lido=%c", lt);
    
    //condição para a letra ser maiúscula
    if(lt<91 && lt>64) 
        printf("\nletra maisúcula");
        
    //condição para a letra ser minúscula    
    else if (lt< 123 && lt>96)
    printf("\nletra minuscula");
    
    
    return 0;
}