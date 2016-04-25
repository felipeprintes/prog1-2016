// notas dos alunos
#include <stdio.h>
    int main( )
    {
        char alunos;
        
        float media,nota1,nota2,soma;
            printf("qual aluno: ");
                scanf("%c", &alunos);
            printf("qual a primeira nota: ");
                scanf("%f", &nota1);
            printf("qual a segunda nota: ");
                scanf("%f", &nota2);
            soma=nota1+nota2;
            media=(nota1+nota2)/2;
            printf("media=%0.2f", media);
            return 0;
                
            
    }