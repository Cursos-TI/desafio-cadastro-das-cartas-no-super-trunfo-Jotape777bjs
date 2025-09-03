#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo_carta1[20], codigo_carta2[20];
    char nome_da_cidade1[20], nome_da_cidade2[20];
    unsigned long int populacao1, populacao2;//esse modificador para aumentar a capacidade do int e remover as possibilidade de numeros negativos
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2; //variaveis que podem ser usadas futuramente
    
    
    printf("Bem vindo ao criador de cartas Super Trunfo de Cidades Brasileiras!\n");
    printf("Vamos começar a criar suas cartas!\n");
    //coletando todas as informações necessaria das cartas do jogador
    printf("Escolha seu estado entre A e H: ");
    scanf(" %c", &estado1);

    printf("Ex: B02 \nEscolha o codigo da carta: ");
    scanf("%19s", codigo_carta1);

    printf("Digite qual sua cidade: ");
    scanf("%19s", nome_da_cidade1);

    printf("Qual sua população: ");
    scanf("%lu", &populacao1);

    printf("Qual o tamanho da area: ");
    scanf("%f", &area1);

    printf("Qual seu PIB: ");
    scanf("%f", &PIB1);

    printf("Quantos pontos turisticos tem em sua cidade: ");
    scanf("%d", &pontos_turisticos1);

    printf("Primeira carta terminada!!, Vamos para a segunda carta!\n");

    printf("Escolha seu estado entre A e H: ");
    scanf(" %c", &estado2);

    printf("Ex: B02 \nEscolha o codigo da carta: ");
    scanf("%19s", codigo_carta2);

    printf("Digite qual sua cidade: ");
    scanf("%19s", nome_da_cidade2);

    printf("Qual sua população: ");
    scanf("%lu", &populacao2);

    printf("Qual o tamanho da area: ");
    scanf("%f", &area2);

    printf("Qual seu PIB: ");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos tem em sua cidade: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("Prontinho! Segunda carta finalizada, agora vamos ver suas cartas \n");
    
    
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita1 = populacao1 / PIB1;
    PIB_per_capita2 = populacao2 / PIB2;
    //calculo das variaveis depois de coletar os dados

    printf("\n");//para espaçar e deixar legivel
    
    printf("Carta 1 \n");
    
    printf("\n");
    
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %lu Habitantes\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões\n", PIB1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f Hab/Km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f Reais\n", PIB_per_capita1);

    printf("\n");
    
    printf("Carta 2 \n");
    
    printf("\n");
    
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %lu Habitantes\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões\n", PIB2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);    
    printf("Densidade populacional: %.2f Hab/Km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f Reais\n", PIB_per_capita2);

    printf("Parabens!, suas cartas estão sensacionais!!\n");

    printf("\n");

    printf("lhes desejo sorte jogadores!\n");
    
    printf("\n");
    //calculo de super poder das cartas, somando todas e dividinda pela a quantidade de variaveis
    float super_poder1 = (populacao1 + area1 + PIB1 + PIB_per_capita1 + densidade_populacional1 + pontos_turisticos1) / 6;
    printf("Super poder carta 1: %.2f\n", super_poder1);
    
    float super_poder2 = (populacao2 + area2 + PIB2 + PIB_per_capita2 + densidade_populacional2 + pontos_turisticos2) / 6;
    printf("Super poder carta 2: %.2f\n", super_poder2);

    printf("\n");
    //comparação das carta 1 e 2
    int comparacao = super_poder1 > super_poder2;
    int comparacao_popu = populacao1 > populacao2;
    int comparacao_area = area1 > area2;
    int comparacao_PIB = PIB1 > PIB2;
    int comparacao_pontotu = pontos_turisticos1 > pontos_turisticos2;
    int comparacao_densidade = densidade_populacional1 < densidade_populacional2;
    int comparacao_PIBpercapita = PIB_per_capita1 > PIB_per_capita2;
    
    //imprimindo todas as informações de comparações na tela
    printf("Vai começar as comparações!\n");
    printf("Ex: Numero 1 = (Carta 1), Numero 0 = (Carta 2)\n");//explicando para o jogador as notas
    printf("\n");

    printf("População: %d\n", comparacao_popu);
    printf("Area %d\n", comparacao_area);
    printf("PIB: %d\n", comparacao_PIB);
    printf("Pontos turisticos: %d\n", comparacao_pontotu);
    printf("Densidade populacional: %d\n", comparacao_densidade);
    printf("PIB per capita: %d\n", comparacao_PIBpercapita);
    printf("Super Poder: %d\n", comparacao);

    
    return 0;
}