//clientes
#include <stdio.h>
#include <windows.h>

struct cliente{
	char nome[50];
	int idade;
	char email[100];
};

void main(){
	SetConsoleOutputCP(CP_UTF8);
	struct cliente clientes[5];
	
	strcpy(clientes[0].nome,"João da Silva");
	clientes[0].idade = 25;
	strcpy(clientes[0].email,"JoãodaSilva@email.com");
	
	strcpy(clientes[1].nome,"Maria da Silva");
	clientes[1].idade = 30;
	strcpy(clientes[1].email,"MariadaSilva@email.com");
	
	strcpy(clientes[2].nome,"Jéssica da Silva");
	clientes[2].idade = 44;
	strcpy(clientes[2].email,"JéssicadaSilva@email.com");
	
	strcpy(clientes[3].nome,"Pedro da Silva");
	clientes[3].idade = 28;
	strcpy(clientes[3].email,"PedrodaSilva@email.com");
	
	strcpy(clientes[4].nome,"Adamastor da Silva");
	clientes[4].idade = 68;
	strcpy(clientes[4].email,"AdamastordaSilva@email.com");
	
	for(int i = 0; i < 5; i++)
		printf("%s\tidade: %d\t%s\n", clientes[i].nome, clientes[i].idade, clientes[i].email);
	
	getch();
}