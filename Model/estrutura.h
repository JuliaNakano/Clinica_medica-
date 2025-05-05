//As struct aqui declaradas representam os dados a serem manipualdos em cada "tabela"
// Julia Cristina Martins de Almeida Nakano
#include<stdio.h>
#include <stdlib.h>


//Informações sobre endereço
typedef struct {
    char rua[100];
    char bairro[50];
    char cidade[50];
    char estado[3];  // Ex: "SP", "MG"
}Endereco;

// Informações do pacientes
typedef struct {
    int codigo;                    // Código único
    char nomeCompleto[100];       // Nome completo
    char cpf[15];                 // CPF (formato: 000.000.000-00)
    
    char endereco[200]; //Usando o endereço
    char telefone[20];      
    char dataNascimento[11];      // Formato: DD/MM/AAAA
    char historicoMedico[1000];    // Ex: alergias, doenças crônicas
} Paciente;

//Informações para Profissionais de saúde 
typedef struct {
    int codigo;                    // Código único
    char nomeCompleto[100];       // Nome completo
    char crm[20];                 // CRM ou registro equivalente
    char especialidade[50];       // Especialidade médica
    char cpf[15];                 // CPF (formato: 000.000.000-00)
    char telefone[20];        
    char email[100];              // E-mail
} Psaude;

//Informações sobre os fornecedores 
typedef struct {
    int codigo;                      // Código único
    char nomeFantasia[100];         // Nome fantasia
    char razaoSocial[100];          // Razão social
    char inscricaoEstadual[30];     // Inscrição estadual
    char cnpj[20];                  // CNPJ (formato: 00.000.000/0000-00)
    //Endereco endereco;              //Usando o endereço
    char endereco[200];
    char telefone[11] ;          // Telefone
    char email[100];                // E-mail
} Fornecedor;


//Ambientes medicos
typedef struct {
    int codigo;                      // Código único
    char descricaoProcedimento[200]; //Descriçãodo procedimento
} Amedico;


//Informações sobre os materiais e medicamentos 
typedef struct {
    int codigo;                     // Código único
    char descricao[100];           // Descrição
    char fabricante[100];          // Fabricante
    Fornecedor * fornecedor;        // Fornecedor
    float precoCusto;              // Preço de custo
    float precoVenda;              // Preço de venda
    int quantidadeEstoque;         // Quantidade em estoque
    int estoqueMinimo;             // Estoque mínimo
} MaterialMedicamento;

// Informações sobre os procedimentos medicos
typedef struct {
    int codigo;                             // Código único
    char descricaoProcedimento[200];       // Descrição do procedimento
    float custo;                            // Custo do procedimento
    char tempoEstimado[30];                // Tempo estimado de realização (ex: "30 minutos")
    char ambienteMedico[100];              // Ambiente médico (ex: "Sala de cirurgia", "Ambulatório")
    char materiaisUtilizados[300];         // Medicamentos e materiais utilizados
} Pmedico;


//Testando 
/*int main() {
    // Exemplificação de uso
    Fornecedor fornecedor1 = {1, "Fornecedor A", "Razão Social A", "123456789", "00.000.000/0000-00", 
                               {"Rua A", "Bairro A", "Cidade A", "SP"}, "123456789", "fornecedorA@example.com"};
    
    MaterialMedicamento medicamento1 = {1, "Medicamento X", "Fabricante Y", &fornecedor1, 10.5, 20.0, 100, 10};
    
    // Exemplo de acesso aos dados
    printf("Medicamento: %s\n", medicamento1.descricao);
    printf("Fornecedor: %s\n", medicamento1.fornecedor->nomeFantasia);
    
    return 0;
}
*/

