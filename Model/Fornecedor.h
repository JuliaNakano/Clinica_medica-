
#ifndef FORNECEDOR_H
#define FORNECEDOR_H

#include "../Controller/Paciente.c"
#include "estrutura.h"

// Dependências necessárias
#include <stdio.h>

// Funções do CRUD
void cadastrarFornecedor(Fornecedor* lista, int* qtd);
void listarFornecedores(Fornecedor* lista, int qtd);
void atualizarFornecedor(Fornecedor* lista, int qtd);
void excluirFornecedor(Fornecedor fornecedores[], int* quantidade, int codigo);


#endif // FORNECEDOR_H