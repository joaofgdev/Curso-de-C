#include <stdio.h>

// exercicio 1

// int main() {
//     int num1, num2, soma;

//     printf("Digite o primeiro valor: ");
//     scanf("%d", &num1);
    
//     printf("Digite o segundo valor: ");
//     scanf("%d", &num2);


//     soma = num1 + num2;

//     if (soma > 10) {
//         printf("A soma é: %d\n", soma);
//     }

// }

// exercicio 2 

// int main() {
//     int num1, num2, soma;

   
//     printf("Digite o primeiro valor: ");
//     scanf("%d", &num1);
    
//     printf("Digite o segundo valor: ");
//     scanf("%d", &num2);

   
//     soma = num1 + num2;

   
//     if (soma > 20) {
//         soma += 8;
//         printf("Resultado final (soma > 20): %d\n", soma);
//     } else {
//         soma -= 5; 
//         printf("Resultado final (soma <= 20): %d\n", soma);
//     }


// }

// exercicio 3

// int main() {
//     int num;
//     printf("Digite um número: ");
//     scanf("%d", &num);

//     if (num % 3 == 0) {
//         printf("É múltiplo de 3\n");
//     } else {
//         printf("Não é múltiplo de 3\n");
//     }

// }

// exercicio 4 

// int main() {
//     int num;

//     printf("Digite um número: ");
//     scanf("%d", &num);

//     if (num % 5 == 0) {
//         printf("O número é divisível por 5\n");
//     } else {
//         printf("O número não é divisível por 5\n");
//     }


// }

// exercicio 5

// int main() {
//     int num;

//     printf("Digite um número: ");
//     scanf("%d", &num);

//     if (num % 3 == 0 && num % 7 == 0) {
//         printf("O número é divisível por 3 e por 7\n");
//     } else {
//         printf("O número não é divisível por 3 e por 7\n");
//     }

// }

// exercicio 6 

int main() {
    float salarioBruto, prestacao, limite;

    printf("Digite o salário bruto: ");
    scanf("%f", &salarioBruto);
    
    printf("Digite o valor da prestação: ");
    scanf("%f", &prestacao);

    limite = salarioBruto * 0.30;

    if (prestacao <= limite) {
        printf("Empréstimo pode ser concedido.\n");
    } else {
        printf("Empréstimo não pode ser concedido.\n");
    }

}

