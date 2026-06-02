//cliente
#include <stdio.h>
#include <windows.h>

struct cliente{
	char nome[50];
	int idade;
	char email[100];
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct cliente cli1;
	struct cliente cli2;
	struct cliente cli3;
	
	strcpy(cli1.nome,"João da Silva");
	cli1.idade = 25;
	strcpy(cli1.email,"João@email.com");
	
	strcpy(cli2.nome,"Jéssica Guedes Vaz");
	cli2.idade = 16;
	strcpy(cli2.email,"Jesga@email.com");
	
	strcpy(cli3.nome,"joão Victor");
	cli3.idade = 16;
	strcpy(cli3.email,"JoãoVictor@email.com");
	
	printf("%s, idade: %d, %s\n", cli1.nome, cli1.idade, cli1.email);
	printf("%s, idade: %d, %s\n", cli2.nome, cli2.idade, cli2.email);
	printf("%s, idade: %d, %s\n", cli3.nome, cli3.idade, cli3.email);
	
	getch();
}