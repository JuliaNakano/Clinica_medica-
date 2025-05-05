//Crud do funcionario 
#include <stdio.h>
#include <string.h>
#include "../Model/estrutura.h"



/*
typedef struct {
    int codigo;                      // Código único
    char nomeFantasia[100];         // Nome fantasia
    char razaoSocial[100];          // Razão social
    char inscricaoEstadual[30];     // Inscrição estadual
    char cnpj[20];                  // CNPJ (formato: 00.000.000/0000-00)
    Endereco endereco;              //Usando o endereço
    char telefone[11] ;          // Até 2 telefones
    char email[100];                // E-mail
} Fornecedor;

*/

//Função de cadastro de fornecedor 
void cadastrarFornecedor(Fornecedor* lista, int* qtd) {
    printf("=== Cadastro de Fornecedor ===\n");

    lista[*qtd].codigo = *qtd + 1; // ID auto-incrementado começando de 1

    printf("Nome Fantasia : ");
    fgets(lista[*qtd].nomeFantasia, 100, stdin);
    lista[*qtd].nomeFantasia[strcspn(lista[*qtd].nomeFantasia, "\n")] = '\0';

    printf("Razao Social: ");
    fgets(lista[*qtd].razaoSocial, 100, stdin);
    lista[*qtd].razaoSocial[strcspn(lista[*qtd].razaoSocial, "\n")] = '\0';

    printf("Inscricao Estadual: ");
    fgets(lista[*qtd].inscricaoEstadual, 30, stdin);
    lista[*qtd].inscricaoEstadual[strcspn(lista[*qtd].inscricaoEstadual, "\n")] = '\0';

    printf("CNPJ: ");
    fgets(lista[*qtd].cnpj, 20, stdin);
    lista[*qtd].cnpj[strcspn(lista[*qtd].cnpj, "\n")] = '\0';
    // Analisar se realmente vale a pena manter uma parte para enedereço realmente
    // ou manter como um campo unico, pela simplicidade do trabalho
    
    printf("Endereco completo: ");
    fgets(lista[*qtd].endereco, 200, stdin);
    lista[*qtd].endereco[strcspn(lista[*qtd].endereco, "\n")] = '\0';

   /* // Endereço
    printf("Rua: ");
    fgets(lista[*qtd].endereco.rua, 100, stdin);
    lista[*qtd].endereco.rua[strcspn(lista[*qtd].endereco.rua, "\n")] = '\0';

    printf("Número: ");
    fgets(lista[*qtd].endereco.numero, 10, stdin);
    lista[*qtd].endereco.numero[strcspn(lista[*qtd].endereco.numero, "\n")] = '\0';

    printf("Bairro: ");
    fgets(lista[*qtd].endereco.bairro, 50, stdin);
    lista[*qtd].endereco.bairro[strcspn(lista[*qtd].endereco.bairro, "\n")] = '\0';

    printf("Cidade: ");
    fgets(lista[*qtd].endereco.cidade, 50, stdin);
    lista[*qtd].endereco.cidade[strcspn(lista[*qtd].endereco.cidade, "\n")] = '\0';

    printf("Estado (UF): ");
    fgets(lista[*qtd].endereco.estado, 3, stdin);
    lista[*qtd].endereco.estado[strcspn(lista[*qtd].endereco.estado, "\n")] = '\0';

    printf("CEP: ");
    fgets(lista[*qtd].endereco.cep, 10, stdin);
    lista[*qtd].endereco.cep[strcspn(lista[*qtd].endereco.cep, "\n")] = '\0';
*/
    printf("Telefone: ");
    fgets(lista[*qtd].telefone, 20, stdin);
    lista[*qtd].telefone[strcspn(lista[*qtd].telefone, "\n")] = '\0';

    printf("Email: ");
    fgets(lista[*qtd].email, 100, stdin);
    lista[*qtd].email[strcspn(lista[*qtd].email, "\n")] = '\0';

    (*qtd)++; // Avança o ponteiro (quantidade de fornecedores)

    printf("\n---------------------------------------");
    printf("\nFornecedor cadastrado com sucesso!\n ");
    printf("---------------------------------------");
}

