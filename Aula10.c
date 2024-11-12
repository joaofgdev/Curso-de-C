// exercicio 1 

#include <stdio.h>
#include <stdlib.h>

// void main () {
//     char nome[30];
//     printf("Escreva o seu nome:  \n");
//     scanf("%s", &nome);
//     printf("O seu nome é: %s", nome);
    
// }

// exercicio 2

// void main() {
//     int num1 = 30;
//     int num2 = 27;
    
//     int produto = num1 * num2 ;
    
//     printf("O prduto de %d e %d é : %d ", num1, num2, produto);
// }

// exercicio 3

// void main() {
//     int num1 = 5;
//     int num2 = 8;
//     int num3 = 12;
    
//     int media = num1 + num2 + num3 / 3;
    
//     printf("A media de %d, %d e %d é : %d ", num1, num2, num3, media);
    
// }

// Exercicio 4

// void main() {
//     int numero;
//     printf("escreva um numero inteiro: \n");
    
//     scanf("%d", &numero);


//     printf("O numero inteiro é: %d ", numero);
// }

// exercicio 5

// void main () {
//     float num1, num2;
    
//     printf("Escreva o primeiro numero real: \n");
//     scanf("%f", &num1);
    
//      printf("Escreva o segundo numero real: \n");
//     scanf("%f", &num2);   
    
//     printf("Os numeros inteiros sao: %.2f e %.2f ", num1, num2);
    
// }

// exercicio 6

// void main () {
    
//     int numero, antecessor, sucessor;
    
//     printf("Digite um numero inteiro : ");
//     scanf("%d", &numero);

//     antecessor = numero - 1;
//     sucessor = numero + 1;
    
//     printf("O numero é %d o seu antecessor é %d e o seu sucessor é %d ", numero, antecessor, sucessor);
    
// }

// exercicio 7 

// int main(){

//     float num1, num2, num3, media;

//     printf("Digite o primeiro numero: ");
//     scanf("%f", &num1);

//     printf("Digite o segundo numero: ");
//     scanf("%f", &num2);

//     printf("Digite o terceiro numero: ");
//     scanf("%f", &num3);

//     media = (num1, num2, num3) / 3;

//     printf("A media aritimetica dos numero é: %.2f \n", media);

// }

// exercicio 8

// int main(){
//     int num1, num2, resultado;

//     printf("Digite o primeiro número inteiro: \n");
//     scanf("%d", &num1);

//     printf("Digite o segundo número inteiro: \n");
//     scanf("%d", &num2);

//     resultado = num1 - num2;

//     printf("O resultado da subtração é : %d \n", resultado);
// }

// exercicio 9

// int main(){
//     float numero, resultado;

//     printf("Digite o numero real: ");
//     scanf("%f", &numero);

//     resultado = numero / 4;

//     printf("Um quarto do numero %.2f é:  %.2f\n", numero, resultado);

// }

// exercicio 10

int main() {
    char nome[100], endereco[200], telefone[20];

    // Entrada de dados
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin); 

    printf("Digite o seu endereço: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite o seu número de telefone: ");
    fgets(telefone, sizeof(telefone), stdin); 

    printf("\nO seu nome é: %s", nome);
    printf("O seu endereço é: %s", endereco);
    printf("O seu telefone é: %s", telefone);

   
}



