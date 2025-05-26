
#ifndef AMBIENTE_H
#define AMBIENTE_H



// Dependências necessárias
#include <stdio.h>

//Ambientes medicos
typedef struct {
    int codigo;                      // Código único
    char nome [100];                        // ex: Sala 14 
    char descricaoProcedimento[200]; //Descriçãodo procedimento
} Amedico;

// Funções do CRUD
void cadastrarAmbiente(Amedico* lista, int* qtd);

void listarAmbiente(Amedico* lista, int* qtd);
void atualizarAmbiente(Amedico* lista, int* qtd);
void excluirAmbiente(Amedico amedico[], int* quantidade, int codigo);


#endif