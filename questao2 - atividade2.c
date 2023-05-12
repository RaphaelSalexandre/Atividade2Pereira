#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50], sexo;
    float peso_atual, idade, altura, peso_ideal, diferenca_peso;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o seu peso atual (em kg): ");
    scanf("%f", &peso_atual);

    printf("Digite o sua idade: ");
    scanf("%f", &idade);

    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o seu sexo (Masculino/Feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (80 * altura) - 72;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (55 * altura) - 60.2;
    } else {
        printf("Sexo inválido!\n");
        return 0;
    }

    diferenca_peso = peso_atual - peso_ideal;

    printf("\n%s, seu peso ideal é: %.2f kg\n", nome, peso_ideal);
    printf("Você está com %.2f kg de diferença do peso ideal.\n", diferenca_peso);

    if (diferenca_peso > 0) {
        printf("Você está acima do peso ideal!\n");
    } else if (diferenca_peso < 0) {
        printf("Você está abaixo do peso ideal!\n");
    } else {
        printf("Você está no peso ideal!\n");
    }

    return 0;
}
