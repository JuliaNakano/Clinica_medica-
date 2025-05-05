
#ifndef PACIENTE_H
#define PACIENTE_H

#include "../Controller/Paciente.c"
#include "estrutura.h"

// Dependências necessárias
#include <stdio.h>

// Funções do CRUD
void cadastrarPaciente(Paciente* lista, int* qtd);
void listarPaciente(Paciente* lista, int* qtd);
void atualizarPaciente(Paciente* lista, int* qtd);

void excluirPaciente(Paciente paciente[], int* qtd, int codigo);



#endif // FORNECEDOR_H