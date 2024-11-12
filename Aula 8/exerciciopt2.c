#include <stdio.h>
#include <math.h> // Para usar a função sqrt

// EXERCICIO 1
// typedef struct 
// {
//     float x;
//     float y;
// } Ponto ;

// int main(){
//     Ponto ponto;

//     printf("Digite a cordenada x: ");
//     scanf("%f", &ponto.x);
//     printf("Digite a cordenada y: ");
//     scanf("%f", &ponto.y);

//     float distancia = sqrt(pow(ponto.x - 0, 2)+ pow(ponto.y -0, 2));
//     printf("A distencia do ponto (%.2f, %.2f) até a origem (0,0) é de %.2f\n", ponto.x, ponto.y, distancia);

//     return 0;
// }

//EXERCICIO 2

// typedef struct {
//     int hora;   
//     int minuto; 
//     int segundo; 
// } Hora;


// int maiorHora(Hora h1, Hora h2) {
//     if (h1.hora > h2.hora) {
//         return 1; 
//     } else if (h1.hora < h2.hora) {
//         return -1;
//     } else {

//         if (h1.minuto > h2.minuto) {
//             return 1; 
//         } else if (h1.minuto < h2.minuto) {
//             return -1; 
//         } else {

//             if (h1.segundo > h2.segundo) {
//                 return 1; 
//             } else if (h1.segundo < h2.segundo) {
//                 return -1;
//             } else {
//                 return 0; 
//             }
//         }
//     }
// }

// int main() {
//     Hora horas[5]; 
//     Hora maior; 

//     for (int i = 0; i < 5; i++) {
//         printf("Digite a hora %d (formato HH MM SS): ", i + 1);
//         scanf("%d %d %d", &horas[i].hora, &horas[i].minuto, &horas[i].segundo);
//     }

//     maior = horas[0];

//     for (int i = 1; i < 5; i++) {
//         if (maiorHora(horas[i], maior) == 1) {
//             maior = horas[i];
//         }
//     }

//     printf("A maior hora é: %02d:%02d:%02d\n", maior.hora, maior.minuto, maior.segundo);

//     return 0;
// }

// EXERCICIO 3 

// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     int dia;
//     int mes;
//     int ano;
// } DataNascimento;

// typedef struct {
//     char nome[50];
//     DataNascimento dataNascimento;
// } Pessoa;

// int main() {
//     Pessoa pessoas[6];
//     Pessoa maisNova, maisVelha;
//     int i;

//     for (i = 0; i < 6; i++) {
//         printf("Digite o nome da pessoa %d: ", i + 1);
//         scanf(" %[^\n]", pessoas[i].nome);
//         printf("Digite a data de nascimento (DD MM AAAA): ");
//         scanf("%d %d %d", &pessoas[i].dataNascimento.dia, &pessoas[i].dataNascimento.mes, &pessoas[i].dataNascimento.ano);
//     }

//     maisNova = pessoas[0];
//     maisVelha = pessoas[0];

//     for (i = 1; i < 6; i++) {
//         if (pessoas[i].dataNascimento.ano > maisNova.dataNascimento.ano ||
//             (pessoas[i].dataNascimento.ano == maisNova.dataNascimento.ano && 
//              (pessoas[i].dataNascimento.mes > maisNova.dataNascimento.mes ||
//               (pessoas[i].dataNascimento.mes == maisNova.dataNascimento.mes && 
//                pessoas[i].dataNascimento.dia > maisNova.dataNascimento.dia)))) {
//             maisNova = pessoas[i];
//         }

//         if (pessoas[i].dataNascimento.ano < maisVelha.dataNascimento.ano ||
//             (pessoas[i].dataNascimento.ano == maisVelha.dataNascimento.ano && 
//              (pessoas[i].dataNascimento.mes < maisVelha.dataNascimento.mes ||
//               (pessoas[i].dataNascimento.mes == maisVelha.dataNascimento.mes && 
//                pessoas[i].dataNascimento.dia < maisVelha.dataNascimento.dia)))) {
//             maisVelha = pessoas[i];
//         }
//     }

//     printf("A pessoa mais nova é: %s\n", maisNova.nome);
//     printf("A pessoa mais velha é: %s\n", maisVelha.nome);

//     return 0;
// }

// EXERCICIO 4 

// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     char nome[50];
//     char esporte[30];
//     int idade;
//     float altura;
// } Atleta;

// int main() {
//     Atleta atletas[5];
//     Atleta maisAlto, maisVelho;
//     int i;

//     for (i = 0; i < 5; i++) {
//         printf("Digite o nome do atleta %d: ", i + 1);
//         scanf(" %[^\n]", atletas[i].nome);
//         printf("Digite o esporte do atleta %d: ", i + 1);
//         scanf(" %[^\n]", atletas[i].esporte);
//         printf("Digite a idade do atleta %d: ", i + 1);
//         scanf("%d", &atletas[i].idade);
//         printf("Digite a altura do atleta %d (em metros): ", i + 1);
//         scanf("%f", &atletas[i].altura);
//     }

