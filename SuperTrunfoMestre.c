#include <stdio.h>

// Super Trunfo - Países
// Cadastro das Cartas

int main() {
    printf(" **SUPER TRUNFO PAÍSES**\n");
    //Siga o exemplo abaixo para criar suas cartas e começar a diversão

    // Definir variáveis
    char nome_do_estado1[50], nome_do_estado2[50], nome_do_estado3[50];
    char codigo_da_carta1[4], codigo_da_carta2[4], codigo_da_carta3[4]; // Sempre utilizar Letra + Número (Letras de A a H números de 01 a 99)
    char nome_da_cidade1[50], nome_da_cidade2[50], nome_da_cidade3[50]; // Cidade pertencente ao estado informado
    unsigned long int populacao1, populacao2, populacao3;  // População em habitantes (unsigned long int para acomodar números maiores)
    float area_em_km1, area_em_km2, area_em_km3; // Área em km²
    float pib1, pib2, pib3; // PIB em bilhões
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2, numero_de_pontos_turisticos3; 
    
    // Definir variáveis para densidade e PIB per capita
    float densidade_populacional1, densidade_populacional2, densidade_populacional3;
    float pib_per_capita1, pib_per_capita2, pib_per_capita3;
    float super_poder1, super_poder2, super_poder3;

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    // Leitura do Exemplo
    printf("*** CARTA 01 ***\n");

    // Inserir dados para a Carta 01
    printf("Nome do Estado = Pará\n");
    printf("Código da carta = A01\n");
    printf("Nome da Cidade = Santarém \n");
    populacao1 = 331942;  // População em habitantes 
    area_em_km1 = 228870.80; // Área em km²
    pib1 = 63090;            // PIB em bilhões
    numero_de_pontos_turisticos1 = 32;
    // Calculando densidade populacional e PIB per capita
    densidade_populacional1 = (float) populacao1 / area_em_km1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1; // Multiplicando PIB por 1 bilhão para converter para valores monetários reais

    // Calculando o Super Poder
    super_poder1 = (float) populacao1 + area_em_km1 + pib1 + numero_de_pontos_turisticos1 + (1 / densidade_populacional1);

    // Exibindo resultados da Carta 01
    printf("População = %lu habitantes\n", populacao1);
    printf("Área em KM² = %.2f \n", area_em_km1);
    printf("PIB = %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional = %.2f habitantes por km²\n", densidade_populacional1);
    printf("PIB per Capita = %.2f\n", pib_per_capita1);

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    // *** CARTA 02 ***
   printf("*** CARTA 02 ***\n");

   // Inserir dados para a Carta 02
    printf("Nome do Estado = Paraná\n");
    printf("Código da carta = C03\n");
    printf("Nome da Cidade = Curitiba \n");
    populacao2 = 1774000;  // População em habitantes 
    area_em_km2 = 435277.00; // Área em km²
    pib2 = 98;            // PIB em bilhões
    numero_de_pontos_turisticos2 = 25;
    //Calculando densidade populacional e PIB per capita
    densidade_populacional2 = (float) populacao2 / area_em_km2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2; // Multiplicando PIB por 1 bilhão para converter para valores monetários reais

    // Calculando o Super Poder
    super_poder2 = (float) populacao2 + area_em_km2 + pib2 + numero_de_pontos_turisticos2 + (1 / densidade_populacional2);

    // Exibindo resultados da Carta 02
     printf("População = %lu habitantes\n", populacao2);
     printf("Área em KM² = %.2f \n", area_em_km2);
     printf("PIB = %.2f bilhões\n", pib2);
     printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos2);
     printf("Densidade Populacional = %.2f habitantes por km²\n", densidade_populacional2);
     printf("PIB per Capita = %.2f\n", pib_per_capita2);

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    // *** CRIE A SUA CARTA ***
    printf("*** CRIE A SUA CARTA ***\n");

    printf("DIGITE O NOME DE UM ESTADO:");
    scanf("%s", nome_do_estado3); 
    printf("DIGITE O CODIGO DA CARTA:"); // Utilizar letras de A a H e número de 01 a 99.
    scanf("%s", codigo_da_carta3);  
    printf("DIGITE O NOME DE UMA CIDADE:"); // Cidade existente no estado descrito anteriormente.
    scanf("%s", nome_da_cidade3); 
    printf("DIGITE A POPULAÇÃO DA CIDADE:");
    scanf("%lu", &populacao3); 
    printf("DIGITE A AREA EM KM:");// Área em km²
    scanf("%f", &area_em_km3);  
    printf("DIGITE O PIB DA CIDADE:"); // PIB em bilhões
    scanf("%f", &pib3); 
    printf("DIGITE O NUMERO DE PONTOS TURISTICOS DA CIDADE:");
    scanf("%d", &numero_de_pontos_turisticos3);  
    
    // Calculando densidade populacional e PIB per capita
    densidade_populacional3 = (float) populacao3 / area_em_km3;
    pib_per_capita3 = pib3 * 1000000000 / populacao3; // Multiplicando PIB por 1 bilhão para converter para valores monetários reais

    // Calculando o Super Poder
    super_poder3 = (float) populacao3 + area_em_km3 + pib3 + numero_de_pontos_turisticos3 + (1 / densidade_populacional3);

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    printf("**CARTA 03**\n");
    // Conferir o Resultado
    printf("Nome do Estado = %s\n", nome_do_estado3);
    printf("Código da carta = %s\n",codigo_da_carta3);
    printf("Nome da Cidade = %s\n", nome_da_cidade3);
    printf("População = %lu habitantes\n", populacao3);
    printf("Área em KM² = %.2f \n", area_em_km3);
    printf("PIB = %.2f bilhões\n", pib3);
    printf("Número de pontos turísticos = %d pontos \n", numero_de_pontos_turisticos3);
    printf("Densidade Populacional = %.2f habitantes por km²\n", densidade_populacional3);
    printf("PIB per Capita = %.2f\n", pib_per_capita3);

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    // Comparando as Cartas

    printf("Vamos ver quem ganhou o desafio ?\n ");
    printf("Carta 01 x Carta 03\n");
    printf("Gabarito : Resultado 1 - Carta 01 Ganha | Resultado 0 - Carta 03 ganha.\n");
   
    printf("População: Carta 1 venceu ? (%d)\n", ( populacao1 > populacao3));
    printf("Área: Carta 1 venceu ? (%d)\n", (area_em_km1 > area_em_km3));
    printf("PIB: Carta 1 venceu ? (%d)\n", ( pib1 > pib3));
    printf("Pontos Turísticos: Carta 1 venceu ? (%d)\n", (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos3));
    printf("Densidade Populacional: Carta 1 venceu ? (%d)\n", (densidade_populacional1 < densidade_populacional3));
    printf("PIB per Capita: Carta 1 venceu ? (%d)\n", ( pib_per_capita1 > pib_per_capita3));
    printf("Super Poder: Carta 1 venceu ? (%d)\n", (super_poder1 > super_poder3));

    printf("____________________________________________\n");
    printf("____________________________________________\n");

    printf("Carta 01 x Carta 02\n");
    printf("Gabarito 02 :  Resultado 1 - Carta 01 Ganha | Resultado 0 - Carta 02 ganha.\n");

    printf("População: Carta 2 venceu ? (%d)\n", ( populacao1 > populacao2));
    printf("Área: Carta 2 venceu ? (%d)\n", (area_em_km1 > area_em_km2));
    printf("PIB: Carta 2 venceu ?  (%d)\n", ( pib1 > pib2));
    printf("Pontos Turísticos: Carta 2 venceu ? (%d)\n", (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2));
    printf("Densidade Populacional: Carta 2 venceu ? (%d)\n", (densidade_populacional1 < densidade_populacional2));
    printf("PIB per Capita: Carta 2 venceu ? (%d)\n", ( pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta 2 venceu ? (%d)\n", (super_poder1 > super_poder2));
    
    printf("____________________________________________\n");
    printf("____________________________________________\n");

    
    printf("Carta 02 x Carta 03\n");
    printf("Gabarito: 1 - Carta 02 Ganha | 0 - Carta 03 ganha\n");

    printf("População: Carta 3 venceu ? (%d)\n", ( populacao2 > populacao3));
    printf("Área: Carta 3 venceu ? (%d)\n", (area_em_km2 > area_em_km3));
    printf("PIB: Carta 3 venceu ? (%d)\n", ( pib2 > pib3));
    printf("Pontos Turísticos: Carta 3 venceu ? (%d)\n", (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos3));
    printf("Densidade Populacional: Carta 3 venceu ? (%d)\n", (densidade_populacional2 < densidade_populacional3));
    printf("PIB per Capita: Carta 3 venceu ? (%d)\n", ( pib_per_capita2 > pib_per_capita3));
    printf("Super Poder: Carta 3 venceu ? (%d)\n", (super_poder2 > super_poder3));


    return 0;
}
 
