#include <stdio.h> 
#include <stdlib.h> 
#define LIN 2 
#define COL 2 
int main() { 
float precos[LIN][COL];       
// matriz dos preços 
char nomes[LIN][COL][50];     // matriz dos nomes 
int linha, coluna;            
float soma = 0.0, media;      
// posições da matriz 
// soma e média 
float maiorPreco, menorPreco; // maior e menor preço 
int linhaMaior, colunaMaior;  // posição do mais caro 
int linhaMenor, colunaMenor;  // posição do mais barato 
// cadastro dos produtos 
for(linha = 0; linha < LIN; linha++) { 
for(coluna = 0; coluna < COL; coluna++) { 
printf("Cadastro do produto [%d][%d]\n", linha, coluna); 
printf("Digite o nome do produto: "); // nome do produto 
scanf(" %[^\n]", nomes[linha][coluna]); 
printf("Digite o preco do produto: "); // preço do produto 
scanf("%f", &precos[linha][coluna]); 
printf("\n"); // pula linha 
} 
} 
maiorPreco = precos[0][0]; // começa pelo primeiro produto 
menorPreco = precos[0][0]; 
linhaMaior = linhaMenor = 0; // linha inicial 
    colunaMaior = colunaMenor = 0; // coluna inicial 
  
    // percorre a matriz 
    for(linha = 0; linha < LIN; linha++) { 
        for(coluna = 0; coluna < COL; coluna++) { 
 
            soma += precos[linha][coluna]; // soma os preços 
  
            // verifica o mais caro 
            if(precos[linha][coluna] > maiorPreco) { 
                maiorPreco = precos[linha][coluna]; 
                linhaMaior = linha; 
                colunaMaior = coluna; 
            } 
  
            // verifica o mais barato 
            if(precos[linha][coluna] < menorPreco) { 
                menorPreco = precos[linha][coluna]; 
                linhaMenor = linha; 
                colunaMenor = coluna; 
            } 
        } 
    } 
  
    media = soma / (LIN * COL); // calcula a média 
  
    // mostra os produtos 
    printf("LISTA DE PRODUTOS\n"); 
    for(linha = 0; linha < LIN; linha++) { 
        for(coluna = 0; coluna < COL; coluna++) { 
            printf("Produto [%d][%d]: %s - R$ %.2f\n", 
linha, coluna, nomes[linha][coluna], precos[linha][coluna]); 
} 
} 
printf("\n"); // pula linha 
printf("Preco medio dos produtos: R$ %.2f\n", media); // mostra a média 
// mostra o mais caro 
printf("\nProduto mais caro:\n"); 
printf("%s - R$ %.2f\n", nomes[linhaMaior][colunaMaior], maiorPreco); 
// mostra o mais barato 
printf("\nProduto mais barato:\n"); 
printf("%s - R$ %.2f\n", nomes[linhaMenor][colunaMenor], menorPreco); 
return 0; // fim do programa 
}