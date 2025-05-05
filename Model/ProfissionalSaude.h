#ifndef PROFISSIONALSAUDE_H
#define PROFISSIONALSAUDE_H

#include "../Controller/ProfissionalSaude.c"
#include "estrutura.h"

// Dependências necessárias
#include <stdio.h>

// Funções do CRUD
void cadastrarProfissional(Psaude* lista, int* qtd);
void listarProfissional(Psaude* lista, int* qtd);
void atualizarProfissional(Psaude* lista, int* qtd);

void excluirProfissional(Psaude profissional[], int* qtd, int codigo);

#endif 