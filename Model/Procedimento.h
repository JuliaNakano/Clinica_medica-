#ifndef PROCEDIMENTO_H
#define PROCEDIMENTO_H

typedef struct {
    int codigo;                             // Código único
    char descricaoProcedimento[200];       // Descrição do procedimento
    float custo;                          // Custo do procedimento
    char tempoEstimado[30];              // Tempo estimado de realização (ex: "30 minutos")
    int codigoAmbienteMedico;           // Ambiente médico (ex: "Sala de cirurgia", "Ambulatório")
    int materiaisUtilizados [30];      // o valor desse int é um gambiarra desculpaaaa (criar um ponteiro dentro da struct 
    int qtdMateriaisUtilizados ;      // Medicamentos e materiais utilizados
} Pmedico;


// Dependências necessárias
#include <stdio.h>

// Funções do CRUD
void cadastrarProcedimento(Pmedico* lista, int* qtd,Amedico* ambiente,int total, MaterialMedicamento* material);
void listarProcedimento(Pmedico* lista, int *qtd );
void atualizarProcedimento(Pmedico* lista, int* qtd,Amedico* ambiente, int total, MaterialMedicamento* material);

void excluirProcedimento(Pmedico procedimento[], int* qtd, int codigo);



#endif