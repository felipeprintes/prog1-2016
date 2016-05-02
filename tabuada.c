//tabuada
#include <stdio.h>
    int main()
{
    int i,mult,n;
        printf("entre com um número de de 0 a 9: ");
        scanf("%d", &n);
        printf("tabuada de mltiplicação\n");
        printf("_________________ \n");
        
            for(i=0; i<=10; i=i+1)
            {  
                mult = n*i;
                printf("%d x %d = %d \n", n,i,mult );
                
                
            }
    
    
    
    
    
    
    
    
    return 0;
}    