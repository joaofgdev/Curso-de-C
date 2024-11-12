// exercicio 9 

// int main() {
//     int conjunto1[10], conjunto2[10];
//     int i, j;

//     // Lendo os elementos do primeiro conjunto
//     printf("Digite 10 elementos para o primeiro conjunto:\n");
//     for (i = 0; i < 10; i++) {
//         printf("Elemento %d: ", i + 1);
//         scanf("%d", &conjunto1[i]);
//     }

//     // Lendo os elementos do segundo conjunto
//     printf("\nDigite 10 elementos para o segundo conjunto:\n");
//     for (i = 0; i < 10; i++) {
//         printf("Elemento %d: ", i + 1);
//         scanf("%d", &conjunto2[i]);
//     }

//     // Listando os elementos comuns
//     printf("\nElementos comuns aos dois conjuntos:\n");
//     for (i = 0; i < 10; i++) {
//         for (j = 0; j < 10; j++) {
//             if (conjunto1[i] == conjunto2[j]) {
//                 printf("%d ", conjunto1[i]);
//                 break;  // Para evitar a impressão duplicada
//             }
//         }
//     }

//     printf("\n");

//     return 0;
// }

// exercicio 10 

// int fatorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1; // O fatorial de 0 e 1 é 1
//     }
//     int resultado = 1;
//     for (int i = 2; i <= n; i++) {
//         resultado *= i; // Multiplica os números de 2 até n
//     }
//     return resultado;
// }

// int main() {
//     int vet[10], w[10];

//     // Lendo os elementos do vetor vet
//     printf("Digite 10 elementos para o vetor:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Elemento %d: ", i + 1);
//         scanf("%d", &vet[i]);
//     }

//     // Calculando os fatoriais e armazenando em w
//     for (int i = 0; i < 10; i++) {
//         w[i] = fatorial(vet[i]);
//     }

//     // Imprimindo os resultados
//     printf("\nElementos do vetor vet e seus fatoriais em w:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("vet[%d] = %d, w[%d] = %d\n", i, vet[i], i, w[i]);
//     }

//     return 0;
// }

// exercicio 11 

// int main() {
//     int vetor[100];
//     int i, maior, menor, contador_pares = 0;
//     float soma = 0.0;

//     // Lendo os elementos do vetor
//     printf("Digite 100 elementos inteiros:\n");
//     for (i = 0; i < 100; i++) {
//         printf("Elemento %d: ", i + 1);
//         scanf("%d", &vetor[i]);

//         // Calculando a soma para a média
//         soma += vetor[i];

//         // Verificando o maior e o menor elemento
//         if (i == 0) { // Inicializa maior e menor no primeiro elemento
//             maior = vetor[i];
//             menor = vetor[i];
//         } else {
//             if (vetor[i] > maior) {
//                 maior = vetor[i];
//             }
//             if (vetor[i] < menor) {
//                 menor = vetor[i];
//             }
//         }

//         // Contando números pares
//         if (vetor[i] % 2 == 0) {
//             contador_pares++;
//         }
//     }

//     // Calculando a média
//     float media = soma / 100;

//     // Calculando o percentual de números pares
//     float percentual_pares = (contador_pares / 100.0) * 100;

//     // Imprimindo os resultados
//     printf("\nMaior elemento: %d\n", maior);
//     printf("Menor elemento: %d\n", menor);
//     printf("Percentual de números pares: %.2f%%\n", percentual_pares);
//     printf("Média dos elementos: %.2f\n", media);

//     return 0;
// }

// exercicio 12 


// #define NUM_MESAS 30
// #define LUGARES_POR_MESA 5
// #define TOTAL_LUGARES (NUM_MESAS * LUGARES_POR_MESA)

// int main() {
//     int mesas[NUM_MESAS];  // Array para armazenar os lugares disponíveis em cada mesa
//     int codigo_mesa, lugares_desejados;
//     int lugares_ocupados = 0;  // Contador de lugares ocupados

//     // Inicializa todas as mesas com 5 lugares disponíveis
//     for (int i = 0; i < NUM_MESAS; i++) {
//         mesas[i] = LUGARES_POR_MESA;
//     }

