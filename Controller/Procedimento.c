//Crud de Procedimentos Médicos
#include <stdio.h>
#include <string.h>
#include "../Model/Procedimento.h"
#include "../Model/Ambiente.h"
#include "../Model/Material.h"




//Lista de ambientes cadastrados só peo
void listarAmbientes(Amedico* ambiente, int total) {
    printf("\n=== Ambientes Cadastrados ===\n");
    for (int i = 0; i < total; i++) {
        printf("Codigo: %d - Nome: %s\n", ambiente[i].codigo, ambiente[i].nome);
    }
    printf("\n");
}

void listarMateriais(MaterialMedicamento* material, int total) {
    printf("\n=== Ambientes Cadastrados ===\n");
    for (int i = 0; i < total; i++) {
        printf("Codigo: %d - Nome: %s\n", material[i].codigo, material[i].nome);
    }
    printf("\n");
}


// Cadastrando procedimentos 
void cadastrarProcedimento(Pmedico* lista, int* qtd, Amedico* ambiente, int total, MaterialMedicamento* material ) {
    printf("=== Cadastro de Procedimento Medico ===\n");

    lista[*qtd].codigo = *qtd + 1;

    printf("Descricao do procedimento: ");
    fgets(lista[*qtd].descricaoProcedimento, 200, stdin);
    lista[*qtd].descricaoProcedimento[strcspn(lista[*qtd].descricaoProcedimento, "\n")] = '\0';

    printf("Custo do procedimento: ");
    scanf("%f", &lista[*qtd].custo);
    getchar();

    printf("Tempo estimado: ");
    fgets(lista[*qtd].tempoEstimado, 30, stdin);
    lista[*qtd].tempoEstimado[strcspn(lista[*qtd].tempoEstimado, "\n")] = '\0';

    //Ambientes médicos tambem são identificados por códigos
    listarAmbiente(ambiente, total);
    int codigoAmbiente;
    printf("Codigo do ambiente medico: ");
    scanf("%d", &codigoAmbiente);
    lista[*qtd].codigoAmbienteMedico = codigoAmbiente;

   
   //Não esquecer de testar se a variavel total vai acumular o valor do total pra ambiente
    //Todos os materiais utilizados, serão identificados atraves do código, podem conter varios materiais 
    // em um mesmo procedimento...
    // Gera a lista de materiais disponiveis
   listarMateriais(material, total);
   
    
   //Permite a associação de mais de um material ao procedimento
   printf("Quantos materiais deseja associar ao procedimento (máx %d)? ", total);
   scanf("%d", &lista[*qtd].qtdMateriaisUtilizados);
   getchar(); // Limpar buffer

   for (int  i = 0; i < lista[*qtd].qtdMateriaisUtilizados; i++) {

       printf("Digite o codigo do material %d: ", i + 1);
       scanf("%d", &lista[*qtd].materiaisUtilizados[i]);
       getchar(); // Limpar buffer 
   }



    printf("Procedimento cadastrado com sucesso!\n");
}


//Atualizar procedimentos 
void atualizarProcedimento(Pmedico* lista, int *qtd,Amedico* ambiente, int total, MaterialMedicamento* material) {
    int codigo;
    printf("Digite o codigo do procedimento que deseja atualizar: ");
    scanf("%d", &codigo);
    getchar();

    int i, encontrado = 0;
    for (i = 0; i < qtd; i++) {
        if (lista[i].codigo == codigo) {
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Procedimento com codigo %d nao encontrado.\n", codigo);
        return;
    }

    int opcao;
    do {
        printf("\n=== Atualizar Procedimento (Codigo %d) ===\n", codigo);
        printf("1. Descricao\n");
        printf("2. Custo\n");
        printf("3. Tempo estimado\n");
        printf("4. Codigo do ambiente medico\n");
        printf("5. Materiais utilizados\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Nova descricao: ");
                fgets(lista[i].descricaoProcedimento, 200, stdin);
                lista[i].descricaoProcedimento[strcspn(lista[i].descricaoProcedimento, "\n")] = '\0';
                break;
            case 2:
                printf("Novo custo: ");
                scanf("%f", &lista[i].custo);
                getchar();
                break;
            case 3:
                printf("Novo tempo estimado: ");
                fgets(lista[i].tempoEstimado, 30, stdin);
                lista[i].tempoEstimado[strcspn(lista[i].tempoEstimado, "\n")] = '\0';
                break;
            case 4:

                listarAmbientes(ambiente, total);
                int codigoAmbienteMedico;
                printf("Novo codigo do ambiente medico: ");
                scanf("%d", &lista[i].codigoAmbienteMedico);
                getchar();
                break;
            case 5:
            //Como pode conter mais de um material a atualização deve acontecer para cada ou todos
                listarMateriais(material, total);
                printf("Novos materiais utilizados: ");

                printf("Quantos materiais deseja associar ao procedimento (máx %d)? ", total);
                scanf("%d", &lista[*qtd].qtdMateriaisUtilizados);
                getchar(); // Limpar buffer

               for (int  i = 0; i < lista[*qtd].qtdMateriaisUtilizados; i++) {

                    printf("Digite o codigo do material %d: ", i + 1);
                    scanf("%d", &lista[*qtd].materiaisUtilizados[i]);
                    getchar(); // Limpar buffer 
                }

            case 0:
                printf("Saindo da atualizacao.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
}    


//Listar procedimentos 
void listarProcedimento(Pmedico* lista, int* qtd ) {
    if (qtd == 0) {
        printf("Nenhum procedimento cadastrado.\n");
        return;
    }

    //Testar a parte de materiais....
    printf("\n=== Lista de Procedimentos Medicos ===\n");
    for (int i = 0; i < qtd; i++) {
        printf("Codigo: %d\n", lista[i].codigo);
        printf("Descricao: %s\n", lista[i].descricaoProcedimento);
        printf("Custo: %.2f\n", lista[i].custo);
        printf("Tempo estimado: %s\n", lista[i].tempoEstimado);
        printf("Codigo do ambiente medico: %d\n", lista[i].codigoAmbienteMedico);
        printf("Materiais utilizados: %s\n", lista[i].materiaisUtilizados);
        printf("----------------------------------------\n");
    }
}

//deletar procedimentos....
void excluirProcedimento(Pmedico* lista, int* qtd, int codigo) {
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
        printf("Procedimento com codigo %d excluido com sucesso!\n", codigo);
    } else {
        printf("Procedimento com codigo %d nao encontrado.\n", codigo);
    }
}