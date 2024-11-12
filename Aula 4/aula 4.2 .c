#include<stdio.h>

// exercicio 11

// int main() {
//     int numero;
//     int contador = 0;

//     while (1) {
//         printf("Digite um numero (0 para sair): ");
//         scanf("%d", &numero);  // Remova o \n do scanf

//         if (numero == 0) {
//             break;  // Sai do loop se o número for 0
//         }

//         if (numero >= 100 && numero <= 200) {
//             contador++;  // Incrementa o contador se o número estiver entre 100 e 200
//         }
//     }

//     printf("Quantidade de números entre 100 e 200: %d\n", contador);  // Imprime o total ao final
//     return 0;
// }

// exercicio 12

// int main() {
//     float populacaoA = 5000000;
//     float populacaoB = 7000000;
//     float taxaCrescimentoA = 0.03f;
//     float taxaCrescimentoB = 0.02f;
//     int anos = 0;


//     while (populacaoA <= populacaoB) {
//         populacaoA += populacaoA * taxaCrescimentoA;
//         populacaoB += populacaoB * taxaCrescimentoB;
//         anos++;
//     }


//     printf("Serão necessários %d anos para que a população do país A ultrapasse a população do país B.\n", anos);


// }

// exercicio 13 


// int main() {
//     int dividendo, divisor, quociente = 0, resto;

//     // Leitura dos números
//     printf("Digite o dividendo: ");
//     scanf("%d", &dividendo);
//     printf("Digite o divisor: ");
//     scanf("%d", &divisor);

//     // Inicializa o resto com o valor do dividendo
//     resto = dividendo;

//     // Subtrações sucessivas
//     while (resto >= divisor) {
//         resto -= divisor;
//         quociente++;
//     }

//     // Imprime o resultado
//     printf("Quociente: %d\n", quociente);
//     printf("Resto: %d\n", resto);

//     return 0;
// }

// exercicio 14


// int main() {
//     int numero_pedido;
//     int dia, mes, ano;
//     float preco_unitario;
//     int quantidade;
//     float valor_total = 0;

//     while (1) {
//         printf("Digite o número do pedido (0 para sair): ");
//         scanf("%d", &numero_pedido);

//         if (numero_pedido == 0) {
//             break;
//         }

//         printf("Digite a data do pedido (dia mes ano): ");
//         scanf("%d %d %d", &dia, &mes, &ano);

//         printf("Digite o preço unitário: ");
//         scanf("%f", &preco_unitario);

//         printf("Digite a quantidade: ");
//         scanf("%d", &quantidade);

//         valor_total += preco_unitario * quantidade;
//     }

//     printf("Valor total da compra: %.2f\n", valor_total);

// }

// exercicio 15 

// int main() {
//     int time, local, salario;
//     int totalFluminense = 0, totalBotafogo = 0, totalVasco = 0, totalFlamengo = 0, totalOutros = 0;
//     int totalRJOutros = 0, totalNiteroiFluminense = 0;
//     int somaSalarioBotafogo = 0, contadorBotafogo = 0;
//     int continuar = 1;

//     while (continuar) {
//         printf("Qual o seu time de coração?\n");
//         printf("1-Fluminense\n2-Botafogo\n3-Vasco\n4-Flamengo\n5-Outros\n");
//         scanf("%d", &time);

//         printf("Onde você mora?\n");
//         printf("1-RJ\n2-Niterói\n3-Outros\n");
//         scanf("%d", &local);

//         printf("Qual o seu salário?\n");
//         scanf("%d", &salario);

//         switch (time) {
//             case 1: totalFluminense++; break;
//             case 2: totalBotafogo++; somaSalarioBotafogo += salario; contadorBotafogo++; break;
//             case 3: totalVasco++; break;
//             case 4: totalFlamengo++; break;
//             case 5: totalOutros++; break;
//         }

//         if (local == 1 && time == 5) {
//             totalRJOutros++;
//         }

//         if (local == 2 && time == 1) {
//             totalNiteroiFluminense++;
//         }

//         printf("Deseja continuar? (1-Sim, 0-Não): ");
//         scanf("%d", &continuar);
//     }

//     printf("Número de torcedores por clube:\n");
//     printf("Fluminense: %d\n", totalFluminense);
//     printf("Botafogo: %d\n", totalBotafogo);
//     printf("Vasco: %d\n", totalVasco);
//     printf("Flamengo: %d\n", totalFlamengo);
//     printf("Outros: %d\n", totalOutros);

//     if (contadorBotafogo > 0) {
//         printf("Média salarial dos torcedores do Botafogo: %.2f\n", (float)somaSalarioBotafogo / contadorBotafogo);
//     } else {
//         printf("Média salarial dos torcedores do Botafogo: N/A\n");
//     }

//     printf("Número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes: %d\n", totalRJOutros);
//     printf("Número de pessoas de Niterói torcedoras do Fluminense: %d\n", totalNiteroiFluminense);

//     return 0;
// }

// exercicio 16