//Função update fornecedor 
void atualizarFornecedor(Fornecedor* lista, int qtd) {
    int codigo;
    printf("Digite o código do fornecedor que deseja atualizar: ");
    scanf("%d", &codigo);
    getchar(); // limpa o buffer do teclado

    //Procurando o id do fornecedor desejado, passando por todo o vetor
    int i, encontrado = 0;
    for (i = 0; i < qtd; i++) {
        if (lista[i].codigo == codigo) {
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Fornecedor com código %d não encontrado.\n", codigo);
        return;
    }

    int opcao;
    do {
        printf("\n=== Atualizar Fornecedor (Código %d) ===\n", codigo);
        printf("1. Nome Fantasia\n");
        printf("2. Razão Social\n");
        printf("3. Inscricao Estadual\n");
        printf("4. CNPJ\n");
        printf("5. Endereco");
        printf("6. Telefone\n");
        printf("7. Email\n");
        printf("0. Sair da atualizacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpa o buffer

        switch (opcao) {
            case 1:
                printf("Novo Nome Fantasia: ");
                fgets(lista[i].nomeFantasia, 100, stdin);
                lista[i].nomeFantasia[strcspn(lista[i].nomeFantasia, "\n")] = '\0';
                break;
            case 2:
                printf("Nova Razão Social: ");
                fgets(lista[i].razaoSocial, 100, stdin);
                lista[i].razaoSocial[strcspn(lista[i].razaoSocial, "\n")] = '\0';
                break;
            case 3:
                printf("Nova Inscricao Estadual: ");
                fgets(lista[i].inscricaoEstadual, 30, stdin);
                lista[i].inscricaoEstadual[strcspn(lista[i].inscricaoEstadual, "\n")] = '\0';
                break;
            case 4:
                printf("Novo CNPJ: ");
                fgets(lista[i].cnpj, 20, stdin);
                lista[i].cnpj[strcspn(lista[i].cnpj, "\n")] = '\0';
                break;

            case 5:

                printf("Novo endereco : ");
                fgets(lista[i].endereco, 200, stdin);
                lista[i].endereco[strcspn(lista[i].endereco, "\n")] = '\0';
                break;

            case 6:
                printf("Novo Telefone: ");
                fgets(lista[i].telefone, 11, stdin);
                lista[i].telefone[strcspn(lista[i].telefone, "\n")] = '\0';
                break;
            case 7:
                printf("Novo Email: ");
                fgets(lista[i].email, 100, stdin);
                lista[i].email[strcspn(lista[i].email, "\n")] = '\0';
                break;
            case 0:
                printf("Saindo da atualizacao..\n");
                break;
            default:
                printf("Opcao inválida. Tente novamente.\n");
        }

    } while (opcao != 0);
}



//Função de listar fornecedor 
void listarFornecedores(Fornecedor* lista, int qtd) {
    if (qtd == 0) {
        printf("Nenhum fornecedor cadastrado.\n");
        return;
    }

    printf("\n=== Lista de Fornecedores ===\n");

    for (int i = 0; i < qtd; i++) {
        printf("Fornecedor %d:\n", i + 1);
        printf("  Codigo: %d\n", lista[i].codigo);
        printf("  Nome Fantasia: %s\n", lista[i].nomeFantasia);
        printf("  Razao Social: %s\n", lista[i].razaoSocial);
        printf("  Inscricao Estadual: %s\n", lista[i].inscricaoEstadual);
        printf("  CNPJ: %s\n", lista[i].cnpj);
        printf("  Endereco: %s\n", lista[i].endereco);
        printf("  Telefone: %s\n", lista[i].telefone);
        printf("  Email: %s\n", lista[i].email);

    }

}

//Função de deletar fornecedor 
void excluirFornecedor(Fornecedor* lista, int* qtd, int codigo) {
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
        printf("Fornecedor com código %d excluído com sucesso.\n", codigo);
    } else {
        printf("Fornecedor com código %d não encontrado.\n", codigo);
    }
}

//testando as funções do trabalho

/*
int main() {
    Fornecedor fornecedores[100]; // Vetor de fornecedores
    int quantidade = 0;
    int opcao;
    int codigo;

    do {
        printf("\n===== Menu Fornecedores =====\n");
        printf("1. Cadastrar fornecedor\n");
        printf("2. Listar fornecedores\n");
        printf("3. Atualizar fornecedor\n");
        printf("4. Excluir fornecedor\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa buffer

        switch (opcao) {
            case 1:
                cadastrarFornecedor(fornecedores, &quantidade);
                break;
            case 2:
                listarFornecedores(fornecedores, quantidade);
                break;
            case 3:
                atualizarFornecedor(fornecedores, quantidade);
                break;
            case 4:
                printf("Digite o código do fornecedor a ser excluído: ");
                scanf("%d", &codigo);
                getchar(); // Limpa buffer
                excluirFornecedor(fornecedores, &quantidade, codigo);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

*/
