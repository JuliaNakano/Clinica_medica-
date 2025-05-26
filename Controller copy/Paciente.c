//CRUD de paciente 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Model/Paciente.h"



/*  
// Informações do pacientes
typedef struct {
    int codigo;5                    // Código único
    char nomeCompleto[100];       // Nome completo
    char cpf[15];                 // CPF (formato: 000.000.000-00)
    
    char endereco[200]; //Usando o endereço
    char telefones[20];        // Até 32telefones
    char dataNascimento[11];      // Formato: DD/MM/AAAA
    char historicoMedico[500];    // Ex: alergias, doenças crônicas
} Paciente;

*/
//Cadastro de pacientes 
void cradastrarPaciente(Paciente* lista, int*qtd){

    printf("=== Cadastro de Paciente ===\n");

    lista[*qtd].codigo = *qtd + 1; // ID auto-incrementado começando de 1

    printf("Nome Completo : ");
    fgets(lista[*qtd].nomeCompleto, 100, stdin);
    lista[*qtd].nomeCompleto[strcspn(lista[*qtd].nomeCompleto, "\n")] = '\0';

    printf("CPF: ");
    fgets(lista[*qtd].cpf, 15, stdin);
    lista[*qtd].cpf[strcspn(lista[*qtd].cpf, "\n")] = '\0';

    printf("Endereco Completo: ");
    fgets(lista[*qtd].endereco, 200, stdin);
    lista[*qtd].endereco[strcspn(lista[*qtd].endereco, "\n")] = '\0';

    printf("Telefone: ");
    fgets(lista[*qtd].telefone, 20, stdin);
    lista[*qtd].telefone[strcspn(lista[*qtd].telefone, "\n")] = '\0';

    printf("Data de Nascimento: ");
    fgets(lista[*qtd].dataNascimento, 11, stdin);
    lista[*qtd].dataNascimento[strcspn(lista[*qtd].dataNascimento, "\n")] = '\0'; 

    printf("Historico Medico: ");
    fgets(lista[*qtd].historicoMedico, 1000, stdin);
    lista[*qtd].historicoMedico[strcspn(lista[*qtd].historicoMedico, "\n")] = '\0'; 
}

//Atualizar de pacientes 
void atualizarPaciente(Paciente* lista, int*qtd){
    int codigo;
    printf("Digite o codigo do paciente que deseja atualizar: ");
    scanf("%d", &codigo);
    getchar(); // limpa o buffer do teclado

    //Procurando o id do paciente desejado, passando por todo o vetor
    int i, encontrado = 0;
    for (i = 0; i < *qtd; i++) {
        if (lista[i].codigo == codigo) {
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Paciente com codigo %d nao encontrado.\n", codigo);
        return;
    }

    int opcao;
    do {
        printf("\n=== Atualizar Paciente com o (Codigo %d) ===\n", codigo);
        printf("1. Nome Completo\n");
        printf("2. CPF\n");
        printf("3. Endereco\n");
        printf("4. Telefone\n");
        printf("5. Data de Nascimento");
        printf("6. Historico Medico\n");
        printf("0. Sair da atualizacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpa o buffer

        switch (opcao) {
            case 1:
                printf("Novo Nome Completo: ");
                fgets(lista[i].nomeCompleto, 100, stdin);
                lista[i].nomeCompleto[strcspn(lista[i].nomeCompleto, "\n")] = '\0';
                break;
            case 2:
                printf("Novo CPF: ");
                fgets(lista[i].cpf, 15, stdin);
                lista[i].cpf[strcspn(lista[i].cpf, "\n")] = '\0';
                break;
            case 3:
                printf("Novo endereco : ");
                fgets(lista[i].endereco, 200, stdin);
                lista[i].endereco[strcspn(lista[i].endereco, "\n")] = '\0';
                break;

            case 4:
                printf("Novo Telefone: ");
                fgets(lista[i].telefone, 11, stdin);
                lista[i].telefone[strcspn(lista[i].telefone, "\n")] = '\0';
                break;

            case 5:
                printf("Nova Data de Nascimento: ");
                fgets(lista[i].dataNascimento, 11, stdin);
                lista[i].dataNascimento[strcspn(lista[i].dataNascimento, "\n")] = '\0';
                break;
                
            case 6:
                printf("Novo Telefone: ");
                fgets(lista[i].historicoMedico, 1000, stdin);
                lista[i].historicoMedico[strcspn(lista[i].historicoMedico, "\n")] = '\0';
                break;
           ;
            case 0:
                printf("Saindo da atualizacao..\n");
                break;
            default:
                printf("Opcao inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

}

//Listar de pacientes 
void listarPaciente(Paciente* lista, int* qtd) {
    if (qtd == 0) {
        printf("Nenhum paciente cadastrado.\n");
        return;
    }

    printf("\n");
    printf("\n=== Lista de Paciente ===\n");

    for (int i = 0; i < *qtd; i++) {
        printf("Paciente %s:\n",lista[i].nomeCompleto);
        printf("  Codigo: %d\n", lista[i].codigo);
        printf("  CPF: %s\n", lista[i].cpf);
        printf("  Endereco: %s\n", lista[i].endereco);
        printf("  Telefone: %s\n", lista[i].telefone);
        printf("  Data de Nascimento: %s\n", lista[i].dataNascimento);
        printf("  Histórico Médico: %s\n", lista[i].historicoMedico);
        printf("------------------------------------------\n");

    }
    printf("\n");

}

//Excluir de pacientes 
void excluirPaciente(Paciente* lista, int* qtd, int codigo) {
    int i, encontrado = 0;

    for (i = 0; i < *qtd; i++) {
        if (lista[i].codigo == codigo) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        for (int j = i; j < *qtd - 1; j++) {
            lista[j] = lista[j + 1];
        }
        (*qtd)--;
        printf("O Paciente com codigo %d foi excluído com sucesso!\n", codigo);
    } else {
        printf("O Paciente com codigo %d nao foi encontrado!\n", codigo);
    }
}
