#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países

int main() {
    // Definindo variáveis separadas para cada atributo da cidade.
    // Atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char carta1codigo[4];
    char carta2codigo[4];
    char carta1nome[20];
    char carta2nome[20];
    long int carta1populacao , carta2populacao;
    float carta1area , carta2area , carta1PIB , carta2PIB;
    int carta1pontos_turisticos , carta2pontos_turisticos;
    char carta1estado[23];
    char carta2estado[23];
    int resultado;

    

    // Cadastro das Cartas:
   
    // Solicitando ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf(" ===Cadastrando Cartas===\n");
    printf(" ==Carta 1:==\n");

 
    printf("Digite o nome da Cidade:\n");
    fgets(carta1nome , sizeof(carta1nome), stdin);


    printf("Digite o Estado:");
    fgets(carta1estado , sizeof(carta1estado), stdin);

    printf("Digite o codigo-Comezando com a inicial da cidade e os numeros desde 01 ate 04 ex:A01:\n");
    scanf("%s", carta1codigo );

    printf("Digite a população:\n");
    scanf("%ld", &carta1populacao);

    printf("Digite a area em m² da cidade:\n");
    scanf("%f", &carta1area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta1PIB);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &carta1pontos_turisticos);

    // Obtendo e inicializando as variaveis Densidade populacional e PIB percapita

    float Densidadepopulacional1 = carta1populacao/carta1area;
    float PIBpercapita1 = carta1PIB/carta1populacao;

    // Declarando e inicializando variavel super poder
    float Super_poder1 =carta1populacao + carta1area;
    Super_poder1 += carta1PIB;
    Super_poder1 += carta1pontos_turisticos;
    Super_poder1 += PIBpercapita1;
    Super_poder1 -= Densidadepopulacional1;




    printf(" ==Carta 2:==\n");
    
    // limpando espaços

    getchar();
    printf("Digite o nome da Cidade:\n");
    fgets(carta2nome , sizeof(carta2nome), stdin);
    carta2nome[strcspn(carta2nome,"\n")];

    printf("Digite o Estado:");
    fgets(carta2estado , sizeof(carta2estado), stdin);

    printf("Digite o codigo-Comezando com a inicial da cidade e os numeros desde 01 ate 04 ex:A01:\n");
    scanf("%s", carta2codigo);

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
   
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha.

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



   // Comparando Cartas usando switch

   //criando menus interativos
   //Primeiro menu donde o jogador escolhe se quer jogar sair ou ver as regras
   printf("**Bemvindo ao menu opções**\n");
   printf("1. Jogar\n");
   printf("2. Regas do jogo\n");
   printf("3. Sair\n");
   printf("Digite sua escolha:");
   scanf("%d", &resultado);

   // Usando switch para inicializar cada uma das opções

   switch(resultado) {
    //Se escolher jogar inicializa mais um menu
    case 1 :
    //iniciando jogo
    printf("###Comenzando o jogo###\n");
    printf("Atacar com:\n");
    printf("1. Area da Cidade\n");
    printf("2. População\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB percapita\n");
    printf("7. Super poder\n");
    printf("8. Ver nome das cidades\n");
    printf("9. Sair\n");
    printf("Digite sua escolha:");
    scanf("%d", &resultado);

    //a seleção das opçoes inicializa a comparação das cartas
    switch (resultado)
    {
    case 1:
    //Comparando a area
       if(carta1area > carta2area)
       //Se a area da carta 1 for maior imprimira que a mesma venceu
       {printf("Carta 1 venceu!!!\n");
        printf("Carta 1 %s  %s  area = %.2f\n", carta1nome,carta1codigo, carta1area);
        printf("Carta 2 %s  %s  area = %.2f\n",carta2nome,carta2codigo, carta2area);
    } else if(carta1area < carta2area){
      //se a area da carta 2 foi maior imprimira que ela ganhou
        printf ("Carta 2 venceu!!!\n");
        printf("Carta 1 %s  %s  area = %.2f\n", carta1nome,carta1codigo,carta1area);
        printf("Carta 2 %s  %s  area = %.2f\n",carta2nome,carta2codigo,carta2area);
    } else {
      // se forem iguais imprimira empate
        printf("Empate!!!\n");
        printf("Carta 1 %s  %s  area = %.2f\n", carta1nome,carta1codigo,carta1area);
        printf("Carta 2 %s  %s  area = %.2f\n",carta2nome,carta2codigo,carta2area);
    }
        break;

        // comparando a populção
    case 2 :

      if(carta1populacao > carta2populacao){
        //se a população da carta 1 for maior imprimira que ela ganhou
        printf("Carta 1 venceu!!!\n");
        printf("Carta 1 %s  %s   população = %ld\n",carta1nome,carta1codigo,carta1populacao);
        printf("Carta 2 %s  %s   população = %ld\n",carta2nome,carta2codigo,carta2populacao);
    } else if(carta1populacao < carta2populacao){
      //se a população da carta 2 for maior imprimira que ela ganhou
        printf("Carta 2 venceu!!!");
        printf("Carta 1 %s  %s   população = %ld\n",carta1nome,carta1codigo,carta1populacao);
        printf("Carta 2 %s  %s   população = %ld\n",carta2nome,carta2codigo,carta2populacao);
    } else {
      //se forem iguais imprimira empate
        printf("Empate\n");
        printf("Carta 1 %s  %s   população = %ld\n",carta1nome,carta1codigo,carta1populacao);
        printf("Carta 2 %s  %s   população = %ld\n",carta2nome,carta2codigo,carta2populacao);
    }
        break;


    // Comparando o PIB
    case 3:
      if(carta1PIB > carta2PIB) {
        // se o pib da carta 1 for maior imprimira que ela venceu
        printf("Carta 1 venceu!!!\n");
        printf("Carta 1 %s   %s   PIB = %.2f\n",carta1nome,carta1codigo,carta1PIB);
        printf("Carta 2 %s   %s   PIB = %.2f\n",carta2nome,carta2codigo,carta2PIB);
      } else if(carta1PIB < carta2PIB){
        //se o pib da carta 2 for maior imprimira que ela venceu
        printf("Carta 2 venceu!!!\n");
        printf("Carta 1 %s   %s   PIB = %.2f\n",carta1nome,carta1codigo,carta1PIB);
        printf("Carta 2 %s   %s   PIB = %.2f\n",carta2nome,carta2codigo,carta2PIB);
      } else{
        //se os pib forem iguais imprimira empate
        printf("Empate!!");
        printf("Carta 1 %s   %s   PIB = %.2f\n",carta1nome,carta1codigo,carta1PIB);
        printf("Carta 2 %s   %s   PIB = %.2f\n",carta2nome,carta2codigo,carta2PIB);
      }
        break;

        //Comparando os pontos turisticos
    case 4:
         if(carta1pontos_turisticos > carta2pontos_turisticos) {
          //se a carta 1 tiver maior pontos turisticos imprimira que ela ganhou 
        printf("Carta 1 venceu!!!\n");
        printf("Carta 1 %s   %s   Pontos Turisticos = %d\n",carta1nome,carta1codigo,carta1pontos_turisticos);
        printf("Carta 2 %s   %s   Pontos Turisticos = %d\n",carta2nome,carta2codigo,carta2pontos_turisticos);
      } else if(carta1pontos_turisticos < carta2pontos_turisticos){
        //se a carta 2 tiver maior pontos turisticos imprimira que ela ganhou 
        printf("Carta 2 venceu!!!\n");
        printf("Carta 1 %s   %s   PIB = %d\n",carta1nome,carta1codigo,carta1pontos_turisticos);
        printf("Carta 2 %s   %s   PIB = %d\n",carta2nome,carta2codigo,carta2pontos_turisticos);
      } else{
        //se forem iguais imprimira empate
        printf("Empate!!");
        printf("Carta 1 %s   %s   PIB = %d\n",carta1nome,carta1codigo,carta1pontos_turisticos);
        printf("Carta 2 %s   %s   PIB = %d\n",carta2nome,carta2codigo,carta2pontos_turisticos);
      }
        break;

        // comparando densidade populacional
    case 5:
         if(Densidadepopulacional1 < Densidadepopulacional2) {
          //se a densidade populacional da carta 1 for maior imprima que ela ganhou
        printf("Carta 1 venceu!!!\n");
        printf("Carta 1 %s   %s   Densidade Populacional = %.2f\n",carta1nome,carta1codigo,Densidadepopulacional1);
        printf("Carta 2 %s   %s   Densidade Populacional = %.2f\n",carta2nome,carta2codigo,Densidadepopulacional2);
      } else if(Densidadepopulacional1 > Densidadepopulacional2){
        //se a densidade populacional da carta 2 for maior imprima que ela ganhou
        printf("Carta 2 venceu!!!\n");
        printf("Carta 1 %s   %s   Densidade Populacional = %.2f\n",carta1nome,carta1codigo,Densidadepopulacional1);
        printf("Carta 2 %s   %s   Densidade Populacional = %.2f\n",carta2nome,carta2codigo,Densidadepopulacional2);
      } else{
        //se forem iguais imprima empate
        printf("Empate!!");
        printf("Carta 1 %s   %s   Densidade Populacional = %.2f\n",carta1nome,carta1codigo,Densidadepopulacional1);
        printf("Carta 2 %s   %s   Densidade Populacional = %.2f\n",carta2nome,carta2codigo,Densidadepopulacional2);
      }
        break;

        //comparando pib percapita
    case 6 :
         if(PIBpercapita1 > PIBpercapita2) {
        //Se o PIB percapita da carta 1 for maior imprima que ela ganhou
          printf("Carta 1 venceu!!!\n");
        printf("Carta 1 %s   %s   PIB percapita = %.2f\n",carta1nome,carta1codigo,PIBpercapita1);
        printf("Carta 2 %s   %s   PIB percapita = %.2f\n",carta2nome,carta2codigo,PIBpercapita2);
      } else if(PIBpercapita1 < PIBpercapita2){
        //se o PIB percapita da carta 2 for maior imprima que ela ganou
        printf("Carta 2 venceu!!!\n");
        printf("Carta 1 %s   %s   PIB percapita = %.2f\n",carta1nome,carta1codigo,PIBpercapita1);
        printf("Carta 2 %s   %s   PIB percapita = %.2f\n",carta2nome,carta2codigo,PIBpercapita2);
      } else{
        //se forem iguais imrprima empate
        printf("Empate!!");
        printf("Carta 1 %s   %s   PIB percapita = %.2f\n",carta1nome,carta1codigo,PIBpercapita1);
        printf("Carta 2 %s   %s   PIB percapita = %.2f\n",carta2nome,carta2codigo,PIBpercapita2);
      }
        break;

        //comparamdo super poder
    case 7:
         if(Super_poder1 > Super_poder2) {
          //se o super poder da carta 1 for maior imprima que ela ganhou 
        printf("Carta 1 %s   %s   Super Poder = %.2f\n",carta1nome,carta1codigo,Super_poder1);
        printf("Carta 2 %s   %s   Super Poder = %.2f\n",carta2nome,carta2codigo,Super_poder2);
      } else if(Super_poder1 < Super_poder2){
        //se o super poder da carta 2 for maior imprima que ela ganhou
        printf("Carta 2 venceu!!!\n");
        printf("Carta 1 %s   %s  Super Poder = %.2f\n",carta1nome,carta1codigo,Super_poder1);
        printf("Carta 2 %s   %s  Super Poder = %.2f\n",carta2nome,carta2codigo,Super_poder2);
      } else{
        //se o super poder for igual imprima empate
        printf("Empate!!");
        printf("Carta 1 %s   %s  Super Poder = %.2f\n",carta1nome,carta1codigo,Super_poder1);
        printf("Carta 2 %s   %s  Super Poder = %.2f\n",carta2nome,carta2codigo,Super_poder2);
      }
        break;

        //Imprimindo so o nome das cidades
    case 8:
    printf("##Carta 1##\n Cidade:%s\n", carta1nome) ;
    printf("###Carta 2###\n Cidade:%s\n", carta2nome) ;
      break;

      //saindo do jogo
    case 9:  
    printf("Saindo....");
        break;
    default:
    printf("Opção invalida por favor digite uma opção valida");
        break;
    }

    //continuando com as opções do primeiro menu
     break;
   
     //imprimindo as regras
    case 2:
    printf("Exibindo regras do jogo...");
    printf("1.Serão comparadas as cartas cadastradas pelos usuarios  ");
    printf("2.Serão comparadas as cartas por suas diferentes propriedades as de maior propriedade ganham");
    printf("3.A carta de maior densidade populacional perde");
    break;
    //saindo do jogo
    case 3:
    printf("Saindo do jogo...") ;
      break;

    default:
    printf("Digite uma opção valida");
    break;

   }
       


   

   


    return 0;
}