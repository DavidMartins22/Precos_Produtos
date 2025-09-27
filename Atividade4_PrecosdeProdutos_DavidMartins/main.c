#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura a localidade para Português

    float precos[10]; // Vetor com os precos dos produtos
    int n = 10; // Quantidade de produtos
    int i, j; // Contadores
    float aux; // Variavel auxiliar para troca de precos

    // ---------------------
    // Entrada de dados do usuario
    // ---------------------
    printf("=== Precos de Produtos do Supermercado ===\n");
    printf("Digite os precos de 10 produtos: \n");
    for (i = 0; i < n; i++) {
        printf("Produto %d: R$", i + 1);
        scanf("%f", &precos[i]);
    }

    // ---------------------
    // Exibir precos originais
    // ---------------------
    printf("\nPrecos originais:\n");
    for (i = 0; i < n; i++) {
        printf("R$ %.2f\n", precos[i]);
    }
    printf("\n\n");

    // ---------------------
    // Ordenacao dos precos em ordem crescente (Bubble Sort)
    // ---------------------
    float crescente[10];
    for (i = 0; i < n; i++) {
        crescente[i] = precos[i];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (crescente[j] > crescente[j + 1]) {
                aux = crescente[j];
                crescente[j] = crescente[j + 1];
                crescente[j + 1] = aux;
            }
        }
    }

    printf("Precos em ordem Crescente:\n");
    for (i = 0; i < n; i++) {
        printf("R$ %.2f\n", crescente[i]);
    }

    printf("\n\n");

    // ---------------------
    // Ordenacao dos precos em ordem decrescente (Bubble Sort)
    // ---------------------
    float decrescente[10];
    for (i = 0; i < n; i++) {
        decrescente[i] = precos[i];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (decrescente[j] < decrescente[j + 1]) {
                aux = decrescente[j];
                decrescente[j] = decrescente[j + 1];
                decrescente[j + 1] = aux;
            }
        }
    }

    printf("Precos em ordem Decrescente:\n");
    for (i = 0; i < n; i++) {
        printf("R$ %.2f\n", decrescente[i]);
    } 
    printf("\n\n");

    return 0;
}