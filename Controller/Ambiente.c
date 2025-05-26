//CRUD de ambiente medico
#include <stdio.h>
#include <string.h>
#include "../Model/Ambiente.h"


/* 
typedef struct {
    int codigo;                      // Código único
    char descricaoProcedimento[200]; //Descriçãodo procedimento
} Amedico;

*/

//Cadastrando ambiente 
void cadastrarAmbiente(Amedico* lista, int* qtd) {
    printf("=== Cadastro de Ambiente Médico ===\n");

    lista[*qtd].codigo = *qtd + 1;
    
    printf("Nome do Ambiente: ");
    fgets(lista[*qtd].nome, 100, stdin);
    lista[*qtd].nome[strcspn(lista[*qtd].nome, "\n")] = '\0';

    printf("Descrição do Procedimento: ");
    fgets(lista[*qtd].descricaoProcedimento, 200, stdin);
    lista[*qtd].descricaoProcedimento[strcspn(lista[*qtd].descricaoProcedimento, "\n")] = '\0';

    (*qtd)++;
}

//Atualizar ambiente médico
void atualizarAmbiente(Amedico* lista, int qtd) {
    int codigo, i, encontrado = 0;
    printf("Digite o código do ambiente que deseja atualizar: ");
    scanf("%d", &codigo);
    getchar(); // limpa o buffer

    for (i = 0; i < qtd; i++) {
        if (lista[i].codigo == codigo) {
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Ambiente com código %d não encontrado.\n", codigo);
        return;
    }

    int opcao;


    do
    {
        //cria um menu para novo nome do ambinte e descrição do procedimento
        intf("\nAtualizar o ambiente de   (Codigo %d)\n", codigo);
        printf("1. ANome do Ambiente\n");
        printf("2. Descrição do Procedimento\n");
        printf("3. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        getchar(); // limpa o buffer
        switch (opcao)
        {
            case 1:
            printf("Novo Nome do Ambiente: ");  
            fgets(lista[i].nome, 100, stdin);
            lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';
            break;
            case 2:
            printf("Nova Descrição do Procedimento: ");
            fgets(lista[i].descricaoProcedimento, 200, stdin);
            lista[i].descricaoProcedimento[strcspn(lista[i].descricaoProcedimento,"\n")] = '\0';
            break;
            case 3:
            printf("Saindo da atualizacao...\n");
            break;
            default:
            printf("Opção inválida. Tente novamente.\n");
            break;
            }



    } while (opcao=0);
    

    printf("Ambiente atualizado com sucesso.\n");
}

//Listar ambiente médico
void listarAmbientes(Amedico* lista, int qtd) {
    if (qtd == 0) {
        printf("Nenhum ambiente médico cadastrado.\n");
        return;
    }

    printf("\n=== Lista de Ambientes Médicos ===\n");

    for (int i = 0; i < qtd; i++) {
        printf("Código: %d\n", lista[i].codigo);
        printf("Nome do Ambiente: %s\n", lista[i].nome);
        printf("Descrição do Procedimento: %s\n", lista[i].descricaoProcedimento);
        printf("------------------------------------------\n");
    }
}


//Deletar ambiente médico
void excluirAmbiente(Amedico* lista, int* qtd, int codigo) {
    int i, encontrado = 0;

    for (i = 0; i < *qtd; i++) {
        if (lista[i].codigo == codigo) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        for (int j = i; j < *qtd - 1; j++) {
            lista[j] = lista[j + 1];
        }
        (*qtd)--;
        printf("O ambiente com código %d foi excluído com sucesso!\n", codigo);
    } else {
        printf("Ambiente com código %d não encontrado!\n", codigo);
    }
}



