	#include <stdio.h>
	#include <stdlib.h>
	#include <conio.h>
	
	#define MAX_PESSOAS 100
	
	int numPessoas = 0;
	
	struct informacoes{
		char nome[30]; 
		int idade;
		int telefone;
		int cpf;
		char email[30];
		char estCivil[10];
		int cep;
		char endereco[50];
		int numeroCasa;
		char nacionalidade[10];  
	};
	
	struct informacoes pessoas[MAX_PESSOAS];
	
	
	int cadastro() {
		
		if (numPessoas < MAX_PESSOAS) {
		
		system("cls");
		
		printf("Vamos começar seu cadastro! Voce eh a %d!\n\n", numPessoas + 1);
		
		printf("Nome completo_____________________: ");
		fflush(stdin);
		fgets(pessoas[numPessoas].nome, sizeof(pessoas[numPessoas].nome), stdin);
		
		printf("Idade_________________: ");
		scanf("%d", &pessoas[numPessoas].idade);
		getchar();
		
		printf("Telefone___________________: ");
		scanf("%d", &pessoas[numPessoas].telefone);
		getchar();
		
		printf("CPF sem o hifen_________________________: ");
		scanf("%d", &pessoas[numPessoas].cpf);
		getchar();
		
		printf("Email_____________________: ");
		fflush(stdin);
		fgets(pessoas[numPessoas].email, sizeof(pessoas[numPessoas].email), stdin);
		
		printf("Estado civil_____________________: ");
		fflush(stdin);
		fgets(pessoas[numPessoas].estCivil, sizeof(pessoas[numPessoas].estCivil), stdin);
		
		printf("CEP sem o hifen___________________: ");
		scanf("%d", &pessoas[numPessoas].cep);
		getchar();
		
		printf("Endereco______________________: ");
		fflush(stdin);
		fgets(pessoas[numPessoas].endereco, sizeof(pessoas[numPessoas].endereco), stdin);
		
		printf("Numero da casa______________________: ");
		scanf("%d", &pessoas[numPessoas].numeroCasa);
		getchar();
		
		printf("Nacionalidade_________________________: ");
		fflush(stdin);
		fgets(pessoas[numPessoas].nacionalidade, sizeof(pessoas[numPessoas].nacionalidade), stdin);
		
		
		numPessoas++;
		}else{
			printf("Limite de pessoas cadastradas atingida!\n");
		}
		system("cls");
		
		menu();
		
		return 0;
	}

