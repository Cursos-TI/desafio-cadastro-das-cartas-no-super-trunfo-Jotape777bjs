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
    int escolhajogador;//ultizada no switch para armazenar as escolhas
    //calculo de super poder das cartas, somando todas e dividinda pela a quantidade de variaveis
    float super_poder1 = (populacao1 + area1 + PIB1 + PIB_per_capita1 + (densidade_populacional1 / 1) + pontos_turisticos1);
    float super_poder2 = (populacao2 + area2 + PIB2 + PIB_per_capita2 + (densidade_populacional2 / 1) + pontos_turisticos2);


    printf("Bem vindo ao criador de cartas Super Trunfo de Cidades!\n");
    printf("Vamos começar a criar suas cartas!\n");
    //coletando todas as informações necessaria das cartas do jogador
    printf("Escolha seu estado entre A e H: ");
    scanf(" %c", &estado1);

    printf("Ex: B02 \nEscolha o codigo da carta: ");
    scanf(" %19s", codigo_carta1);

    printf("Digite qual sua cidade: ");
    scanf(" %19s", nome_da_cidade1);

    printf("Qual sua população: ");
    scanf(" %lu", &populacao1);

    printf("Qual o tamanho da area: ");
    scanf(" %f", &area1);

    printf("Qual seu PIB: ");
    scanf(" %f", &PIB1);

    printf("Quantos pontos turisticos tem em sua cidade: ");
    scanf(" %d", &pontos_turisticos1);

    printf("Primeira carta terminada!!, Vamos para a segunda carta!\n");

    printf("Escolha seu estado entre A e H: ");
    scanf(" %c", &estado2);

    printf("Ex: B02 \nEscolha o codigo da carta: ");
    scanf(" %19s", codigo_carta2);

    printf("Digite qual sua cidade: ");
    scanf(" %19s", nome_da_cidade2);

    printf("Qual sua população: ");
    scanf(" %lu", &populacao2);

    printf("Qual o tamanho da area: ");
    scanf(" %f", &area2);

    printf("Qual seu PIB: ");
    scanf(" %f", &PIB2);

    printf("Quantos pontos turisticos tem em sua cidade: ");
    scanf(" %d", &pontos_turisticos2);
    
    printf("Prontinho! Segunda carta finalizada, vamos começa a competição!\n");
    
    
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
    
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("Escolha qual atributo deseja batalhar: ");
    scanf(" %d", &escolhajogador);
    

    switch(escolhajogador){//para funcionar a interatividade no menu
    case 1:
        if (populacao1 > populacao2){
        printf("População:%lu (A carta 1 venceu!!)\n", populacao1);
    }else if(populacao1 < populacao2){
        printf("População:%lu (A carta 2 venceu!!)\n", populacao2);
    }else{
        printf("Empate!!\n");
    }
    break;
    case 2:
        if (area1 > area2){
            printf("Area:%.2f (A carta 1 venceu!!)\n", area1);
    }else if (area1 < area2){
            printf("Area:%.2f (A carta 2 venceu!!)\n", area2);
    }else{
            printf("Empate!!\n");
    }
    break;
    case 3:
        if (PIB1 > PIB2){
        printf("PIB:%.2f (A carta 1 venceu!!)\n", PIB1);
    }else if (PIB1 < PIB2){
        printf("PIB:%.2f (A carta 2 venceu!!)\n", PIB2);
    }else{
        printf("Empate!!\n");
    }
    break;
    case 4:
        if (pontos_turisticos1 > pontos_turisticos2){
        printf("Pontos turisticos:%d (A carta 1 venceu!!)\n", pontos_turisticos1);
    }else if (pontos_turisticos1 < pontos_turisticos2){
        printf("Pontos turisticos:%d (A carta 2 venceu!!)\n", pontos_turisticos2);
    }else{
        printf("Empate!!\n");
    }
    break;
    case 5:
        if (densidade_populacional1 < densidade_populacional2){
        printf("Densidade populacional:%.2f (A carta 1 venceu!!)\n", densidade_populacional1);
    }else if (densidade_populacional1 > densidade_populacional2){
        printf("Densidade populacional:%.2f (A carta 2 venceu!!)\n", densidade_populacional2);
    }else{
        printf("Empate!!\n");
    }
    break;
    case 6:
        if (PIB_per_capita1 > PIB_per_capita2){
        printf("PIB per capita:%.2f (A carta 1 venceu!!)\n", PIB_per_capita1);
    }else if (PIB_per_capita1 < PIB_per_capita2){
        printf("PIB per capita:%.2f (A carta 2 venceu!!)\n", PIB_per_capita2);
    }else{
        printf("Empate!!\n");
    }
    break;
    case 7:
        if (super_poder1 > super_poder2){
        printf("Super poder:%.2f (A carta 1 venceu!!)\n", super_poder1);
    }else if (super_poder1 < super_poder2){
        printf("Super poder:%.2f (A carta 2 venceu!!)\n", super_poder2);
    }else{
        printf("Empate!!\n");
    }
    break;
    default:
        printf("Opção invalida!!\n");
    }
    
     printf("\n");

    return 0;
}