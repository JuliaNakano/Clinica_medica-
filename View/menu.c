#include <stdlib.h>
#include <stdio.h>

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
    printf("| |7| ENCERRAR                  |\n");
    printf("---------------------------------\n");
    


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
                
            case 0: 
            printf("OBRIGADO POR UTILIZAR O SISTEMA CLINICA MEDICA!!!");
            break;
            
        }

       
        
    
    
    }

    //Crie uma função para cada opção do mmenu
    
    return 0;
}

