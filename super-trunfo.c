#include <stdio.h>

 int main()
    { 
        char Estado1, codigoCarta1[4], nomeCidade1[50]; 
        int populacao1, pontosTuristicos1; 
        float areaKm1, PIB1;

        char Estado2, codigoCarta2[3], nomeCidade2[50]; 
        int populacao2, pontosTuristicos2; 
        float areaKm2, PIB2;


        // entrada de dados carta um
        printf("Digite um Estado de A a H: ");
        scanf("%c", &Estado1);

        printf("Código da carta: ");
        scanf("%s", codigoCarta1);

        printf("Nome da cidade: \n");
        scanf("%[^\n]s", nomeCidade1);
        
        printf("Qual a população total? \n");
        scanf("%d", &populacao1);

        printf("Qual a area total do estado? \n");
        scanf("%f", &areaKm1);

        printf("Informe do PIB do estado: \n");
        scanf("%f", &PIB1);

        printf("Número total de pontos turisticos: \n");
        scanf("%d", &pontosTuristicos1);

        //entrada de dados carta dois
        printf("Digite um Estado de A a H: ");
        scanf("%c", &Estado2);

        printf("Código da carta: ");
        scanf("%s", codigoCarta2);

        printf("\nNome da cidade: \n");
        scanf("%[^\n]s", nomeCidade2);
        
        printf("Qual a população total? \n");
        scanf("%d", &populacao2);

        printf("Qual a area total do estado? \n");
        scanf("%f", &areaKm2);

        printf("Informe do PIB do estado: \n");
        scanf("%f", &PIB2);

        printf("Número total de pontos turisticos: \n");
        scanf("%d", &pontosTuristicos2);

        //dados carta um
        printf("CARTA 1: \n");
        printf("Estado: %c \n", Estado1);
        printf("Código: %s \n", codigoCarta1);
        printf("Nome da Cidade: %s \n", nomeCidade1);
        printf("População: %d \n", populacao1);
        printf("Área: %.2f km² \n", areaKm1);
        printf("PIB: %.2f bilhões de reais \n", PIB1);
        printf("Número de Pontos Turistícos: %d \n", pontosTuristicos1);

        //dados carta dois 
        printf(" \nCARTA 2: \n");
        printf("Estado: %c \n", Estado2);
        printf("Código: %s \n", codigoCarta2);
        printf("Nome da Cidade: %s \n", nomeCidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %.2f km² \n", areaKm2);
        printf("PIB: %.2f bilhões de reais \n", PIB2);
        printf("Número de Pontos Turistícos: %d \n", pontosTuristicos2); 

        return 0;




    }

    }

