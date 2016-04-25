#include <stdio.h>
#include <math.h>
    int main()
    {
        float a,b,c,x1, x2;
        
            printf("valor de a: ");
                scanf("%f", &a);
            printf("valor de b: ");
                scanf("%f", &b);
            printf("qual valor de c: ");
                scanf("%f", &c);
                
            x1=(-b + sqrt(b*b-4*a*c) )/2*a ;   
            x2=(-b - sqrt(b*b-4*a*c) )/2*a ;
            
            printf("x1=%f", x1);
            printf("x2=%f", x2);
            
            return 0;
                
                
    }