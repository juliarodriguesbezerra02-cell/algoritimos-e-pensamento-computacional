#include <stdio.h>

int main() {

    float limite;

printf("Digite o limite de temperatura: ");
scanf("%f", &limite);

float temperatura;
int consecutivas = 0;
int quantidade = 0;
int acima = 0;
float soma = 0;
float maior;
float menor;

while (consecutivas < 3) {

   printf("Digite a temperatura: ");

    if (scanf("%f", &temperatura) != 1) {
        printf("Entrada invalida! Digite um numero.\n");

        while (getchar() != '\n');

        continue;
    }

quantidade++;
soma = soma + temperatura;

if (quantidade == 1) {
    maior = temperatura;
    menor = temperatura;
}
if (temperatura > maior) {
    maior = temperatura;
}

if (temperatura < menor) {
    menor = temperatura;
}

if (temperatura > limite) {
    consecutivas++;
    acima++;
} else {
    consecutivas = 0;
}
}
float media = soma / quantidade;
float porcentagem = ((float)acima / quantidade) * 100;

printf("\n--- RELATORIO FINAL ---\n");
printf("Quantidade de temperaturas: %d\n", quantidade);
printf("Maior temperatura: %.2f\n", maior);
printf("Menor temperatura: %.2f\n", menor);
printf("Media das temperaturas: %.2f\n", media);
printf("Temperaturas acima do limite: %d\n", acima);
printf("Porcentagem acima do limite: %.2f%%\n", porcentagem);
    
  return 0;
}
