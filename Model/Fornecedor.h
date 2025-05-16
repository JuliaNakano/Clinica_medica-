
#ifndef FORNECEDOR_H
#define FORNECEDOR_H



// Dependências necessárias
#include <stdio.h>

typedef struct {
    int codigo;                      // Código único
    char nomeFantasia[100];         // Nome fantasia
    char razaoSocial[100];          // Razão social
    char inscricaoEstadual[30];     // Inscrição estadual
    char cnpj[20];                  // CNPJ (formato: 00.000.000/0000-00)
    //Endereco endereco;              //Usando o endereço
    char endereco[200];
    char telefone[11] ;          // Telefone
    char email[100];                // E-mail
} Fornecedor;

// Funções do CRUD
void cadastrarFornecedor(Fornecedor* lista, int* qtd);
void listarFornecedor(Fornecedor* lista, int *qtd);
void atualizarFornecedor(Fornecedor* lista, int *qtd);
void excluirFornecedor(Fornecedor fornecedores[], int* quantidade, int codigo);


#endif // FORNECEDOR_H