#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int editar() {
	
	system("cls");
	
	int indice_pessoa;
	
	printf("Qual o numero do seu cadastro? (1 a %d)\n", numPessoas);
	scanf("%d", &indice_pessoa);
	
	if (indice_pessoa < 1 || indice_pessoa > numPessoas) {
        printf("Indice invalido! Pressione qualquer tecla para continuar...");
        getch();
        return;
    }
    
    indice_pessoa--;
	
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
			printf("O nome que esta eh: %s\n", pessoas[indice_pessoa].nome);
			printf("Digite o novo nome: ");
			fflush(stdin);
			fgets(pessoas[indice_pessoa].nome, sizeof(pessoas[indice_pessoa].nome), stdin);
		break;
		case 2:
			printf("A idade que esta eh: %d\n", pessoas[indice_pessoa].idade);
			printf("Digite a nova idade: ");
			scanf("%d", &pessoas[indice_pessoa].idade);
			getchar();
		break;
		case 3:
			printf("O telefone que esta eh: %d\n", pessoas[indice_pessoa].telefone);
			printf("Digite o novo telefone: ");
			scanf("%d", &pessoas[indice_pessoa].telefone);
			getchar();
		break;
		case 4:
			printf("O cpf que esta eh: %d\n", pessoas[indice_pessoa].cpf);
			printf("Digite o novo cpf: ");
			scanf("%d", &pessoas[indice_pessoa].cpf);
			getchar();
		break;
		case 5:
			printf("O email que esta eh: %s\n", pessoas[indice_pessoa].email);
			printf("Digite o novo email: ");
			fflush;
			fgets(pessoas[indice_pessoa].email, sizeof(pessoas[indice_pessoa].email), stdin);
		break;
		case 6:
			printf("O estado civil que esta eh: %s\n", pessoas[indice_pessoa].estCivil);
			printf("Digite o novo estado civil: ");
			fflush;
			fgets(pessoas[indice_pessoa].estCivil, sizeof(pessoas[indice_pessoa].estCivil), stdin);
		break;
		case 7:
			printf("O cep que esta eh: %d\n", pessoas[indice_pessoa].cep);
			printf("Digite o novo cep: ");
			scanf("%d", &pessoas[indice_pessoa].cep);
			getchar();
		break;
		case 8:
			printf("O endereco que esta eh: %s\n", pessoas[indice_pessoa].endereco);
			printf("Digite o novo endereco: ");
			fflush;
			fgets(pessoas[indice_pessoa].endereco, sizeof(pessoas[indice_pessoa].endereco), stdin);
		break;
		case 9:
			printf("O numero da casa que esta eh: %d\n", pessoas[indice_pessoa].numeroCasa);
			printf("Digite o novo numero da casa: ");
			scanf("%d", &pessoas[indice_pessoa].numeroCasa);
			getchar();
		break;
		case 10:
			printf("A nacionalidade que esta eh: %s\n", pessoas[indice_pessoa].nacionalidade);
			printf("Digite a nova nacionalidade: ");
			fflush;
			fgets(pessoas[indice_pessoa].nacionalidade, sizeof(pessoas[indice_pessoa].nacionalidade), stdin);
		break;	
			
			} 
		
		system("cls");
			
	
	return 0;
}

