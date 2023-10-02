#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct informacoes{
	char nome[30]; // armazena o nome completo do usuario :)
	int cep; // armazena o cep do usuario :)
	char endereco[50]; // armazena o endereço do usuario :)
	unsigned char idade; // armazena a idade do usuario :)
	char email[30]; // armazena o email :)
	int cpf; // armazena o cpf :)
	char estCivil[10]; // armazena o estado civil :)
	char nacionalidade[10]; // armazena a nacionalidade :)
	int telefone; // armazena o numero do telefone 
	unsigned char numeroCasa; // armazena o numero da casa :)
}dados;

int main(int argc, char *argv[]) {
	
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
	
	printf("Endereço______________________: ");
	fflush(stdin);
	fgets(dados.endereco,50,stdin);
	
	printf("Numero da casa______________________: ");
	scanf("%c", &dados.numeroCasa);
	getchar();
	
	printf("Nacionalidade_________________________: ");
	fflush(stdin);
	fgets(dados.nacionalidade,10,stdin);
	
	return 0;
}
