#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main () {
    printf(" **SUPER TRUNFO PAÍSES**\n");
    
    printf("Siga o exemplo abaixo para criar suas cartas e começar a diverção\n");
    
        char nome_do_Pais[50] = "Brasil";
        char codigo_da_carta[4] = "A01"; //Sempre utilizar Letra + Número (Letras de A a H)
        char nome_do_estado[20] = "Pará"; // Estados do país citado anteriormente
        int populacao = 8.12;
        float area_em_km = 1245870.7;
        float pib = 2.188;
        int numero_de_pontos_turisticos = 144;
    
     //Leitura do Exemplo
         printf("Nome do Pais = %s \n",nome_do_Pais);
     
        printf("Código da carta = %s \n",codigo_da_carta);
     
        printf("Nome do estado = %s \n",nome_do_estado);
    
        printf("População = %dmilhões \n",populacao);
    
        printf("Area em KM = %.1f \n",area_em_km);
    
        printf("PIB = %.2f trilhões de dolares\n",pib);
    
        printf("Numero de pontos turísticos = %d \n", numero_de_pontos_turisticos);
      
    
        printf("**CRIE A SUA CARTA**\n");
    
     
    
        printf("DIGITE O NOME DE UM PAIS:");
    
        scanf("%s[50]", &nome_do_Pais);
    
        printf("O Pais é: %s\n", nome_do_Pais);
    
        printf("DIGITE O CODIGO DA CARTA:"); // Utilizar letras de A a H
      
        scanf("%s", &codigo_da_carta);
    
        printf("codigo da carta:%s\n", codigo_da_carta);
    
        printf("DIGITE O NOME DE UM ESTADO:"); //Estado do País citado anteriormente.
    
        scanf("%s", &nome_do_estado);
    
        printf("Nome do estado:%s\n", nome_do_estado);
    
         printf("DIGITE A POPULAÇÃO DO ESTADO:");
    
         scanf("%2d", &populacao);
    
        printf("a população:%d\n", populacao);
    
        printf("DIGITE A AREA EM KM':");
    
        scanf("%f", &area_em_km);
    
        printf("Area em KM = %.1f \n",area_em_km);
     
        printf("digite o PIB do estado:"); // O PIB deve ser calculado em Trilhões de Dólares.
    
         scanf("%f", &pib);
    
         printf("PIB:%f\n",pib);
    
        printf("digite o numero de pontos turisticos do estado:");
    
        scanf("%d",&numero_de_pontos_turisticos);
    
        printf("Pontos turísticos:%d\n",numero_de_pontos_turisticos);
    
    
    
        printf("**CARTA**\n");
    
         // Conferir o Resultado
    
         printf("Nome do País: %s\n", nome_do_Pais);
    
        printf("Código da carta = %s \n",codigo_da_carta);
    
        printf("Nome do estado:%s\n", nome_do_estado);
    
        printf("População:%dmilhões\n", populacao);
    
        printf("Area em KM = %.1f \n",area_em_km);
    
        printf("PIB = %.1f trilhões de dolares\n",pib);
    
        printf("Numero de pontos turísticos = %d \n", numero_de_pontos_turisticos);
    
    
        return 0;
    
    }