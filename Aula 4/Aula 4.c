// exercicio 1 

// Aula de loopings de repetiçãp

 #include <stdio.h>

// int main(){
//     for (int i = 1; i <= 100 ; i++){
//         printf("%d\n", i);
//     }
// }

// exercicio 2

// int main(){

//     for(int i = 100; i >= 1 ; i--){
//         if(i % 2 == 0){
//             printf("%d\n", i);
//         }
//     }
// }


// exercicio 3 

// int main(){
//     for(int i = 1; i <= 500; i ++ ){
//         if(i % 5 == 0){
//             printf("%d\n", i);
//         }
        
//     }
// }

// exercicio 4 

// int main(){
//     char nome[50];
//     int idade;
//     char sexo;
//     int i ;

//     for (i = 1; i <= 20 ; i++){
//         printf("Pessoa %d\n", i);

//         printf("Digite o nome: ");
//         scanf("%s", &nome);

//         printf("Digite a idade: ");
//         scanf("%d", &idade);

//         printf("Digite o sexo: ");
//         scanf(" %c", &sexo);

//         if ((sexo == "M" || sexo == "m" || sexo == "masculino") && idade > 21){
//             printf("Pessoa %d é maior de idade e é do sexo masculino\n", i);


//         }
//     }

    


// }

// exercicio 5 

// int main() {
//     int i ;

//     for (i = 1; i <= 20; i++){
//         printf("%d\n", i);
//     }
// }

// exercicio 6 

// int main(){
//     int termio1 = 1, termo2 = 1, proximoTermo;
//     int i ;

//     printf("%d\n", termio1);
//     printf("%d\n", termo2);

//     for(i = 3; i <= 20; i++){
//         proximoTermo = termio1 + termo2;
//         printf("%d\n", proximoTermo);

//         termio1 = termo2;
//         termo2 = proximoTermo;
//     }
// }

// exercicio 7 

// int main() {
//     char nome[50];
//     float nota1, nota2, media, mediaGeral = 0;  
//     int i;

//     for (i = 1; i <= 15; i++) {
//         printf("Aluno %d\n", i);  

//         printf("Digite o nome do aluno: ");
//         scanf("%s", nome);  

//         printf("Digite a nota da primeira prova: ");
//         scanf("%f", &nota1);

//         printf("Digite a nota da segunda prova: ");
//         scanf("%f", &nota2);

//         media = (nota1 + nota2) / 2;

//         mediaGeral += media;

       
//         printf("Nome: %s\n", nome);
//         printf("Nota Prova 1: %.2f\n", nota1);
//         printf("Nota Prova 2: %.2f\n", nota2);
//         printf("Média: %.2f\n\n", media);
//     }

   
//     mediaGeral /= 15;
//     printf("Média geral da turma: %.2f\n", mediaGeral);

// }

// exercicio 8

// int main(){
//     int salario, valorApagar;
//     int i;

//     printf("Escreva o seu salario: ");
//     scanf("%d\n", salario);


//     for(i = 1; i <=10 ; i++){
//         if(salario >= 1300 && salario <= 2300){
//             valorApagar = salario * 0.10;
//             printf("Voce vai pagar: %d\n", valorApagar);
//         }else if(salario > 2300){
//             valorApagar = salario * 0.15;
//             printf("Voce vai pagar: %d\n", valorApagar);
//         }else{
//             printf("Voce não preicisa pagar imposto");
//         }
//     }
// }

// exercicio 9 

// int main() {
//     int idade, opiniao;
//     int totalExcelente = 0, totalRegular = 0, totalBom = 0;
//     int somaIdadesExcelente = 0;
//     int totalEspectadores = 20;

//     for (int i = 0; i < totalEspectadores; i++) {
//         printf("Espectador %d\n", i + 1);
//         printf("Digite a idade: ");
//         scanf("%d", &idade);
//         printf("Digite a opinião (3 - Excelente, 2 - Bom, 1 - Regular): ");
//         scanf("%d", &opiniao);

//         if (opiniao == 3) {
//             somaIdadesExcelente += idade;
//             totalExcelente++;
//         } else if (opiniao == 2) {
//             totalBom++;
//         } else if (opiniao == 1) {
//             totalRegular++;
//         }
//     }

//     // Calcula a média das idades das pessoas que responderam excelente
//     float mediaIdadesExcelente = (totalExcelente > 0) ? (float)somaIdadesExcelente / totalExcelente : 0;

//     // Calcula a percentagem de pessoas que responderam bom
//     float percentagemBom = (float)totalBom / totalEspectadores * 100;

//     // Imprime os resultados
//     printf("Média das idades das pessoas que responderam excelente: %.2f\n", mediaIdadesExcelente);
//     printf("Quantidade de pessoas que responderam regular: %d\n", totalRegular);
//     printf("Percentagem de pessoas que responderam bom: %.2f%%\n", percentagemBom);

// }

// exercicio 10

// int main() {
//     int numTimes = 30;
//     int numJogadores = 12;
//     int idade[numTimes][numJogadores];
//     float peso[numTimes][numJogadores];
//     float pesoTotalGeral = 0;
//     int idadeTotalGeral = 0;
//     int totalJogadores = numTimes * numJogadores;

//     for (int i = 0; i < numTimes; i++) {
//         printf("Time %d\n", i + 1);
//         for (int j = 0; j < numJogadores; j++) {
//             printf("Jogador %d\n", j + 1);
//             printf("Digite a idade: ");
//             scanf("%d", &idade[i][j]);
//             printf("Digite o peso: ");
//             scanf("%f", &peso[i][j]);
//         }
//     }

//     for (int i = 0; i < numTimes; i++) {
//         float pesoTotalTime = 0;
//         int idadeTotalTime = 0;
//         float pesoMedioTime;
//         float idadeMediaTime;
//         float maisPesado = peso[i][0];
//         int maisJovem = idade[i][0];

//         for (int j = 0; j < numJogadores; j++) {
//             pesoTotalTime += peso[i][j];
//             idadeTotalTime += idade[i][j];

//             if (peso[i][j] > maisPesado) {
//                 maisPesado = peso[i][j];
//             }
//             if (idade[i][j] < maisJovem) {
//                 maisJovem = idade[i][j];
//             }
//         }

//         pesoMedioTime = pesoTotalTime / numJogadores;
//         idadeMediaTime = (float)idadeTotalTime / numJogadores;

//         pesoTotalGeral += pesoTotalTime;
//         idadeTotalGeral += idadeTotalTime;

//         printf("Time %d - Peso médio: %.2f, Idade média: %.2f\n", i + 1, pesoMedioTime, idadeMediaTime);
//         printf("Jogador mais pesado: %.2f kg\n", maisPesado);
//         printf("Jogador mais jovem: %d anos\n", maisJovem);
//     }


//     float pesoMedioGeral = pesoTotalGeral / totalJogadores;
//     float idadeMediaGeral = (float)idadeTotalGeral / totalJogadores;

//     printf("Peso médio de todos os participantes: %.2f\n", pesoMedioGeral);
//     printf("Idade média de todos os participantes: %.2f\n", idadeMediaGeral);

// }

// resto das atividades no arquivo 2




