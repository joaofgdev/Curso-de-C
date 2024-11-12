// exercicio 1

#include <stdio.h>

// int main() {
//     int vetor[15];
//     int i, num, encontrado = 0;

//     printf("Digite 15 números inteiros:\n");
//     for (i = 0; i < 15; i++) {
//         printf("Número %d: ", i + 1);
//         scanf("%d", &vetor[i]);
//     }

//     printf("\nDigite um número para buscar no vetor: ");
//     scanf("%d", &num);

//     for (i = 0; i < 15; i++) {
//         if (vetor[i] == num) {
//             printf("Número %d encontrado na posição %d.\n", num, i);
//             encontrado = 1; 
//             break;
//         }
//     }

//     if (!encontrado) {
//         printf("Não encontrado!\n");
//     }

// }

// exercicio 2 

// int main() {
//     char letras[10];
//     int i;

//     printf("Digite 10 letras:\n");
//     for (i = 0; i < 10; i++) {
//         printf("Letra %d: ", i + 1);
//         scanf(" %c", &letras[i]);  
//     }

//     printf("\nListagem das letras:\n");
//     for (i = 0; i < 10; i++) {
//         printf("%d. %c\n", i + 1, letras[i]);
//     }

// }

// exercicio 3


// int main() {
//     int numeros[15];
//     int i;

//     printf("Digite 15 números inteiros:\n");
//     for (i = 0; i < 15; i++) {
//         printf("Número %d: ", i + 1);
//         scanf("%d", &numeros[i]);
//     }

//     printf("\nListagem dos números e sua paridade:\n");
//     for (i = 0; i < 15; i++) {
//         if (numeros[i] % 2 == 0) {
//             printf("%d. %d - Par\n", i + 1, numeros[i]);
//         } else {
//             printf("%d. %d - Ímpar\n", i + 1, numeros[i]);
//         }
//     }

// }

// exercicio 4

// int main() {
//     int numeros[8];
//     int i, multiplos_seis = 0;

//     printf("Digite 8 números inteiros:\n");
//     for (i = 0; i < 8; i++) {
//         printf("Número %d: ", i + 1);
//         scanf("%d", &numeros[i]);
//     }

//     printf("\nNúmeros digitados:\n");
//     for (i = 0; i < 8; i++) {
//         printf("%d ", numeros[i]);
//         if (numeros[i] % 6 == 0) {
//             multiplos_seis++;
//         }
//     }

//     printf("\n\nTotal de múltiplos de seis: %d\n", multiplos_seis);

// }

// exercicio 5 

// #include <math.h>

// int main() {
//     float nota1[15], nota2[15], media[15];
//     int situacao[15];
//     int i;

//     
//     printf("Digite as notas das provas 1 e 2 de 15 alunos:\n");
//     for (i = 0; i < 15; i++) {
//         printf("Aluno %d\n", i + 1);
//         printf("Nota da prova 1: ");
//         scanf("%f", &nota1[i]);
//         printf("Nota da prova 2: ");
//         scanf("%f", &nota2[i]);

//         media[i] = round((nota1[i] + nota2[i]) / 2);

//         if (media[i] >= 6) {
//             situacao[i] = 1; 
//         } else {
//             situacao[i] = 2;
//         }
//     }

//     printf("\nListagem de Alunos:\n");
//     printf("Aluno\tNota 1\tNota 2\tMédia\tSituação\n");
//     printf("-------------------------------------------------\n");
//     for (i = 0; i < 15; i++) {
//         printf("%d\t%.1f\t%.1f\t%.0f\t", i + 1, nota1[i], nota2[i], media[i]);
//         if (situacao[i] == 1) {
//             printf("Aprovado\n");
//         } else {
//             printf("Reprovado\n");
//         }
//     }

// }

// exercicio 6 

// int main() {
//     float salario[20], novo_salario[20];
//     int i;

//     printf("Digite os salários de 20 pessoas:\n");
//     for (i = 0; i < 20; i++) {
//         printf("Salário da pessoa %d: R$ ", i + 1);
//         scanf("%f", &salario[i]);