//     maisAlto = atletas[0];
//     maisVelho = atletas[0];

//     for (i = 1; i < 5; i++) {
//         if (atletas[i].altura > maisAlto.altura) {
//             maisAlto = atletas[i];
//         }

//         if (atletas[i].idade > maisVelho.idade) {
//             maisVelho = atletas[i];
//         }
//     }

//     printf("O atleta mais alto é: %s\n", maisAlto.nome);
//     printf("O atleta mais velho é: %s\n", maisVelho.nome);

//     return 0;
// }

// EXERCICIO 5 

// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     char nome[50];
//     char esporte[30];
//     int idade;
//     float altura;
// } Atleta;

// void ordenarPorIdade(Atleta atletas[], int n) {
//     Atleta temp;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (atletas[j].idade < atletas[j + 1].idade) {
//                 temp = atletas[j];
//                 atletas[j] = atletas[j + 1];
//                 atletas[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     Atleta atletas[5];

//     for (int i = 0; i < 5; i++) {
//         printf("Digite o nome do atleta %d: ", i + 1);
//         scanf(" %[^\n]", atletas[i].nome);
//         printf("Digite o esporte do atleta %d: ", i + 1);
//         scanf(" %[^\n]", atletas[i].esporte);
//         printf("Digite a idade do atleta %d: ", i + 1);
//         scanf("%d", &atletas[i].idade);
//         printf("Digite a altura do atleta %d (em metros): ", i + 1);
//         scanf("%f", &atletas[i].altura);
//     }

//     ordenarPorIdade(atletas, 5);

//     printf("\nAtletas em ordem de idade (do mais velho para o mais novo):\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Nome: %s, Esporte: %s, Idade: %d, Altura: %.2f m\n", 
//                atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
//     }

//     return 0;
// }

// EXERCICIO 6 

// #include <stdio.h>

// typedef struct {
//     int dia;
//     int mes;
//     int ano;
// } Data;

// int ehBissexto(int ano) {
//     return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
// }

// int diasNoMes(int mes, int ano) {
//     switch (mes) {
//         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//             return 31;
//         case 4: case 6: case 9: case 11:
//             return 30;
//         case 2:
//             return ehBissexto(ano) ? 29 : 28;
//         default:
//             return 0; // Mês inválido
//     }
// }

// int calcularDias(Data d1, Data d2) {
//     int dias = 0;

//     if (d1.ano == d2.ano && d1.mes == d2.mes) {
//         return d2.dia - d1.dia;
//     }

//     // Contar dias da primeira data até o final do mês
//     dias += diasNoMes(d1.mes, d1.ano) - d1.dia;

//     // Contar dias dos meses completos entre as duas datas
//     for (int mes = d1.mes + 1; mes <= 12; mes++) {
//         dias += diasNoMes(mes, d1.ano);
//     }

//     // Contar dias do ano seguinte até a segunda data
//     for (int ano = d1.ano + 1; ano < d2.ano; ano++) {
//         dias += ehBissexto(ano) ? 366 : 365;
//     }

//     // Contar dias do início do ano da segunda data até a data
//     for (int mes = 1; mes < d2.mes; mes++) {
//         dias += diasNoMes(mes, d2.ano);
//     }

//     // Adicionar os dias da segunda data
//     dias += d2.dia;

//     return dias;
// }

// int main() {
//     Data data1, data2;

//     printf("Digite a primeira data (DD MM AAAA): ");
//     scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    
//     printf("Digite a segunda data (DD MM AAAA): ");
//     scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

//     int dias = calcularDias(data1, data2);
//     printf("O número de dias entre as duas datas é: %d\n", dias);

//     return 0;
// }

// EXERCICIO 7 

#include <stdio.h>

#define MAX_JOGADORES 22

typedef struct {
    int numero_camisa;
    float peso; // em kg
    float altura; // em metros
    char posicao[20]; // atacante, defensor ou meio campista
} Jogador;

int main() {
    Jogador jogadores[MAX_JOGADORES];
    
    // Leitura dos dados dos jogadores
    for (int i = 0; i < MAX_JOGADORES; i++) {
        printf("Digite os dados do jogador %d:\n", i + 1);
        
        printf("Número da camisa: ");
        scanf("%d", &jogadores[i].numero_camisa);
        
        printf("Peso (kg): ");
        scanf("%f", &jogadores[i].peso);
        
        printf("Altura (m): ");
        scanf("%f", &jogadores[i].altura);
        
        printf("Posição (atacante, defensor, meio campista): ");
        scanf(" %[^\n]", jogadores[i].posicao); // Lê a string com espaços
        printf("\n");
    }

    // Exibição do relatório
    printf("\nRelatório dos Jogadores:\n");
    printf("---------------------------------------------------------\n");
    printf("| Nº Camisa | Peso (kg) | Altura (m) | Posição         |\n");
    printf("---------------------------------------------------------\n");
    
    for (int i = 0; i < MAX_JOGADORES; i++) {
        printf("| %-9d | %-9.2f | %-10.2f | %-15s |\n", 
               jogadores[i].numero_camisa, 
               jogadores[i].peso, 
               jogadores[i].altura, 
               jogadores[i].posicao);
    }
    
    printf("---------------------------------------------------------\n");

    return 0;
}


