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