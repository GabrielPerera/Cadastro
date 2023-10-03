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

void editarCadastro();

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
	
	
	int acessa_edit;
	
	printf("Seu cadastro esta completo!\n\n");
	printf("Esta tudo correto ou deseja editar algo?");
	printf(" Digite 1 - sim e 2 - nao: ");
	scanf("%d", &acessa_edit);
	
	if(acessa_edit == 2){
				
				printf("Seu cadastro esta completo!\n\n");
				
				}else if(acessa_edit < 1 || acessa_edit > 2){
				
				printf("Opcao invalida, digite novamente!\n");	
				
				}else{
				editarCadastro();
		}
	
	return 0;
}

void editarCadastro(){
	
	int opcao_edit;
	
	while(1){
		
	
	if(opcao_edit == 0){
		printf("Ok, cadastro completo!\n\n");
		break;
	}else if(opcao_edit < 1 || opcao_edit > 10){
		printf("Opcao invalida, digite novamente!\n");
	}else{
	
	printf("Qual dos dados voce deseja editar?\n\n");
	
	printf("Digite 1 para Nome.\n");
	printf("Digite 2 para Idade.\n");
	printf("Digite 3 para Telefone.\n");
	printf("Digite 4 para CPF.\n");
	printf("Digite 5 para Email.\n");
	printf("Digite 6 para Estado Civil.\n");
	printf("Digite 7 para CEP.\n");
	printf("Digite 8 para Endereço.\n");
	printf("Digite 9 para Numero da casa.\n");
	printf("Digite 10 para Nacionalidade.\n");
	printf("Digite 0 para encerrar a edicao.\n");
	printf("Digite aqui: ");
	scanf("%d", &opcao_edit);
	getchar();
	
	switch(opcao_edit){
		case 1:
			printf("O nome que esta eh: %s\n", dados.nome);
			printf("Digite o novo nome: ");
			fgets(dados.nome,30,stdin);
		break;
		case 2:
			printf("A idade que esta eh: %c\n", dados.idade);
			printf("Digite a nova idade: ");
			scanf("%c", &dados.idade);
			getchar();
		break;
		case 3:
			printf("O telefone que esta eh: %d\n", dados.telefone);
			printf("Digite o novo telefone: ");
			scanf("%d", &dados.telefone);
			getchar();
		break;
		case 4:
			printf("O cpf que esta eh: %d\n", dados.cpf);
			printf("Digite o novo cpf: ");
			scanf("%d", &dados.cpf);
			getchar();
		break;
		case 5:
			printf("O email que esta eh: %s\n", dados.email);
			printf("Digite o novo email: ");
			fgets(dados.email,30,stdin);
		break;
		case 6:
			printf("O estado civil que esta eh: %s\n", dados.estCivil);
			printf("Digite o novo estado civil: ");
			fgets(dados.estCivil,10,stdin);
		break;
		case 7:
			printf("O cep que esta eh: ", dados.cep);
			printf("Digite o novo cep: ");
			scanf("%d", &dados.cep);
			getchar();
		break;
		case 8:
			printf("O endereco que esta eh: %s\n", dados.endereco);
			printf("Digite o novo endereco: ");
			fgets(dados.endereco,50,stdin);
		break;
		case 9:
			printf("O numero da casa que esta eh: %d\n", dados.numeroCasa);
			printf("Digite o novo numero da casa: ");
			scanf("%d", dados.numeroCasa);
			getchar();
		break;
		case 10:
			printf("A nacionalidade que esta eh: %s\n", dados.nacionalidade);
			printf("Digite a nova nacionalidade: ");
			fgets(dados.nacionalidade,10,stdin);
		break;	
			
			} 
		} 
		system("cls");
	} 
	
}
