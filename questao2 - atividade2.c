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
        printf("Sexo inv�lido!\n");
        return 0;
    }

    diferenca_peso = peso_atual - peso_ideal;

    printf("\n%s, seu peso ideal �: %.2f kg\n", nome, peso_ideal);
    printf("Voc� est� com %.2f kg de diferen�a do peso ideal.\n", diferenca_peso);

    if (diferenca_peso > 0) {
        printf("Voc� est� acima do peso ideal!\n");
    } else if (diferenca_peso < 0) {
        printf("Voc� est� abaixo do peso ideal!\n");
    } else {
        printf("Voc� est� no peso ideal!\n");
    }

    return 0;
}
