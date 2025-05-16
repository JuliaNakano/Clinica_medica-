
#ifndef MATERIAL_H
#define MATERIAL_H




// Dependências necessárias
#include <stdio.h>

// Funções do CRUD

typedef struct {
    int codigo;                     // Código único
    char nome [100];                // ex pinça retorcida
    char descricao[100];           // Descrição
    char fabricante[100];          // Fabricante
    int codigoFornecedor;       // Fornecedor...
    float precoCusto;              // Preço de custo
    float precoVenda;              // Preço de venda
    int quantidadeEstoque;         // Quantidade em estoque
    int estoqueMinimo;             // Estoque mínimo
} MaterialMedicamento;

void cadastrarMaterial(MaterialMedicamento* lista, int* qtd, Fornecedor* fornecedores, int totalFornecedores);
void listarMaterial(MaterialMedicamento* lista, int* qtd);
void atualizarMaterial(MaterialMedicamento* lista, int* qtd, Fornecedor* fornecedores, int totalFornecedores);

void excluirMaterial(MaterialMedicamento material[], int* qtd, int codigo);



#endif