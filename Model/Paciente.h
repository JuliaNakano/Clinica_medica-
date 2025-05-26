
#ifndef PACIENTE_H
#define PACIENTE_H



// Dependências necessárias
#include <stdio.h>


typedef struct {
    int codigo;                    // Código único
    char nomeCompleto[100];       // Nome completo
    char cpf[15];                 // CPF (formato: 000.000.000-00)
    
    char endereco[200]; //Usando o endereço
    char telefone[20];      
    char dataNascimento[11];      // Formato: DD/MM/AAAA
    char historicoMedico[1000];    // Ex: alergias, doenças crônicas
} Paciente;

// Funções do CRUD
void cadastrarPaciente(Paciente* lista, int* qtd);

void listarPaciente(Paciente* lista, int* qtd);
void atualizarPaciente(Paciente* lista, int* qtd);

void excluirPaciente(Paciente paciente[], int* qtd, int codigo);



#endif // FORNECEDOR_H