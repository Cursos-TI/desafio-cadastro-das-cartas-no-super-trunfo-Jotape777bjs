#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo_carta1[20], codigo_carta2[20];
    char nome_da_cidade1[20], nome_da_cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;

    printf("Escolha seu estado entre A e H: ");
    scanf(" %c", &estado1);

    printf("Ex: B02 \nEscolha o codigo da carta: ");
    scanf("%19s", codigo_carta1);

    printf("Digite qual sua cidade: ");
    scanf("%19s", nome_da_cidade1);

    printf("Qual sua população: ");
    scanf("%d", &populacao1);

    printf("Qual o tamanho da area: ");
    scanf("%f", &area1);

    printf("Qual seu PIB: ");
    scanf("%f", &PIB1);

    printf("Quantos pontos turisticos tem em sua cidade: ");
    scanf("%d", &pontos_turisticos1);

    printf("Primeira carta terminada!!, Vamos para a segunda carta!\n"); //coletei todas as informações da primeira carta

    printf("Escolha seu estado entre A e H: ");
    scanf(" %c", &estado2);

    printf("Ex: B02 \nEscolha o codigo da carta: ");
    scanf("%19s", codigo_carta2);

    printf("Digite qual sua cidade: ");
    scanf("%19s", nome_da_cidade2);

    printf("Qual sua população: ");
    scanf("%d", &populacao2);

    printf("Qual o tamanho da area: ");
    scanf("%f", &area2);

    printf("Qual seu PIB: ");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos tem em sua cidade: ");
    scanf("%d", &pontos_turisticos2);

    printf("Prontinho! Segunda carta finalizada, agora podemos ver qual é mais forte!! \n");
    
    
    
    
    
    
    
    
    
    return 0;
}