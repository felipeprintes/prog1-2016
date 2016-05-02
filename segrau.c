#include <stdio.h>
#include <math.h>

    int main()
    {
        float a,b,c,x1, x2, delta;
        
            printf("valor de a: ");
                scanf("%f", &a);
            printf("valor de b: ");
                scanf("%f", &b);
            printf("qual valor de c: ");
                scanf("%f", &c);
                
                    if (a != 0) { 
                                   delta= (b*b) - 4*a*c;
                                   
                    if (a > 0)  {
                                x1=(-b + sqrt(delta))/(2*a);
                                    printf("x1=%f", x1);
                                x2=(-b - sqrt(delta))/(2*a);
                                    printf("x2=%f", x2);
                        
                    }
                    else        {
                                 printf("esse número é imaginário");  
                    }
                    if (delta == 0){
                        x1=(-b + sqrt(delta))/(2*a);
                            printf("delta igual a zero, logo, x1=x2");
                            printf("x1=%f", x1);
                        
                                   }
                     
                     
                     
                     
                     
                        
                                }
                
                
    }