// int main() {
//     float renda_pessoal, renda_familiar, gasto_alimentacao, gasto_outras_despesas;
//     int total_alunos = 0, alunos_gasto_acima_200 = 0, alunos_renda_pessoal_maior = 0;
//     float soma_percentual_alimentacao = 0, soma_percentual_outras_despesas = 0;

//     while (1) {
//         printf("Digite a renda pessoal (0 para sair): ");
//         scanf("%f", &renda_pessoal);

//         if (renda_pessoal == 0) {
//             break;
//         }

//         printf("Digite a renda familiar: ");
//         scanf("%f", &renda_familiar);

//         printf("Digite o total gasto com alimentação: ");
//         scanf("%f", &gasto_alimentacao);

//         printf("Digite o total gasto com outras despesas: ");
//         scanf("%f", &gasto_outras_despesas);

//         total_alunos++;

//         if (gasto_outras_despesas > 200) {
//             alunos_gasto_acima_200++;
//         }

//         if (renda_pessoal > renda_familiar) {
//             alunos_renda_pessoal_maior++;
//         }

//         soma_percentual_alimentacao += (gasto_alimentacao / renda_pessoal) * 100;
//         soma_percentual_outras_despesas += (gasto_outras_despesas / renda_pessoal) * 100;
//     }

//     if (total_alunos > 0) {
//         printf("Porcentagem dos alunos que gasta acima de R$200,00 com outras despesas: %.2f%%\n", 
//                (float)alunos_gasto_acima_200 / total_alunos * 100);
//         printf("Número de alunos com renda pessoal maior que a renda familiar: %d\n", alunos_renda_pessoal_maior);
//         printf("Porcentagem média gasta com alimentação em relação à renda pessoal: %.2f%%\n", 
//                soma_percentual_alimentacao / total_alunos);
//         printf("Porcentagem média gasta com outras despesas em relação à renda pessoal: %.2f%%\n", 
//                soma_percentual_outras_despesas / total_alunos);
//     } else {
//         printf("Nenhum dado foi inserido.\n");
//     }

//     return 0;
// }

// exercicio 17 

// int main() {
//     int numero_carteira, numero_multas, maior_numero_multas = 0, carteira_maior_multas = 0;
//     float valor_multa, total_arrecadado = 0, valor_divida;

//     while (1) {
//         printf("Digite o número da carteira de motorista (0 para sair): ");
//         scanf("%d", &numero_carteira);

//         if (numero_carteira == 0) {
//             break;
//         }

//         printf("Digite o número de multas: ");
//         scanf("%d", &numero_multas);

//         valor_divida = 0;
//         for (int i = 0; i < numero_multas; i++) {
//             printf("Digite o valor da multa %d: ", i + 1);
//             scanf("%f", &valor_multa);
//             valor_divida += valor_multa;
//         }

//         printf("Valor da dívida para a carteira %d: %.2f\n", numero_carteira, valor_divida);
//         total_arrecadado += valor_divida;

//         if (numero_multas > maior_numero_multas) {
//             maior_numero_multas = numero_multas;
//             carteira_maior_multas = numero_carteira;
//         }
//     }

//     printf("Total de recursos arrecadados: %.2f\n", total_arrecadado);
//     printf("Número da carteira com maior número de multas: %d\n", carteira_maior_multas);

//     return 0;
// }

// exercicio 18

// 

// exercicio 19 

// 

// exercicio 20

#include <string.h>

int main() {
    char nome[50];
    char sexo;
    int idade, total_idade = 0, contador_atletas = 0;
    float peso, altura;
    float maior_altura_feminina = 0;
    float maior_peso_masculino = 0;
    char nome_maior_altura_feminina[50];
    char nome_maior_peso_masculino[50];

    while (1) {
        printf("Digite o nome do atleta (ou @ para sair): ");
        scanf("%s", nome);

        if (strcmp(nome, "@") == 0) {
            break;
        }

        printf("Digite o sexo do atleta (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite a idade do atleta: ");
        scanf("%d", &idade);

        printf("Digite o peso do atleta: ");
        scanf("%f", &peso);

        printf("Digite a altura do atleta: ");
        scanf("%f", &altura);

        contador_atletas++;
        total_idade += idade;

        if (sexo == 'F' || sexo == 'f') {
            if (altura > maior_altura_feminina) {
                maior_altura_feminina = altura;
                strcpy(nome_maior_altura_feminina, nome);
            }
        } else if (sexo == 'M' || sexo == 'm') {
            if (peso > maior_peso_masculino) {
                maior_peso_masculino = peso;
                strcpy(nome_maior_peso_masculino, nome);
            }
        }
    }

    if (contador_atletas > 0) {
        printf("A atleta do sexo feminino mais alta é: %s com %.2f metros\n", nome_maior_altura_feminina, maior_altura_feminina);
        printf("O atleta do sexo masculino mais pesado é: %s com %.2f kg\n", nome_maior_peso_masculino, maior_peso_masculino);
        printf("A média de idade dos atletas é: %.2f anos\n", (float)total_idade / contador_atletas);
    } else {
        printf("Nenhum dado de atleta foi inserido.\n");
    }

    return 0;
}