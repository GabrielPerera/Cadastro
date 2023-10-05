#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct informacoes{
	char nome[30]; 
	unsigned char idade;
	int telefone;
	int cpf;
	char email[30];
	char estCivil[10];
	int cep;
	char endereco[50];
	int numeroCasa;
	char nacionalidade[10];  
}dados;


int cadastro() {
	
	printf("Vamos começar seu cadastro!\n\n");
	
	printf("Nome completo_____________________: ");
	fflush(stdin);
	fgets(dados.nome,30,stdin);
	
	printf("Idade_________________: ");
	scanf("%c", &dados.idade);
	getchar();
	
	printf("Telefone___________________: ");
	scanf("%d", &dados.telefone);
	getchar();
	
	printf("CPF sem o hifen_________________________: ");
	scanf("%d", &dados.cpf);
	getchar();
	
	printf("Email_____________________: ");
	fflush(stdin);
	fgets(dados.email,30,stdin);
	
	printf("Estado civil_____________________: ");
	fflush(stdin);
	fgets(dados.estCivil,10,stdin);
	
	printf("CEP sem o hifen___________________: ");
	scanf("%d", &dados.cep);
	getchar();
	
	printf("Endereco______________________: ");
	fflush(stdin);
	fgets(dados.endereco,50,stdin);
	
	printf("Numero da casa______________________: ");
	scanf("%d", &dados.numeroCasa);
	getchar();
	
	printf("Nacionalidade_________________________: ");
	fflush(stdin);
	fgets(dados.nacionalidade,10,stdin);
	
	
	return 0;
}

