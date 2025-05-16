//Crud do Materiais e medicamentos
#include <stdio.h>
#include <string.h>
#include "../Model/Fornecedor.h"
#include "../Model/Material.h"



/*
        typedef struct {
        int codigo;                     // Código único
        char descricao[100];           // Descrição
        char fabricante[100];          // Fabricante
        Fornecedor * fornecedor;        // Fornecedor
        float precoCusto;              // Preço de custo
        float precoVenda;              // Preço de venda
        int quantidadeEstoque;         // Quantidade em estoque
        int estoqueMinimo;             // Estoque mínimo
    } MaterialMedicamento;
    /*Anotações de desenvolvimento
    Montar uma lista só com o código  e o nome dos fornecedores 
    e pedir pra escolherem..
*/

//Lista dos fornecedores disponiveis com o nome e o código
void listarFornecedores(Fornecedor* fornecedores, int totalFornecedores) {
    printf("\n=== Fornecedores Cadastrados ===\n");
    for (int i = 0; i < totalFornecedores; i++) {
        printf("Código: %d - Nome Fantasia: %s\n", fornecedores[i].codigo, fornecedores[i].nomeFantasia);
    }
    printf("\n");
}

//Cadastro de materais
void cadastrarMaterial(MaterialMedicamento* lista, int* qtd, Fornecedor* fornecedores, int totalFornecedores) {
    printf("=== Cadastro de Material/Medicamento ===\n");

    lista[*qtd].codigo = qtd+1;
    
    printf("Nome: ");
    fgets(lista[*qtd].nome, 100, stdin);
    lista[*qtd].nome[strcspn(lista[*qtd].nome, "\n")] = '\0';

    printf("Descrição: ");
    fgets(lista[*qtd].descricao, 100, stdin);
    lista[*qtd].descricao[strcspn(lista[*qtd].descricao, "\n")] = '\0';

    printf("Fabricante: ");
    fgets(lista[*qtd].fabricante, 100, stdin);
    lista[*qtd].fabricante[strcspn(lista[*qtd].fabricante, "\n")] = '\0';

    //essa lista serve para evitar confusões sobre o código dos fornecedores
    listarFornecedores(fornecedores, totalFornecedores);
    int codigoFornecedor;
    printf("Digite o código do fornecedor: ");
    scanf("%d", &codigoFornecedor);

    // Atribui o código do fornecedor selecionado
    lista[*qtd].codigoFornecedor = codigoFornecedor;

    printf("Preço de Custo: ");
    scanf("%f", &lista[*qtd].precoCusto);

    printf("Preço de Venda: ");
    scanf("%f", &lista[*qtd].precoVenda);

    printf("Quantidade em Estoque: ");
    scanf("%d", &lista[*qtd].quantidadeEstoque);

    printf("Estoque Mínimo: ");
    scanf("%d", &lista[*qtd].estoqueMinimo);

    getchar(); // limpa buffer do scanf
    (*qtd)++;
}

//Atualizar Materiais 
void atualizarMaterial(MaterialMedicamento* lista, int qtd, Fornecedor* fornecedores, int totalFornecedores) {
    int codigo, i, encontrado = 0;
    printf("Digite o codigo do material/medicamento que deseja atualizar: ");
    scanf("%d", &codigo);
    getchar();

    for (i = 0; i < qtd; i++) {
        if (lista[i].codigo == codigo) {
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Material/Medicamento com codigo %d nao encontrado.\n", codigo);
        return;
    }

    int opcao;
    do {
        printf("\nAtualizar Material/Medicamento (Codigo %d)\n", codigo);
        printf("1. Nome\n");
        printf("2. Descricao\n");
        printf("3. Fabricante\n");
        printf("4. Codigo do Fornecedor\n");
        printf("5. Preco de Custo\n");
        printf("6. Preco de Venda\n");
        printf("7. Quantidade em Estoque\n");
        printf("8. Estoque Minimo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Novo nome: ");
                fgets(lista[i].nome, 100, stdin);
                lista[i].nome[strcspn(lista[i].descricao, "\n")] = '\0';
                break;
            case 2:
                printf("Nova descricao: ");
                fgets(lista[i].descricao, 100, stdin);
                lista[i].descricao[strcspn(lista[i].descricao, "\n")] = '\0';
                break;
            case 3:
                printf("Novo fabricante: ");
                fgets(lista[i].fabricante, 100, stdin);
                lista[i].fabricante[strcspn(lista[i].fabricante, "\n")] = '\0';
                break;
            case 4:
                //Lista com os fornecedores 
                listarFornecedores(fornecedores, totalFornecedores);
                int codigoFornecedor;
                printf("Novo codigo do fornecedor: ");
                scanf("%d", &lista[i].codigoFornecedor);
                getchar();
                break;
            case 5:
                printf("Novo preco de custo: ");
                scanf("%f", &lista[i].precoCusto);
                getchar();
                break;
            case 6:
                printf("Novo preco de venda: ");
                scanf("%f", &lista[i].precoVenda);
                getchar();
                break;
            case 7:
                printf("Nova quantidade em estoque: ");
                scanf("%d", &lista[i].quantidadeEstoque);
                getchar();
                break;
            case 8:
                printf("Novo estoque minimo: ");
                scanf("%d", &lista[i].estoqueMinimo);
                getchar();
                break;
            case 0:
                printf("Saindo da atualizacao...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
}


//Lista de materiais ou medicamentos 
void listarMaterial(MaterialMedicamento* lista, int qtd) {
    if (qtd == 0) {
        printf("Nenhum Material/Medicamento cadastrado\n");
        return;
    }

    printf("Lista de Material/Medicamento \n");

    for (int i = 0; i < qtd; i++) {
        printf("Codigo: %d\n", lista[i].codigo);
        printf("Descricao: %s\n", lista[i].descricao);
        printf("Codigo do Fornecedor:\n", lista[i].codigoFornecedor);
        printf("Fabricante: %s\n", lista[i].fabricante);
        printf("Preco de Custo: %.2f\n", lista[i].precoCusto);
        printf("Preco de Venda: %.2f\n", lista[i].precoVenda);
        printf("Quantidade em Estoque: %d\n", lista[i].quantidadeEstoque);
        printf("Estoque Minimo: %d\n", lista[i].estoqueMinimo);
        printf("----------------------------------------\n");
    }
}

//Deletar materal ou medicamento
void excluirMaterial(MaterialMedicamento* lista, int* qtd, int codigo) {
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
        printf("Material/Medicamento com codigo %d excluido com sucesso!\n", codigo);
    } else {
        printf("Material/Medicamento com codigo %d nao encontrado.\n", codigo);
    }
}



