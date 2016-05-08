//tabela AscII
#include <stdio.h>
    int main ()
{
    char lt;
    printf("\nDec\tChar");
    
    for(lt=33; lt<126; lt=lt+1)
    {
        
        printf("\n%d\t%c",lt, lt);
    }
    
}    