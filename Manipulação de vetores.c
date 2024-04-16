#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float a[5], b[5];

    for(int i = 0; i < 5; i++) {
        printf("Insira o %dº número real: ", i+1);
        scanf("%f", &a[i]);
    }

    for(int i = 0; i < 5; i++) {
        if(i == 0) {
            b[i] = a[i];
        } else if(i % 2 == 0) {
            b[i] = a[i] * 5;
        } else {
            b[i] = a[i] + 5;
        }
    }

    printf("Vetor a: ");
    for(int i = 0; i < 5; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");

    printf("Vetor b: ");
    for(int i = 0; i < 5; i++) {
        printf("%.2f ", b[i]);
    }
    printf("\n");

    return 0;
}