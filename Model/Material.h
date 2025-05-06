
#ifndef MATERIAL_H
#define MATERIAL_H

#include "../Controller/Material.c"
#include "estrutura.h"

// Dependências necessárias
#include <stdio.h>

// Funções do CRUD

void cadastrarMaterial(MaterialMedicamento* lista, int* qtd, Fornecedor* fornecedores, int totalFornecedores);
void listarMaterial(MaterialMedicamento* lista, int* qtd);
void atualizarMaterial(MaterialMedicamento* lista, int* qtd, Fornecedor* fornecedores, int totalFornecedores);

void excluirMaterial(MaterialMedicamento material[], int* qtd, int codigo);



#endif