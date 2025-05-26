//CRUD de Profissionais da Saúde
#include <stdio.h>
#include <string.h>
#include "../Model/ProfissionalSaude.h"

/*
//Informações para Profissionais de saúde 
typedef struct {
    int codigo;                    // Código único
    char nomeCompleto[100];       // Nome completo
    char crm[20];                 // CRM ou registro equivalente
    char especialidade[50];       // Especialidade médica
    char cpf[15];                 // CPF (formato: 000.000.000-00)
    char telefones[2][20];        // Até 2 telefones
    char email[100];              // E-mail
} Psaude;
*/

//Cadastrar o Profissional
void cadastrarProfissional(Psaude* lista, int* qtd) {
    printf("=== Cadastro de Profissional da Saúde ===\n");

    lista[*qtd].codigo = *qtd + 1;

    printf("Nome Completo: ");
    fgets(lista[*qtd].nomeCompleto, 100, stdin);
    lista[*qtd].nomeCompleto[strcspn(lista[*qtd].nomeCompleto, "\n")] = '\0';

    printf("CRM: ");
    fgets(lista[*qtd].crm, 20, stdin);
    lista[*qtd].crm[strcspn(lista[*qtd].crm, "\n")] = '\0';

    printf("Especialidade: ");
    fgets(lista[*qtd].especialidade, 50, stdin);
    lista[*qtd].especialidade[strcspn(lista[*qtd].especialidade, "\n")] = '\0';

    printf("CPF: ");
    fgets(lista[*qtd].cpf, 15, stdin);
    lista[*qtd].cpf[strcspn(lista[*qtd].cpf, "\n")] = '\0';

    printf("Telefone %d: ");
    fgets(lista[*qtd].telefone, 20, stdin);
    lista[*qtd].telefone[strcspn(lista[*qtd].telefone, "\n")] = '\0';
    

    printf("Email: ");
    fgets(lista[*qtd].email, 100, stdin);
    lista[*qtd].email[strcspn(lista[*qtd].email, "\n")] = '\0';

    (*qtd)++;
}

//Atualizar o profissional
void atualizarProfissional(Psaude* lista, int qtd) {
    int codigo, i, encontrado = 0;
    printf("Digite o código do profissional que deseja atualizar: ");
    scanf("%d", &codigo);
    getchar(); // limpa o buffer

    for (i = 0; i < qtd; i++) {
        if (lista[i].codigo == codigo) {
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Profissional com código %d não encontrado.\n", codigo);
        return;
    }

    int opcao;
    do {
        printf("\n=== Atualizar Profissional (Código %d) ===\n", codigo);
        printf("1. Nome Completo\n");
        printf("2. CRM\n");
        printf("3. Especialidade\n");
        printf("4. CPF\n");
        printf("5. Telefone\n");
        printf("6. Email\n");
        printf("0. Sair da atualização\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Novo Nome Completo: ");
                fgets(lista[i].nomeCompleto, 100, stdin);
                lista[i].nomeCompleto[strcspn(lista[i].nomeCompleto, "\n")] = '\0';
                break;
            case 2:
                printf("Novo CRM: ");
                fgets(lista[i].crm, 20, stdin);
                lista[i].crm[strcspn(lista[i].crm, "\n")] = '\0';
                break;
            case 3:
                printf("Nova Especialidade: ");
                fgets(lista[i].especialidade, 50, stdin);
                lista[i].especialidade[strcspn(lista[i].especialidade, "\n")] = '\0';
                break;
            case 4:
                printf("Novo CPF: ");
                fgets(lista[i].cpf, 15, stdin);
                lista[i].cpf[strcspn(lista[i].cpf, "\n")] = '\0';
                break;
            case 5:
                
                printf("Novo Telefone:  ");
                fgets(lista[i].telefone, 20, stdin);
                lista[i].telefone[strcspn(lista[i].telefone, "\n")] = '\0';
                
                break;
            case 6:
                printf("Novo Email: ");
                fgets(lista[i].email, 100, stdin);
                lista[i].email[strcspn(lista[i].email, "\n")] = '\0';
                break;
            case 0:
                printf("Saindo da atualização...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);
}

//Litar Profissionais 
void listarProfissionais(Psaude* lista, int qtd) {
    if (qtd == 0) {
        printf("Nenhum profissional cadastrado.\n");
        return;
    }

    printf("\n=== Lista de Profissionais da Saúde ===\n");

    for (int i = 0; i < qtd; i++) {
        printf("Profissional: %s\n", lista[i].nomeCompleto);
        printf("  Código: %d\n", lista[i].codigo);
        printf("  CRM: %s\n", lista[i].crm);
        printf("  Especialidade: %s\n", lista[i].especialidade);
        printf("  CPF: %s\n", lista[i].cpf);
        printf("  Telefone: %s, %s\n", lista[i].telefone, lista[i].telefone);
        printf("  Email: %s\n", lista[i].email);
        printf("------------------------------------------\n");
    }
}

//Deletar Profissional
void excluirProfissional(Psaude* lista, int* qtd, int codigo) {
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
        printf("O profissional com código %d foi excluído com sucesso!\n", codigo);
    } else {
        printf("O profissional com código %d não foi encontrado!\n", codigo);
    }
}