// EXERCICIO 8 


// #include <stdio.h>

// #define MAX_ASSOCIADOS 50

// typedef struct {
//     char endereco[100];
//     char telefone[15];
//     char data_nascimento[11]; // Formato: DD/MM/AAAA
// } Dados;

// typedef struct {
//     char nome[50];
//     int idade;
//     int numero_carteira;
//     Dados dados; // Estrutura aninhada
// } Associado;

// int main() {
//     Associado associados[MAX_ASSOCIADOS];

//     // Leitura dos dados dos associados
//     for (int i = 0; i < MAX_ASSOCIADOS; i++) {
//         printf("Digite o nome do associado %d: ", i + 1);
//         scanf(" %[^\n]", associados[i].nome);
        
//         printf("Digite a idade do associado %d: ", i + 1);
//         scanf("%d", &associados[i].idade);
        
//         printf("Digite o número da carteira do associado %d: ", i + 1);
//         scanf("%d", &associados[i].numero_carteira);
        
//         printf("Digite o endereço do associado %d: ", i + 1);
//         scanf(" %[^\n]", associados[i].dados.endereco);
        
//         printf("Digite o telefone do associado %d: ", i + 1);
//         scanf(" %[^\n]", associados[i].dados.telefone);
        
//         printf("Digite a data de nascimento do associado %d (DD/MM/AAAA): ", i + 1);
//         scanf(" %[^\n]", associados[i].dados.data_nascimento);
        
//         printf("\n");
//     }

//     // Exibição dos dados dos associados
//     printf("Dados dos associados:\n");
//     for (int i = 0; i < MAX_ASSOCIADOS; i++) {
//         printf("Associado %d:\n", i + 1);
//         printf("Nome: %s\n", associados[i].nome);
//         printf("Idade: %d\n", associados[i].idade);
//         printf("Número da Carteira: %d\n", associados[i].numero_carteira);
//         printf("Endereço: %s\n", associados[i].dados.endereco);
//         printf("Telefone: %s\n", associados[i].dados.telefone);
//         printf("Data de Nascimento: %s\n", associados[i].dados.data_nascimento);
//         printf("\n");
//     }

//     return 0;
// }

// EXERCICIO 9

// #include <stdio.h>

// #define MAX_CONTATOS 100

// typedef struct {
//     char nome[50];
//     char sobrenome[50];
//     char telefone_movel[15];
//     char telefone_fixo[15];
//     char email[50];
// } Contato;

// int main() {
//     Contato agenda[MAX_CONTATOS];
//     int i, num_contatos;

//     printf("Quantos contatos você deseja adicionar (máximo %d)? ", MAX_CONTATOS);
//     scanf("%d", &num_contatos);

//     // Verifica se o número de contatos está dentro do limite
//     if (num_contatos > MAX_CONTATOS) {
//         printf("Número de contatos excede o limite permitido.\n");
//         return 1;
//     }

//     // Leitura dos dados dos contatos
//     for (i = 0; i < num_contatos; i++) {
//         printf("\nContato %d:\n", i + 1);
//         printf("Digite o nome: ");
//         scanf(" %[^\n]", agenda[i].nome);
//         printf("Digite o sobrenome: ");
//         scanf(" %[^\n]", agenda[i].sobrenome);
//         printf("Digite o telefone móvel: ");
//         scanf(" %[^\n]", agenda[i].telefone_movel);
//         printf("Digite o telefone fixo: ");
//         scanf(" %[^\n]", agenda[i].telefone_fixo);
//         printf("Digite o e-mail: ");
//         scanf(" %[^\n]", agenda[i].email);
//     }

//     // Exibição dos dados dos contatos
//     printf("\nAgenda de Contatos:\n");
//     for (i = 0; i < num_contatos; i++) {
//         printf("\nContato %d:\n", i + 1);
//         printf("Nome: %s\n", agenda[i].nome);
//         printf("Sobrenome: %s\n", agenda[i].sobrenome);
//         printf("Telefone Móvel: %s\n", agenda[i].telefone_movel);
//         printf("Telefone Fixo: %s\n", agenda[i].telefone_fixo);
//         printf("E-mail: %s\n", agenda[i].email);
//     }

//     return 0;
// }