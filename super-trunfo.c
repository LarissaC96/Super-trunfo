#include <stdio.h>

 int main()
    { 
        char Estado[8], codigoCarta[3], nomeCidade[50]; 
        int populacao, pontosTuristicos; 
        float areaKm, PIB;

        printf("Digite um Estado: \n");
        scanf("%s", Estado);

        printf("Código da carta: \n");
        scanf("%s", codigoCarta);

        printf("Nome da cidade:\n");
        fgets (nomeCidade, sizeof(nomeCidade), stdin);
        
        printf("Qual a população total? \n");
        scanf("%d", &populacao);

        printf("Qual a area total do estado? \n");
        scanf("%f", &areaKm);

        printf("Informe do PIB do estado: \n");
        scanf("%f", &PIB);

        printf("Número total de pontos turisticos: \n");
        scanf("%d", &pontosTuristicos);

        printf("CARTA 1: \n");
        printf("Estado: %s \n", Estado);
        printf("Código: %s \n", codigoCarta);
        printf("Nome da Cidade: %s \n", nomeCidade);
        printf("População: %d \n", populacao);
        printf("Área: %.2f km² \n", areaKm);
        printf("PIB: %.2f bilhões de reais \n", PIB);
        printf("Número de Pontos Turistícos: %d \n", pontosTuristicos);

        

        return 0;




    }

