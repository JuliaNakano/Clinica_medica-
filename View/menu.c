#include <stdio.h>
#include "../Model/Paciente.h"
#include "../Model/Fornecedor.h"
#include "../Model/Ambiente.h"
#include "../Model/Material.h"
#include "../Model/Procedimento.h"
#include "../Model/ProfissionalSaude.h"

Amedico* listaAtendimento;
Fornecedor* listaFornecedores;
MaterialMedicamento* listaMaterial;
Paciente* listaPaciente;
Pmedico* listaProcedimento;
Psaude* listaProficional;

int* qtd;

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
        cadastrarAmbiente(listaAtendimento,qtd);
        break;
    case 2:
        atualizarAmbiente(listaAtendimento,qtd);
        break;
    case 3:
        listarAmbiente(listaAtendimento,qtd);
        break;
    case 4: //medico* lista, int* qtd, int codigo
        excluirAmbiente(listaAtendimento,qtd, 1);
        break;
    case 5:
       menuPrincipal();
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
        cadastrarFornecedor(listaFornecedores,qtd);
        break;
    case 2:
        atualizarFornecedor(listaFornecedores,qtd);
        break;
    case 3:
        listarFornecedor(listaFornecedores,qtd);
        break;
    case 4:
        excluirFornecedor(listaFornecedores,qtd,1);
        break;
    case 5:
       menuPrincipal();
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
        cadastrarMaterial(listaMaterial,qtd,listaFornecedores,1);
        break;
    case 2:
        atualizarMaterial(listaMaterial,qtd,listaFornecedores,1);
        break;
    case 3:
        listarMaterial(listaMaterial,qtd);
        break;
    case 4:
        excluirMaterial(listaMaterial,qtd,1);
        break;
    case 5:
        menuPrincipal();
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
        cadastrarPaciente(listaPaciente,qtd);
        break;
    case 2:
        atualizarPaciente(listaPaciente,qtd);
        break;
    case 3:
        listarPaciente(listaPaciente,qtd);
        break;
    case 4:
        excluirPaciente(listaPaciente,qtd,1);
        break;
    case 5:
        menuPrincipal();
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
        cadastrarProcedimento(listaProcedimento,qtd, listaAtendimento,1,listaMaterial);
        break;
    case 2:
        atualizarProcedimento(listaProcedimento,qtd, listaAtendimento, 1, listaMaterial);
        break;
    case 3:
        listarProcedimento(listaProcedimento,qtd);
        break;
    case 4:
        excluirProcedimento(listaProcedimento,qtd, 1);
        break;
    case 5:
        menuPrincipal();
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
        cadastrarProfissional(listaProficional,qtd);
        break;
    case 2:
        atualizarProfissional(listaProficional,qtd);
        break;
    case 3:
        listarProfissional(listaProficional,qtd);
        break;
    case 4:
        excluirProfissional(listaProficional,qtd,1);
        break;
    case 5:
        menuPrincipal();
        break;                  
    default:
        printf("Opção inválida!\n");
        break;
    }
return 0;
}





