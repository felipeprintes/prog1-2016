#include <stdio.h>
    int main()
{
    char lt;
        printf("entre com uma letra MAIUSCULA: ");
            lt = getchar();
            
            printf("\n caracter lido=%c", lt);
            printf("\n%d", lt);
            printf("\n conversão para minúscula= %c\n", lt+32);
            return 0;
}    