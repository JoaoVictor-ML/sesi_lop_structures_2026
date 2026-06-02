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