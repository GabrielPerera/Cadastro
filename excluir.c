#include <stdio.h>
#include <stdlib.h>


int excluir() {
    system("cls");
    
    int y;
    
    if (numPessoas == 0) {
        printf("Nenhuma pessoa cadastrada.\n");
        return 0;
    }
    
    int numeroExcluir;
    printf("Digite o numero do cadastro que deseja excluir (1 a %d): ", numPessoas);
    scanf("%d", &numeroExcluir);
    
    if (numeroExcluir < 1 || numeroExcluir > numPessoas) {
        printf("Numero de cadastro invalido!\n");
        return 0;
    }
    
    numeroExcluir--; 
    
    
    for (y = numeroExcluir; y < numPessoas - 1; y++) {
        pessoas[y] = pessoas[y + 1];
    }
    
    numPessoas--; 
    
    printf("Cadastro excluido com sucesso!\n");
    
    return 0;
}