//         novo_salario[i] = salario[i] * 1.08;
//     }

//     printf("\nListagem de salários:\n");
//     printf("Pessoa\tSalário Antigo\tNovo Salário\n");
//     printf("-----------------------------------------\n");
//     for (i = 0; i < 20; i++) {
//         printf("%d\tR$ %.2f\t\tR$ %.2f\n", i + 1, salario[i], novo_salario[i]);
//     }

// } 

// exercicio 7


// int main() {
//     float compra[100], venda[100], lucro[100];
//     int i, lucro_menor_10 = 0, lucro_entre_10_e_20 = 0, lucro_maior_20 = 0;

//     printf("Digite o preço de compra e venda de 100 mercadorias:\n");
//     for (i = 0; i < 100; i++) {
//         printf("Mercadoria %d\n", i + 1);
//         printf("Preço de compra: R$ ");
//         scanf("%f", &compra[i]);
//         printf("Preço de venda: R$ ");
//         scanf("%f", &venda[i]);

//         lucro[i] = ((venda[i] - compra[i]) / compra[i]) * 100;

//         if (lucro[i] < 10) {
//             lucro_menor_10++;
//         } else if (lucro[i] >= 10 && lucro[i] <= 20) {
//             lucro_entre_10_e_20++;
//         } else {
//             lucro_maior_20++;
//         }
//     }

//     printf("\nResumo de Lucros:\n");
//     printf("Mercadorias com lucro < 10%%: %d\n", lucro_menor_10);
//     printf("Mercadorias com 10%% <= lucro <= 20%%: %d\n", lucro_entre_10_e_20);
//     printf("Mercadorias com lucro > 20%%: %d\n", lucro_maior_20);

// }

// exercicio 8


// int main() {
//     int codigo[30], quantidade[30];
//     float valor_compra[30], valor_venda[30];
//     int i, opcao, codigo_busca;
//     int encontrado = 0;

//     // Lendo os dados dos 30 produtos
//     printf("Digite os dados de 30 produtos:\n");
//     for (i = 0; i < 30; i++) {
//         printf("\nProduto %d\n", i + 1);
//         printf("Código: ");
//         scanf("%d", &codigo[i]);
//         printf("Quantidade: ");
//         scanf("%d", &quantidade[i]);
//         printf("Valor de compra: R$ ");
//         scanf("%f", &valor_compra[i]);
//         printf("Valor de venda: R$ ");
//         scanf("%f", &valor_venda[i]);
//     }

//     // Menu de opções
//     printf("\nSelecione uma opção:\n");
//     printf("1. Listar todos os produtos\n");
//     printf("2. Buscar produto por código\n");
//     printf("Opção: ");
//     scanf("%d", &opcao);

//     switch (opcao) {
//         case 1:
//             // Listar todos os produtos
//             printf("\nListagem de todos os produtos:\n");
//             printf("Código\tQuantidade\tCompra\tVenda\n");
//             printf("--------------------------------------------\n");
//             for (i = 0; i < 30; i++) {
//                 printf("%d\t%d\t\tR$ %.2f\tR$ %.2f\n",
//                        codigo[i], quantidade[i],
//                        valor_compra[i], valor_venda[i]);
//             }
//             break;

//         case 2:
//             // Buscar produto por código
//             printf("\nDigite o código do produto para buscar: ");
//             scanf("%d", &codigo_busca);

//             encontrado = 0;
//             for (i = 0; i < 30; i++) {
//                 if (codigo[i] == codigo_busca) {
//                     printf("\nProduto encontrado:\n");
//                     printf("Código: %d\n", codigo[i]);
//                     printf("Quantidade: %d\n", quantidade[i]);
//                     printf("Valor de compra: R$ %.2f\n", valor_compra[i]);
//                     printf("Valor de venda: R$ %.2f\n", valor_venda[i]);
//                     encontrado = 1;
//                     break;
//                 }
//             }

//             if (!encontrado) {
//                 printf("Produto com código %d não encontrado.\n", codigo_busca);
//             }
//             break;

//         default:
//             printf("Opção inválida!\n");
//             break;
//     }

//     return 0;
// }
