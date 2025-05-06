
#ifndef AMBIENTE_H
#define AMBIENTE_H

#include "../Controller/Ambiente.c"
#include "estrutura.h"

// Dependências necessárias
#include <stdio.h>

// Funções do CRUD
void cadastrarAmbiente(Amedico* lista, int* qtd);
void listarAmbiente(Amedico* lista, int* qtd);
void atualizarAmbienter(Amedico* lista, int* qtd);
void excluirAmbiente(Amedico amedico[], int* quantidade, int codigo);


#endif