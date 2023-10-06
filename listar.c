#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int listar() {
	
	int i;
	
	if (numPessoas == 0) {
        printf("Nenhuma pessoa cadastrada.\n");
        return;
    }else {
        printf("Lista de pessoas cadastradas:\n");

        for (i = 0; i < numPessoas; i++) {
            printf("Pessoa %d:\n", i + 1);
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Idade: %d\n", pessoas[i].idade);
            printf("Telefone: %d\n", pessoas[i].telefone);
            printf("CPF: %d\n", pessoas[i].cpf);
            printf("Email: %s\n", pessoas[i].email);
            printf("Estado Civil: %s\n", pessoas[i].estCivil);
            printf("CEP: %d\n", pessoas[i].cep);
            printf("Endereço: %s\n", pessoas[i].endereco);
            printf("Numero da casa: %d\n", pessoas[i].numeroCasa);
            printf("Nacionalidade: %s\n", pessoas[i].nacionalidade);
            printf("\n\n\n");
        }
    }

    fflush(stdin); 

    printf("Pressione qualquer tecla para retornar ao menu...\n");
    getch();
	
	return 0;
}
