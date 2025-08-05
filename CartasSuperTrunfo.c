#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char carta1codigo[4];
    char carta2codigo[4];
    char carta1nome[20];
    char carta2nome[20];
    long int carta1populacao , carta2populacao;
    float carta1area , carta2area;
    float carta1PIB , carta2PIB;
    int carta1pontos_turisticos , carta2pontos_turisticos;
    char carta1estado[23];
    char carta2estado[23];


    int resultado;

    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf(" ===Cadastrando Cartas===\n");
    printf(" ==Carta 1:==\n");

 
    printf("Digite o nome da Cidade:\n");
    fgets(carta1nome , sizeof(carta1nome), stdin);


    printf("Digite o Estado:");
    fgets(carta1estado , sizeof(carta1estado), stdin);

    printf("Digite o codigo-Comezando com a inicial da cidade e os numeros desde 01 ate 04 ex:A01:\n");
    scanf("%s", &carta1codigo );

    printf("Digite a população:\n");
    scanf("%ld", &carta1populacao);

    printf("Digite a area em m² da cidade:\n");
    scanf("%f", &carta1area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta1PIB);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &carta1pontos_turisticos);

    float Densidadepopulacional1 = carta1populacao/carta1area;
    float PIBpercapita1 = carta1PIB/carta1populacao;

    // Declarando e inicializando variavel super poder
    float Super_poder1 =carta1populacao + carta1area;
    Super_poder1 += carta1PIB;
    Super_poder1 += carta1pontos_turisticos;
    Super_poder1 += PIBpercapita1;
    Super_poder1 -= Densidadepopulacional1;




    printf(" ==Carta 2:==\n");

    getchar();
    printf("Digite o nome da Cidade:\n");
    fgets(carta2nome , sizeof(carta2nome), stdin);
    carta2nome[strcspn(carta2nome,"\n")];

    printf("Digite o Estado:");
    fgets(carta2estado , sizeof(carta2estado), stdin);

    printf("Digite o codigo-Comezando com a inicial da cidade e os numeros desde 01 ate 04 ex:A01:\n");
    scanf("%s", &carta2codigo);

    printf("Digite a população:\n");
    scanf("%ld", &carta2populacao);

    printf("Digite a area em m² da cidade:\n");
    scanf("%f", &carta2area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta2PIB);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &carta2pontos_turisticos);

    //Calculando a densidade populaconal
    float Densidadepopulacional2 = carta2populacao/carta2area ;

    //Calculando o PIB per capita 
    float PIBpercapita2 = carta2PIB/carta2populacao;

   //Declarando a variavel super poder da carta 2
   float Super_poder2 =carta2populacao + carta2area;
   Super_poder2 += carta2PIB;
   Super_poder2 += carta2pontos_turisticos;
   Super_poder2 += PIBpercapita2;
   Super_poder2 -= Densidadepopulacional2;




    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("===Exibindo cartas cadastradas===\n");

    getchar();
    printf("          ==Carta 2==\n");
    printf("        ESTADO: %s", carta1estado);
    printf("==Cidade: %s", carta1nome);
    printf("*Codigo: %s \n", carta1codigo);
    printf("-População = %ld\n", carta1populacao);
    printf("-PIB = %.2f\n ", carta1PIB);
    printf("-Area(m²) = %.2f\n", carta1area);
    printf("-Pontos Turisticos = %d\n", carta1pontos_turisticos);
   

    // Exibindo o PIB percapita e a densiddade populacional da carta 1
    printf("-PIB per capita:%.2f\n", PIBpercapita1);
    printf("-Densidade populacional:%.2f\n", Densidadepopulacional1);

   // exibindo super poder
    printf("-Super Poder: %.2f\n", Super_poder1);





    printf("          ==Carta 2==\n");
    printf("      ESTADO: %s    ", carta2estado);
    printf("=Cidade: %s",carta2nome);
    printf("*Codigo: %s\n" , carta2codigo);
    printf("-População = %ld\n",carta2populacao);
    printf("-PIB = %.2f\n ",carta2PIB);
    printf("-Area(m²) = %.2f\n",carta2area);
    printf("-Pontos Turisticos = %d\n",carta2pontos_turisticos);
    printf("PIB per capita: %.2f\n", PIBpercapita2);
    printf("Densidade populacional:%.2f\n", Densidadepopulacional2);
     // exibindo super poder
    printf("-Super Poder: %.2f\n", Super_poder1);



    // Comparando carta 1 e carta 2

    printf("Comparando as cartas:\n");
    
    // Guardando a comparação na variavel resultado
    resultado = carta1populacao > carta2populacao ;
    printf("População: %d\n", resultado);

    resultado = carta1PIB > carta2PIB ;
    printf("PIB: %d\n",resultado);

    resultado = carta1area > carta2area;
    printf("Area: %d\n", resultado);

    resultado = carta1pontos_turisticos > carta2pontos_turisticos;
    printf("Pontos turisticos: %d\n", resultado);

    resultado = Densidadepopulacional1 > Densidadepopulacional2;
    printf("Densidade Populacional:%d\n", resultado);

    resultado = PIBpercapita1 > PIBpercapita2;
    printf("PIB percapita:%d\n", resultado);

    resultado = Super_poder1 > Super_poder2;
    printf("Super Poder:%d", resultado);


    return 0;
}
