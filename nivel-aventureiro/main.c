#include <stdio.h>

int main() {

    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int opcao;

    printf("=== SUPER TRUNFO - NIVEL AVENTUREIRO ===\n\n");

    // Cadastro Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    // Menu de comparação
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("Escolha um atributo: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");

    switch(opcao) {

        case 1:
            if (populacao1 > populacao2)
                printf("%s venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("%s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            if (area1 > area2)
                printf("%s venceu!\n", nomeCidade1);
            else if (area2 > area1)
                printf("%s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            if (pib1 > pib2)
                printf("%s venceu!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("%s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
