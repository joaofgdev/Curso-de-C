// Atividade 1 - Calcular dobro de 3 números inteiros

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>

// int calcular_dobro(int num){
//      return num * 2;
// }

// int main() {
//     int num1, num2, num3;

//     printf("Digite um número: ");
//     scanf("%d", &num1);
//     printf("Digite um número: ");
//     scanf("%d", &num2);
//     printf("Digite um número: ");
//     scanf("%d", &num3);
    

//     printf("O dobro do número um é: %d\n", calcular_dobro(num1));
//     printf("O dobro do número um é: %d\n", calcular_dobro(num2));
//     printf("O dobro do número um é: %d\n", calcular_dobro(num3));

//     return 0;
}


// Atividade 2 - Calcular média usando função

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>

// float calcular_media(float prova1, float prova2, float prova3){
//         return (prova1 + prova2 + prova3) / 3;
// }

// int main() {
//     float prova1, prova2, prova3;
//     float media;


//     printf("Qual sua primeira nota: ");
//     scanf("%f", &prova1);
//     printf("Qual sua segunda nota: ");
//     scanf("%f", &prova2);
//     printf("Qual sua terceira nota: ");
//     scanf("%f", &prova3);
    
//     media = calcular_media(prova1, prova2, prova3);

//     printf("A sua média é: %.2f", media);

//     return 0;
// }


// Atividade 3 - Ângulo para radianos

// #include <stdio.h>
// #define PI 3.14

// double converter_para_radianos(double ang) {
//     return (ang * PI) / 180;
// }

// int main() {
//     double angulo_graus, angulo_radianos;

//     printf("Digite o valor do ângulo em graus: ");
//     scanf("%lf", &angulo_graus);

//     angulo_radianos = converter_para_radianos(angulo_graus);

//     printf("O ângulo em radianos é: %.3f\n", angulo_radianos);

//     return 0;
// }


// Atividade 4 - Fatorial

// #include <stdio.h>

// int calcular_fatorial(int n) {
//     if (n == 0 || n == 1){
//         return 1;
//     }else{
//         return n * calcular_fatorial(n - 1);
//         }
//     }

// int main() {
//     int numero;

//     printf("Digite um número para calcular fatorial: ");
//     scanf("%d", &numero);

// int fatorial = calcular_fatorial(numero);

//     printf("O fatorial de %d é: %d\n", numero, fatorial);

//     return 0;
// }


// Atividade 5 - Verificar número primo

// #include <stdio.h>

// int verificar_primo(int n) {
//     if (n <= 1) {
//         return 0;
//     }
    
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             return 0;
//         }
//     }
//     return 1; 
// }

// int main() {
//     int numero;

//     printf("Digite um número para verificar se é primo: ");
//     scanf("%d", &numero);


//     if (verificar_primo(numero)) {
//         printf("%d é um número primo.\n", numero);
//     } else {
//         printf("%d não é um número primo.\n", numero);
//     }

//     return 0;
// }


// Atividade 13 - Faça um programa que permita entrar com o valor de um produto e o percentual de desconto e
// imprimir o novo valor com base no percentual informado.

// #include <stdio.h>

// float calcular_desconto(float valor, float percentual) {
//     return valor - (valor * (percentual / 100));
// }

// int main() {
//     float valor_produto, percentual_desconto, valor_com_desconto;

//     printf("Digite o valor do produto: R$ ");
//     scanf("%f", &valor_produto);

//     printf("Digite o percentual de desconto: ");
//     scanf("%f", &percentual_desconto);

//     valor_com_desconto = calcular_desconto(valor_produto, percentual_desconto);

//     printf("O valor do produto com %.2f%% de desconto é: R$ %.2f\n", percentual_desconto, valor_com_desconto);

//     return 0;
// }


// Atividade 14 - Divisor e dividendo

// #include <stdio.h>

// int contar_divisoes(int dividendo, int divisor) {
//     int contador = 0;

//     if (divisor > dividendo) {
//         return -1;
//     }

//     while (dividendo % divisor == 0) {
//         dividendo = dividendo / divisor;
//         contador++;
//     }

//     return contador;
// }

// int main() {
//     int dividendo, divisor, resultado;

//     printf("Digite o dividendo: ");
//     scanf("%d", &dividendo);

//     printf("Digite o divisor: ");
//     scanf("%d", &divisor);

//     resultado = contar_divisoes(dividendo, divisor);

//     if (resultado == -1) {
//         printf("Erro: o divisor é maior que o dividendo.\n");
//     } else {
//         printf("O dividendo %d é divisível %d vezes pelo divisor %d.\n", dividendo, resultado, divisor);
//     }

//     return 0;
// }



// Atividade 15 - Vogal ou consoante

// #include <stdio.h>
// #include <ctype.h>

// const char* verificar_vogal_ou_consoante(char letra) {
//     letra = tolower(letra);

//     if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
//         return "vogal";
//     } else if (letra >= 'a' && letra <= 'z') {
//         return "consoante";
//     } else {
//         return "não é uma letra válida";
//     }
// }

// int main() {
//     char letra;

//     printf("Digite um caractere: ");
//     scanf("%c", &letra);

//     printf("O caractere '%c' é uma %s.\n", letra, verificar_vogal_ou_consoante(letra));

//     return 0;
// }				


//Atividade 16 - Raiz exata ou não

#include <stdio.h>
#include <math.h>

int raiz_exata(int numero) {
    int raiz = sqrt(numero);
    if (raiz * raiz == numero) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (raiz_exata(numero)) {
        printf("A raiz quadrada de %d é exata.\n", numero);
    } else {
        printf("A raiz quadrada de %d não é exata.\n", numero);
    }

    return 0;
}