//     printf("Sistema de reserva de mesas\n");
//     printf("Mesas disponíveis: 100 a 129, cada uma com 5 lugares\n");

//     while (1) {
//         // Exibe o total de lugares ocupados e o número máximo de lugares
//         printf("\nLugares ocupados: %d/%d\n", lugares_ocupados, TOTAL_LUGARES);

//         // Pergunta o código da mesa
//         printf("Digite o código da mesa (100 a 129) ou 0 para sair: ");
//         scanf("%d", &codigo_mesa);

//         // Verifica se o código é 0 para encerrar o programa
//         if (codigo_mesa == 0) {
//             printf("Encerrando o sistema de reservas.\n");
//             break;
//         }

//         // Valida o código da mesa
//         if (codigo_mesa < 100 || codigo_mesa > 129) {
//             printf("Código de mesa inválido. Tente novamente.\n");
//             continue;
//         }

//         // Converte o código da mesa para o índice do array
//         int indice_mesa = codigo_mesa - 100;

//         // Pergunta a quantidade de lugares desejados
//         printf("Digite a quantidade de lugares desejados: ");
//         scanf("%d", &lugares_desejados);

//         // Verifica se há lugares suficientes na mesa
//         if (mesas[indice_mesa] >= lugares_desejados) {
//             // Atualiza os lugares disponíveis na mesa e o total de lugares ocupados
//             mesas[indice_mesa] -= lugares_desejados;
//             lugares_ocupados += lugares_desejados;
//             printf("Reserva realizada com sucesso! %d lugares reservados na mesa %d.\n", lugares_desejados, codigo_mesa);
//         } else {
//             printf("Reserva não realizada. A mesa %d possui apenas %d lugares disponíveis.\n", codigo_mesa, mesas[indice_mesa]);
//         }

//         // Verifica se todos os lugares foram ocupados
//         if (lugares_ocupados == TOTAL_LUGARES) {
//             printf("Todas as mesas estão ocupadas. Encerrando o sistema de reservas.\n");
//             break;
//         }
//     }

//     return 0;
// }

// exercicio 13


// #define NUM_VOOS 10

// int main() {
//     int voos[NUM_VOOS];  // Array para armazenar os lugares disponíveis em cada voo
//     int numero_voo, identidade_cliente, lugares_disponiveis;

//     // Cadastrando os 10 voos e definindo a quantidade de lugares disponíveis para cada um
//     printf("Cadastro de voos:\n");
//     for (int i = 0; i < NUM_VOOS; i++) {
//         printf("Digite a quantidade de lugares disponíveis para o voo %d: ", i + 1);
//         scanf("%d", &voos[i]);
//     }

//     printf("\nSistema de reservas de passagens aéreas iniciado.\n");

//     while (1) {
//         // Pedir o número do voo desejado pelo cliente
//         printf("\nDigite o número do voo desejado (1 a 10) ou 0 para encerrar: ");
//         scanf("%d", &numero_voo);

//         // Verifica se o código do voo é 0 para encerrar o programa
//         if (numero_voo == 0) {
//             printf("Encerrando o sistema de reservas.\n");
//             break;
//         }

//         // Valida o número do voo
//         if (numero_voo < 1 || numero_voo > 10) {
//             printf("Número de voo inválido. Tente novamente.\n");
//             continue;
//         }

//         // Pedir o número da identidade do cliente
//         printf("Digite o número da carteira de identidade do cliente: ");
//         scanf("%d", &identidade_cliente);

//         // Verifica se há lugares disponíveis no voo desejado
//         if (voos[numero_voo - 1] > 0) {
//             // Atualiza o número de lugares disponíveis e confirma a reserva
//             voos[numero_voo - 1]--;
//             printf("Reserva confirmada! Cliente: %d, Voo: %d\n", identidade_cliente, numero_voo);
//         } else {
//             // Caso não haja lugares disponíveis
//             printf("Desculpe, não há lugares disponíveis no voo %d.\n", numero_voo);
//         }
//     }

//     return 0;
// }