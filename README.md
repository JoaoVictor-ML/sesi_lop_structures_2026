# Estruturas (Linguagem C)
## Tecnologias
- Linguagem C
- DevC++
- Fluxograma
## Como testar
- Clone o repositório
- Abra o arquivo .c com o DevC++
- Pressione F11 para compilar e executar
## Exercicío 1
Crie um programa que utilize uma estrutura para armazenar informações de um produto (nome, preço, quantidade) e exiba essas informações.
``` C
#include <stdio.h>
#include <windows.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto prod[1];
	
	strcpy(prod[0].nome, "Chocolate");
	prod[0].preco = 8;
	prod[0].quantidade = 30;
	
	printf("Produto: %s\nPreço: %.2f\nQuantidade: %d", prod[0].nome, prod[0].preco, prod[0].quantidade);

	return 0;
}
```
## Exercicío 2
 Ao exibir as informações do produto, calcule e exiba o valor total em estoque (preço * quantidade).
``` C
#include <stdio.h>
#include <windows.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto prod[1];
	
	strcpy(prod[0].nome, "Chocolate");
	prod[0].preco = 8;
	prod[0].quantidade = 30;
	
	printf("Produto: %s\nPreço: %.2f\nQuantidade: %d\n", prod[0].nome, prod[0].preco, prod[0].quantidade);
	printf("O valor total de estoque é R$%.2f", (prod[0].preco * prod[0].quantidade));

	return 0;
}
```
## Exercicío 3
Crie um vetor de estruturas para armazenar informações de múltiplos produtos e exiba as informações de cada produto, incluindo o valor total em estoque e o total geral.
``` C
#include <stdio.h>
#include <windows.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main(){
	SetConsoleOutputCP(CP_UTF8);
	struct Produto prod[4];
	
	strcpy(prod[0].nome, "Chocolate");
	prod[0].preco = 8;
	prod[0].quantidade = 30;
	
	strcpy(prod[1].nome, "Tilápia");
	prod[1].preco = 68;
	prod[1].quantidade = 10;
	
	strcpy(prod[2].nome, "Franga Caipira");
	prod[2].preco = 16;
	prod[2].quantidade = 60;
	
	strcpy(prod[3].nome, "Carne de Gado");
	prod[3].preco = 36;
	prod[3].quantidade = 20;
	
	strcpy(prod[4].nome, "Figurinhas");
	prod[4].preco = 8;
	prod[4].quantidade = 50;
	
	for(int i = 0;i < 5; i++)
		printf("Produto: %s\tPreço: %.2f\tQuantidade: %d\n", prod[i].nome, prod[i].preco, prod[i].quantidade);
		printf("\n");

	return 0;
}
```
## Exercicío 4
Modifique o programa para permitir que o usuário insira as informações dos produtos em vez de atribuí-las diretamente no código.
``` C
#include <stdio.h>
#include <windows.h>

struct Produto{
	char nome[30];
	float preco;
	int quantidade;
	float estoque;
};

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Quantos produtos você deseja cadastrar? ");
	scanf("%d", &n);
	
	struct Produto prod[n];
	
	for(int i = 0; i < n; i++){
		printf("Digite o Nome: ");
		scanf("%s", &prod[i].nome);
		printf("Digite o Preço: ");
		scanf("%f", &prod[i].preco);
		printf("Digite o Quantidade: ");
		scanf("%d", &prod[i].quantidade);
		printf("\n");
	}
	float total = 0;
	for(int i = 0; i < n; i++){
		printf("%s\nPreço: R$%.2f\nQuantidade: %d\n", prod[i].nome, prod[i].preco, prod[i].quantidade);
		prod[i].estoque = prod[i].preco * prod[i].quantidade;
		printf("Total de %s: %.2f\n", prod[i].nome, prod[i].estoque);
		total += prod[i].estoque;
		printf("\n");
	}
	printf("Total do Estoque: %.2f\n", total);
	return 0;
}
```
