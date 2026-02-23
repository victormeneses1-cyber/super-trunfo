#include <stdio.h>

int main() {

    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;

    int atributo1, atributo2;
    int pontos1 = 0, pontos2 = 0;

    printf("=== SUPER TRUNFO - NIVEL MESTRE ===\n\n");

    // Cadastro Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    // Escolha de dois atributos
    printf("\nEscolha DOIS atributos para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");

    printf("Primeiro atributo: ");
    scanf("%d", &atributo1);

    printf("Segundo atributo: ");
    scanf("%d", &atributo2);

    // Comparação do primeiro atributo
    switch(atributo1) {
        case 1:
            (populacao1 > populacao2) ? pontos1++ :
            (populacao2 > populacao1) ? pontos2++ : 0;
            break;
        case 2:
            (area1 > area2) ? pontos1++ :
            (area2 > area1) ? pontos2++ : 0;
            break;
        case 3:
            (pib1 > pib2) ? pontos1++ :
            (pib2 > pib1) ? pontos2++ : 0;
            break;
        default:
            printf("Primeiro atributo invalido!\n");
    }

    // Comparação do segundo atributo
    switch(atributo2) {
        case 1:
            (populacao1 > populacao2) ? pontos1++ :
            (populacao2 > populacao1) ? pontos2++ : 0;
            break;
        case 2:
            (area1 > area2) ? pontos1++ :
            (area2 > area1) ? pontos2++ : 0;
            break;
        case 3:
            (pib1 > pib2) ? pontos1++ :
            (pib2 > pib1) ? pontos2++ : 0;
            break;
        default:
            printf("Segundo atributo invalido!\n");
    }

    // Resultado Final
    printf("\n=== RESULTADO FINAL ===\n");

    if (pontos1 > pontos2)
        printf("%s venceu com %d ponto(s)!\n", cidade1, pontos1);
    else if (pontos2 > pontos1)
        printf("%s venceu com %d ponto(s)!\n", cidade2, pontos2);
    else
        printf("Empate geral!\n");

    return 0;
}
