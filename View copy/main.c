#include <stdlib.h>
#include <stdio.h>
#include "../Model/Paciente.h"
#include "../Model/Fornecedor.h"
#include "../Model/Ambiente.h"
#include "../Model/Material.h"
#include "../Model/Procedimento.h"
#include "../Model/ProfissionalSaude.h"
#include "menu.c"

int main()
{
   int opcao;

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
    printf("| |4| Ambientes Medicos          |\n ");
    printf("---------------------------------\n");
    printf("| |5| Medicamentos e Materiais   |\n ");
    printf("---------------------------------\n");
    printf("| |6| Procedimentos Medicos      |\n");
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    printf("| |0| ENCERRAR                  |\n");
    printf("---------------------------------\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    


    // 

    while (opcao!=0){
        switch (opcao)
        {
            case 1:
            printf("--------- Pacientes ---------\n");
            printf("-----------------------------\n");
            printf("| |1| Cadastrar              |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |2| Atualizar              |\n");
            printf("----------------------------\n");
            printf("-----------------------------\n");
            printf("| |3| Listar                 |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |4| Deletar                |\n");
            printf("-----------------------------\n");
            printf("------------------------------\n");
            printf("| |5| Mostrar MENU           |\n");
            printf("------------------------------\n");
            //faltou receber a opção.........

            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            
            int menuPaciente(int opcao);
            break;
            //Escolhendo a opção para dar segmento no sistema 
            

                         
            case 2: 
            printf("-- Proficionais da Saude-----\n");
            printf("-----------------------------\n");
            printf("| |1| Cadastrar              |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |2| Atualizar              |\n");
            printf("----------------------------\n");
            printf("-----------------------------\n");
            printf("| |3| Listar                 |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |4| Deletar                |\n");
            printf("-----------------------------\n");
            printf("------------------------------\n");
            printf("| |5| Mostrar MENU           |\n");
            printf("------------------------------\n");

            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            int menuProfissionalSaude(int opcao);
            break;

            case 3 :

            printf("---------Fornecedores--------\n");
            printf("-----------------------------\n");
            printf("| |1| Cadastrar              |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |2| Atualizar              |\n");
            printf("----------------------------\n");
            printf("-----------------------------\n");
            printf("| |3| Listar                 |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |4| Deletar                |\n");
            printf("-----------------------------\n");
            printf("------------------------------\n");
            printf("| |5| Mostrar MENU           |\n");
            printf("------------------------------\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            int menuFornecedor(int opcao);
            break;


            case 4: 
            printf("------Ambientes Medicos------\n");
            printf("-----------------------------\n");
            printf("| |1| Cadastrar              |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |2| Atualizar              |\n");
            printf("----------------------------\n");
            printf("-----------------------------\n");
            printf("| |3| Listar                 |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |4| Deletar                |\n");
            printf("-----------------------------\n");
            printf("------------------------------\n");
            printf("| |5| Mostrar MENU           |\n");
            printf("------------------------------\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            int menuAmbienteMedico(int opcao);
            break;
            
            case 5: 

            printf("--Medicamentos e Materiais---\n");
            printf("-----------------------------\n");
            printf("| |1| Cadastrar              |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |2| Atualizar              |\n");
            printf("----------------------------\n");
            printf("-----------------------------\n");
            printf("| |3| Listar                 |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |4| Deletar                |\n");
            printf("-----------------------------\n");
            printf("------------------------------\n");
            printf("| |5| Mostrar MENU           |\n");
            printf("------------------------------\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            int menuMaterial(int opcao);
            break;

            case 6: 
            printf("--- Procedimentos Medicos ---\n");
            printf("-----------------------------\n");
            printf("| |1| Cadastrar              |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |2| Atualizar              |\n");
            printf("----------------------------\n");
            printf("-----------------------------\n");
            printf("| |3| Listar                 |\n");
            printf("-----------------------------\n");
            printf("-----------------------------\n");
            printf("| |4| Deletar                |\n");
            printf("-----------------------------\n");
            printf("------------------------------\n");
            printf("| |5| Mostrar MENU           |\n");
            printf("------------------------------\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            int menuProcedimentoMedico(int opcao);
            break;
                
            case 0: 
            printf("OBRIGADO POR UTILIZAR O SISTEMA CLINICA MEDICA!!!");
            break;
            
        }

       
        
    
    
    }

    //Crie uma função para cada opção do mmenu
    
    return 0;
}

