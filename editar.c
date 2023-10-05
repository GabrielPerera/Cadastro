#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int editar() {
	
	
int opcao_edit;
		
	printf("Qual dos dados voce deseja editar?\n\n");
	
	printf("Digite 1 para Nome.\n");
	printf("Digite 2 para Idade.\n");
	printf("Digite 3 para Telefone.\n");
	printf("Digite 4 para CPF.\n");
	printf("Digite 5 para Email.\n");
	printf("Digite 6 para Estado Civil.\n");
	printf("Digite 7 para CEP.\n");
	printf("Digite 8 para Endereco.\n");
	printf("Digite 9 para Numero da casa.\n");
	printf("Digite 10 para Nacionalidade.\n");
	printf("Digite qualquer coisa para sair da edicao.\n");
	printf("Digite aqui: ");
	scanf("%d", &opcao_edit);
	getchar();
	
	switch(opcao_edit){
		case 1:
			printf("O nome que esta eh: %s\n", dados.nome);
			printf("Digite o novo nome: ");
			fflush(stdin);
			fgets(dados.nome, sizeof(dados.nome), stdin);
		break;
		case 2:
			printf("A idade que esta eh: %d\n", dados.idade);
			printf("Digite a nova idade: ");
			scanf("%d", &dados.idade);
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
			fflush;
			fgets(dados.email,sizeof(dados.email),stdin);
		break;
		case 6:
			printf("O estado civil que esta eh: %s\n", dados.estCivil);
			printf("Digite o novo estado civil: ");
			fflush;
			fgets(dados.estCivil,sizeof(dados.estCivil),stdin);
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
			fflush;
			fgets(dados.endereco,sizeof(dados.endereco),stdin);
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
			fflush;
			fgets(dados.nacionalidade,sizeof(dados.nacionalidade),stdin);
		break;	
			
			} 
		
		system("cls");	
	
	return 0;
}

