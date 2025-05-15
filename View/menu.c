#include <stdio.h>
#include "../Model/estrutura.h"
#include "../Model/Paciente.h"
#include "../Model/Fornecedor.h"
#include "../Model/Ambiente.h"
#include "../Model/Material.h"
#include "../Model/Procedimento.h"
#include "../Model/ProfissionalSaude.h"


//Este corresponde aos menus do sistema
void menuPrincipal() {
    printf("Sistema Clinica Medica\n \n ");
    printf("\n--------------------------------\n");
    printf("|             MENU                |\n");
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    printf("| |1| Pacientes                  |\n");
    printf("---------------------------------\n");
    printf("| |2| Proficionais da Saude      |\n ");
    printf("---------------------------------\n");
    printf("| |3| Fornecedores               |\n ");
    printf("---------------------------------\n");
    printf("| |4| Ambientes Medicos          |\n");
    printf("---------------------------------\n");
    printf("| |5| Medicamentos e Materiais   |\n ");
    printf("---------------------------------\n");
    printf("| |6| Procedimentos Medicos      |\n");
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    printf("| |0| ENCERRAR                  |\n");
    printf("---------------------------------\n");

}

int menuAmbienteMedico(int opcao){
    
    switch (opcao)
    {
    case 1: 
        void cadastrarAmbiente(lista,qtd);
        break;
    case 2:
        void atualizarAmbiente(lista,qtd);
        break;
    case 3:
        void listarAmbientes(lista,qtd);
        break;
    case 4:
        void excluirAmbiente(lista,qtd);
        break;
    case 5:
       void menuPrincipal();
        break;                  
    default:
        printf("Opção inválida!\n");
        break;
    }  
return 0;
}

int menuFornecedor(int opcao){
    
    switch (opcao)
    {
    case 1: 
        void cadastrarFornecedor(lista,qtd);
        break;
    case 2:
        void atualizarFornecedor(lista,qtd);
        break;
    case 3:
        void listarFornecedor(lista,qtd);
        break;
    case 4:
        void excluirFornecedor(lista,qtd);
        break;
    case 5:
       void menuPrincipal();
        break;                  
    default:
        printf("Opção inválida!\n");
        break;
    }
return 0;
}

int menuMaterialMedicamento(int opcao){
    
    switch (opcao)
    {
    case 1: 
        void cadastrarMaterial(lista,qtd);
        break;
    case 2:
        void atualizarMaterial(lista,qtd);
        break;
    case 3:
        void listarMaterial(lista,qtd);
        break;
    case 4:
        void excluirMaterial(lista,qtd);
        break;
    case 5:
       void menuPrincipal();
        break;                  
    default:
        printf("Opção inválida!\n");
        break;
    }
return 0;
}

int menuPaciente(int opcao){
    
    switch (opcao)
    {
    case 1: 
        void cadastrarPaciente(lista,qtd);
        break;
    case 2:
        void atualizarPaciente(lista,qtd);
        break;
    case 3:
        void listarPaciente(lista,qtd);
        break;
    case 4:
        void excluirPaciente(lista,qtd);
        break;
    case 5:
       void menuPrincipal();
        break;                  
    default:
        printf("Opção inválida!\n");
        break;
    }
return 0;
}

int menuProcedimentoMedico(int opcao){
    
    switch (opcao)
    {
    case 1: 
        void cadastrarProcedimento(lista,qtd);
        break;
    case 2:
        void atualizarProcedimento(lista,qtd);
        break;
    case 3:
        void listarProcedimento(lista,qtd);
        break;
    case 4:
        void excluirProcedimento(lista,qtd);
        break;
    case 5:
       void menuPrincipal();
        break;                  
    default:
        printf("Opção inválida!\n");
        break;
    }   
return 0;
}

int menuProfissionalSaude(int opcao){
    
    switch (opcao)
    {
    case 1: 
        void cadastrarProfissional(lista,qtd);
        break;
    case 2:
        void atualizarProfissional(lista,qtd);
        break;
    case 3:
        void listarProfissional(lista,qtd);
        break;
    case 4:
        void excluirProfissional(lista,qtd);
        break;
    case 5:
       void menuPrincipal();
        break;                  
    default:
        printf("Opção inválida!\n");
        break;
    }
return 0;
}





