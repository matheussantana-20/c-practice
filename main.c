#include <stdio.h>
int idade;
char nome[20];
// sistema de votos !
int main()
{

    // pede o nome do usuario !
    printf("digite o seu nome:\n");
    scanf(" %s", nome);

    // pede a idade do usuario!
    printf("diga a sua idade:");
    scanf(" %d", &idade);

    // verifica a idade do usuario!
    if (idade >= 18)
    {
        printf("ja possui idade para votar!");
    }
    else
    {
        printf("ainda nao possui idade para votar");
    }

    return 0;
}