#include <stdio.h>
#include <stdlib.h>
#include "cadastrar.c"
#include "editar.c"
	
	// Main, arquivo que vai conter o Menu com as opções
void intro();
void menu();
	
int main(int argc, char *argv[]) {
		
				
	menu();
		
	return 0;
} // final da função main
void intro(){
		
		printf("Seja bem vindo, esta eh a area de menu, em que posso ajudar?\n\n");
		
		printf("Escolha umas das opcoes a seguir!\n");
		printf("Digite 1 para cadastrar-se.\n");
		printf("Digite 2 para editar seu cadastro.\n");
		printf("Digite 3 para listar todos os cadastros.\n");
		printf("Digite 4 para excluir um cadastro.\n");
		printf("Difite 0 para encerrar.\n");
		printf("Digite aqui a opcao escolhida:");
		
} // final da função textos
void menu(){
		
		int opcao;
		
		
		while(1){
		
			intro();	
			scanf("%d", &opcao);
			getchar();
			
			if(opcao == 0){
				
				printf("Ok, iremos encerrar a sessao!\n\n");
				break;
				}else if(opcao < 1 || opcao > 4){
				
				printf("Opcao invalida, digite novamente!\n");	
				
				}else{	
				
			switch(opcao){
				case 1:
					system("cls");
					printf("A opcao que voce selecionou foi 1.\n\n");
					printf("Vamos fazer seu cadastro, um momento.");
					int cad = cadastro();
				break;
				case 2:
					system("cls");
					printf("A opcao que voce selecionou foi 2.\n\n");
					printf("Vamos editar seu cadastro, um momento.");
					int edit = editar();
				break;
				case 3:
					system("cls");
					printf("A opcao que voce selecionou foi 3.\n\n");
					printf("Vamos todos os cadastros, um momento.");
					
				break;
				case 4:
					system("cls");
					printf("A opcao que voce selecionou foi 4.\n\n");
					printf("Vamos excluir seu cadastro, um momento.");
					
				break;
				
			}
		}
		system("cls");
	}
			
	} // final da função menu
