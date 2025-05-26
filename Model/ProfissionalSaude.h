#ifndef PROFISSIONALSAUDE_H
#define PROFISSIONALSAUDE_H



// Dependências necessárias
#include <stdio.h>

typedef struct {
    int codigo;                    // Código único
    char nomeCompleto[100];       // Nome completo
    char crm[20];                 // CRM ou registro equivalente
    char especialidade[50];       // Especialidade médica
    char cpf[15];                 // CPF (formato: 000.000.000-00)
    char telefone[20];        
    char email[100];              // E-mail
} Psaude;


// Funções do CRUD
void cadastrarProfissional(Psaude* lista, int* qtd);
void listarProfissional(Psaude* lista, int* qtd);
void atualizarProfissional(Psaude* lista, int* qtd);

void excluirProfissional(Psaude profissional[], int* qtd, int codigo);

#endif 