#include <stdio.h>

// // Definição da estrutura Pessoa
// struct Pessoa {
//     char nome[50];
//     int idade;
//     char endereco[100];
// };

// int main() {
//     struct Pessoa p;

//     // Leitura dos dados da pessoa
//     printf("Digite o nome: ");
//     fgets(p.nome, 50, stdin);
//     printf("Digite a idade: ");
//     scanf("%d", &p.idade);
//     getchar(); // para limpar o buffer do enter deixado pelo scanf
//     printf("Digite o endereco: ");
//     fgets(p.endereco, 100, stdin);

//     // Impressão dos dados da pessoa
//     printf("\nDados da Pessoa:\n");
//     printf("Nome: %s", p.nome);
//     printf("Idade: %d\n", p.idade);
//     printf("Endereco: %s", p.endereco);

//     return 0;
// }

// exercicio 2 

// typedef struct
// {
//     int matricula;
//     char nome[50];
//     float nota1;
//     float nota2;
//     float nota3;
// }Aluno;

// int main(){
//     Aluno alunos[5];

//     int i, Aluno_maior_media;
//     float media, maior_media = 0.0;

//     for(i = 0; i < 5; i++){
//         printf("Digite o numero da matricula do Aluno: ", i+1);
//         scanf("%d", &alunos[i].matricula);
//         getchar(); // para limpar o buffer do enter deixado pelo scanf
//         printf("Digite o nome do Aluno: ");
//         fgets(alunos[i].nome, 50, stdin);
//         printf("Digite a nota 1 do Aluno: ");
//         scanf("%f", &alunos[i].nota1);
//         getchar(); // para limpar o buffer do enter deixado pelo scanf
//         printf("Digite a nota 2 do Aluno: ");
//         scanf("%f", &alunos[i].nota2);
//         getchar(); // para limpar o buffer do enter deixado pelo scanf
//         printf("Digite a nota 3 do Aluno: ");
//         scanf("%f", &alunos[i].nota3);
//         getchar(); // para limpar o buffer do enter deixado pelo scanf


//     }

//     for(i = 0; i < 5; i++){
//         media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
//         if (media > maior_media){
//             maior_media = media;
//             Aluno_maior_media = i;
//             }
    
//     printf("Aluno com maior media geral: \n");
//     printf("Nome: %s", alunos[Aluno_maior_media].nome);
//     printf("Notas: %2f, %2f, %2f", alunos[Aluno_maior_media].nota1, alunos[Aluno_maior_media].nota2, alunos[Aluno_maior_media].nota3 );

//     return 0;
//     }
// }

// exercicio 3

#include <math.h>

// typedef struct 
// {
//     float x;
//     float y;
// } Ponto;

// typedef struct
// {
//     Ponto sup_esq;
//     Ponto inf_dir;
// }Retangulo;

// float calcularArea(Retangulo r){
//     return fabs((r.inf_dir.x - r.sup_esq.x) * (r.sup_esq.y - r.inf_dir.y));
// }

// float calcularPerimetro(Retangulo r){
//     return 2 * fabs(r.inf_dir.x - r.sup_esq.x) + 2 * fabs(r.sup_esq.y - r.inf_dir.y); 
// }

// float calcularDiagonal(Retangulo r){
//     return sqrt(pow(r.inf_dir.x - r.sup_esq.x, 2) + pow(r.sup_esq.y - r.inf_dir.y, 2));
// }

// int main(){
//     Retangulo ret;

//     printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
//     scanf("%f %f", &ret.sup_esq.x, &ret.sup_esq.y);

//     printf("Digite as coordenadas do ponto inferior direito (x y): ");
//     scanf("%f %f", &ret.inf_dir.x, &ret.inf_dir.y);

//     printf("\nÁrea do retângulo: %.2f\n", calcularArea(ret));
//     printf("Perímetro do retângulo: %.2f\n", calcularPerimetro(ret));
//     printf("Comprimento da diagonal do retângulo: %.2f\n", calcularDiagonal(ret));

//     return 0;
// }

// exercicio 4 


// Definição da estrutura Ponto
typedef struct {
    float x;
    float y;
} Ponto;

// Definição da estrutura Retangulo
typedef struct {
    Ponto sup_esq;  // Ponto superior esquerdo
    Ponto inf_dir;  // Ponto inferior direito
} Retangulo;

// Função para verificar se um ponto está dentro de um retângulo
int pontoDentroRetangulo(Retangulo r, Ponto p) {
    if (p.x >= r.sup_esq.x && p.x <= r.inf_dir.x && p.y <= r.sup_esq.y && p.y >= r.inf_dir.y) {
        return 1; // O ponto está dentro do retângulo
    }
    return 0; // O ponto não está dentro do retângulo
}

int main() {
    Retangulo ret;
    Ponto ponto;

    // Leitura dos pontos do retângulo
    printf("Digite as coordenadas do ponto superior esquerdo do retângulo (x y): ");
    scanf("%f %f", &ret.sup_esq.x, &ret.sup_esq.y);

    printf("Digite as coordenadas do ponto inferior direito do retângulo (x y): ");
    scanf("%f %f", &ret.inf_dir.x, &ret.inf_dir.y);

    // Leitura do ponto a ser verificado
    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%f %f", &ponto.x, &ponto.y);

    // Verificação se o ponto está dentro do retângulo
    if (pontoDentroRetangulo(ret, ponto)) {
        printf("\nO ponto está dentro do retângulo.\n");
    } else {
        printf("\nO ponto não está dentro do retângulo.\n");
    }

    return 0;
}
