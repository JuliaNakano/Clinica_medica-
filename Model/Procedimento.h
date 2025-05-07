#ifndef PROCEDIMENTO_H
#define PROCEDIMENTO_H

#include "../Controller/Procedimento.c"
#include "estrutura.h"

// Dependências necessárias
#include <stdio.h>

// Funções do CRUD
void cadastrarProcedimento(Pmedico* lista, int* qtd,int total, MaterialMedicamento* material);
void listarProcedimento(Pmedico* lista, int* qtd);
void atualizarPaciente(Pmedico* lista, int* qtd, int total, MaterialMedicamento* material);

void excluirProcedimento(Pmedico procedimento[], int* qtd, int codigo);



#endif