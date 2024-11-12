#include <stdio.h>

// exercicio 9

// int main() {
//     int anoNascimento, anoAtual, idade;

//     printf("Digite o ano de nascimento: ");
//     scanf("%d", &anoNascimento);

//     printf("Digite o ano atual: ");
//     scanf("%d", &anoAtual);

//     if (anoNascimento > anoAtual || anoNascimento < 1900) {
//         printf("Ano de nascimento inválido!\n");
//     } else {
      
//         idade = anoAtual - anoNascimento;
//         printf("A idade da pessoa é: %d anos\n", idade);
//     }

// }

// exercicio 10

// int main() {
//     int num1, num2, num3, temp;

//     printf("Digite o primeiro número: ");
//     scanf("%d", &num1);
    
//     printf("Digite o segundo número: ");
//     scanf("%d", &num2);
    
//     printf("Digite o terceiro número: ");
//     scanf("%d", &num3);

//     if (num1 > num2) {
//         temp = num1;
//         num1 = num2;
//         num2 = temp;
//     }
//     if (num1 > num3) {
//         temp = num1;
//         num1 = num3;
//         num3 = temp;
//     }
//     if (num2 > num3) {
//         temp = num2;
//         num2 = num3;
//         num3 = temp;
//     }

//     printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);

// }

// exercicio 11

// int main() {
//     int num1, num2, num3, maior;

//     printf("Digite o primeiro número: ");
//     scanf("%d", &num1);

//     printf("Digite o segundo número: ");
//     scanf("%d", &num2);

//     printf("Digite o terceiro número: ");
//     scanf("%d", &num3);

//     maior = num1; 

//     if (num2 > maior) {
//         maior = num2;
//     }

//     if (num3 > maior) {
//         maior = num3;
//     }

//     printf("O maior número é: %d\n", maior);
// }

// exercicio 12

// int main() {
//     int idade;

//     printf("Digite a idade da pessoa: ");
//     scanf("%d", &idade);

//     if (idade >= 18 && idade <= 65) {
//         printf("A pessoa é maior de idade.\n");
//     } else if (idade < 18) {
//         printf("A pessoa é menor de idade.\n");
//     } else if (idade > 65) {
//         printf("A pessoa é maior de 65 anos.\n");
//     }
// }

// exercicio 13 

// int main() {
//     char nome[50];
//     float nota1, nota2, media;

//     printf("Digite o nome do aluno: ");
//     scanf("%s", nome); 

//     printf("Digite a nota da prova 1: ");
//     scanf("%f", &nota1);

//     printf("Digite a nota da prova 2: ");
//     scanf("%f", &nota2);

//     media = (nota1 + nota2) / 2;

//     printf("\nNome: %s\n", nome);
//     printf("Nota da prova 1: %.2f\n", nota1);
//     printf("Nota da prova 2: %.2f\n", nota2);
//     printf("Média: %.2f\n", media);

//     if (media >= 7) {
//         printf("Situação: Aprovado\n");
//     } else if (media < 3) {
//         printf("Situação: Reprovado\n");
//     } else {
//         printf("Situação: Em Prova Final\n");
//     }
// }

// exercicio 14

// int main() {
//     int mes;

//     printf("Digite um número entre 1 e 12: ");
//     scanf("%d", &mes);

//     switch (mes) {
//         case 1:
//             printf("Janeiro\n");
//             break;
//         case 2:
//             printf("Fevereiro\n");
//             break;
//         case 3:
//             printf("Março\n");
//             break;
//         case 4:
//             printf("Abril\n");
//             break;
//         case 5:
//             printf("Maio\n");
//             break;
//         case 6:
//             printf("Junho\n");
//             break;
//         case 7:
//             printf("Julho\n");
//             break;
//         case 8:
//             printf("Agosto\n");
//             break;
//         case 9:
//             printf("Setembro\n");
//             break;
//         case 10:
//             printf("Outubro\n");
//             break;
//         case 11:
//             printf("Novembro\n");
//             break;
//         case 12:
//             printf("Dezembro\n");
//             break;
//         default:
//             printf("Não existe mês com este número.\n");
//             break;
//     }

// }

// exercicio 15

// int main() {
//     char nome_livro[100], tipo_usuario[10];
//     int dias_devolucao;

//     printf("Digite o nome do livro: ");
//     fgets(nome_livro, sizeof(nome_livro), stdin);
//     nome_livro[strcspn(nome_livro, "\n")] = '\0'; 


//     printf("Digite o tipo de usuário (professor ou aluno): ");
//     scanf("%s", tipo_usuario);

 
//     if (strcmp(tipo_usuario, "professor") == 0) {
//         dias_devolucao = 10;
//     } else if (strcmp(tipo_usuario, "aluno") == 0) {
//         dias_devolucao = 3;
//     } else {
//         printf("Tipo de usuário inválido!\n");
//         return 1;  
//     }

//     printf("\nRecibo de Empréstimo\n");
//     printf("Nome do livro: %s\n", nome_livro);
//     printf("Tipo de usuário: %s\n", tipo_usuario);
//     printf("Total de dias para devolução: %d dias\n", dias_devolucao);

// }

// exercicio 16

int main() {
    int prato, sobremesa, bebida;
    int total_calorias = 0;

    printf("Escolha o prato:\n");
    printf("1 - Vegetariano (180 cal)\n");
    printf("2 - Peixe (230 cal)\n");
    printf("3 - Frango (250 cal)\n");
    printf("4 - Carne (350 cal)\n");
    printf("Digite o número correspondente ao prato: ");
    scanf("%d", &prato);

    switch (prato) {
        case 1:
            total_calorias += 180;
            break;
        case 2:
            total_calorias += 230;
            break;
        case 3:
            total_calorias += 250;
            break;
        case 4:
            total_calorias += 350;
            break;
        default:
            printf("Opção de prato inválida!\n");
            return 1;
    }

    printf("\nEscolha a sobremesa:\n");
    printf("1 - Abacaxi (75 cal)\n");
    printf("2 - Sorvete diet (110 cal)\n");
    printf("3 - Mousse diet (170 cal)\n");
    printf("4 - Mousse chocolate (200 cal)\n");
    printf("Digite o número correspondente à sobremesa: ");
    scanf("%d", &sobremesa);

    switch (sobremesa) {
        case 1:
            total_calorias += 75;
            break;
        case 2:
            total_calorias += 110;
            break;
        case 3:
            total_calorias += 170;
            break;
        case 4:
            total_calorias += 200;
            break;
        default:
            printf("Opção de sobremesa inválida!\n");
            return 1;
    }

    printf("\nEscolha a bebida:\n");
    printf("1 - Chá (20 cal)\n");
    printf("2 - Suco de laranja (70 cal)\n");
    printf("3 - Suco de melão (100 cal)\n");
    printf("4 - Refrigerante diet (65 cal)\n");
    printf("Digite o número correspondente à bebida: ");
    scanf("%d", &bebida);

    switch (bebida) {
        case 1:
            total_calorias += 20;
            break;
        case 2:
            total_calorias += 70;
            break;
        case 3:
            total_calorias += 100;
            break;
        case 4:
            total_calorias += 65;
            break;
        default:
            printf("Opção de bebida inválida!\n");
            return 1;
    }

    printf("\nTotal de calorias da refeição: %d cal\n", total_calorias);

}