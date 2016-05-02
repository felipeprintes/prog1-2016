#include <stdio.h>
    int main()
{
    int i;
    
    
        do{
            printf("entre com um valor entre 0 e 9: ");
            scanf("%d", &i);
            
        }
        while (i>9 || i<0);
       
    
    return 0;
}    