#include <stdio.h>
    int main ()
{
    char nome[20];
    float nota1, nota2, media;
    
        printf("\nentre com o nome do aluno: ");
            scanf("\n%s", nome);
        printf("\nentre com a nota1: ");
            scanf("\n%f", &nota1);
        printf("\n entre com a nota2: ");
            scanf("\n%f", &nota2);
            
    media=(nota1+nota2)/2 ; 
        printf("\nsua média = %f", media);
            
    if(media>=6)
    {
        printf("\n\nparabéns %s, sua média=%f", nome , media);
    }
    else
    {
        printf("\n\nInfelizmente você , %s , está reprovado pois sua media foi= %f", nome, media);
    }
}    