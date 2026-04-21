#include <stdio.h>

// estrutura para armazenar endereço
struct endereco
{
    char rua[50];
    int numero;
    char complemento[30];
    char bairro[30];
};

// estrutura pessoa (contém um endereço)
struct pessoa
{
    char nome[50];
    struct endereco end;
    char cargo[20];
    float salario;
};

// função que lê os dados de uma pessoa e retorna a struct preenchida
struct pessoa lerPessoa()
{
    struct pessoa p;

    printf("\nNome: ");
    scanf(" %[^\n]", p.nome);

    printf("Rua: ");
    scanf(" %[^\n]", p.end.rua);

    printf("Numero: ");
    scanf("%d", &p.end.numero);

    printf("Complemento: ");
    scanf(" %[^\n]", p.end.complemento);

    printf("Bairro: ");
    scanf(" %[^\n]", p.end.bairro);

    printf("Cargo: ");
    scanf(" %[^\n]", p.cargo);

    printf("Salario: ");
    scanf("%f", &p.salario);

    return p; // retorna a pessoa preenchida
}

// função que recebe o vetor e mostra os dados das pessoas
void mostrar(struct pessoa v[], int tam)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        printf("\nPessoa %d\n", i + 1);

        printf("Nome: %s\n", v[i].nome);
        printf("Endereco: %s, %d, %s, %s\n",
               v[i].end.rua,
               v[i].end.numero,
               v[i].end.complemento,
               v[i].end.bairro);

        printf("Cargo: %s\n", v[i].cargo);
        printf("Salario: %.2f\n", v[i].salario);
    }
}

int main()
{
    struct pessoa v[3]; // vetor de 3 pessoas
    int i;

    // preenchendo o vetor usando a função
    for (i = 0; i < 3; i++)
    {
        printf("\n--- Pessoa %d ---\n", i + 1);
        v[i] = lerPessoa();
    }

    printf("\nDados cadastrados:\n");

    // exibindo os dados
    mostrar(v, 3);

    return 0;
}