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
    int resultado,resultado1,resultado2;
    int opcao,opcao1,opcao2,opcao3;
   
//variaveis Densidade populacional e PIB percapita

    float Densidadepopulacional1;
    float PIBpercapita1;

    // Declarando variavel super poder
    float Super_poder1 ;
    

   // densidade populaconal 2
    float Densidadepopulacional2  ;

    // PIB per capita 2
    float PIBpercapita2;

   //variavel super poder da carta 2
   float Super_poder2;
   
    //Menu inicial do jogo]
    printf("  ===Super Trunfo===\n");
    printf("==Bemvindo ao Super Trunfo Cidades!!!==\n");
    printf("1. Cadastrar Cartas\n");
    printf("2. Ver Regras do jogo\n");
    printf("3. Sair\n");
    printf("Escolha uma das opções acima:");
    scanf("%d", &resultado);
    // uando switch

    
    switch(resultado){
      //caso escolha registrar as cartas
    case 1:
    // Solicitando ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    getchar();
  
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
   

   
    
    printf("Cartas cadastradas com exito\n");
    
     break;

   case 2:
   //Exibir regras do jogo
    printf("Exibindo regras do jogo...\n");
    printf("1.Serão comparadas as cartas cadastradas pelos usuarios\n  ");
    printf("2.Serão comparadas as cartas por suas diferentes propriedades as de maior propriedade ganham\n");
    printf("3.A carta de maior densidade populacional perde\n");
    break;
    case 3 :
    printf("Saindo do programa\n");
    break;
    default :
    printf("Digite uma opção valida porfavor\n");
    break;

    }
    
    






   // Comparando Cartas usando switch

   //criando menus interativos
   //Primeiro menu donde o jogador escolhe se quer jogar sair ou ver as regras
   printf("**Bemvindo ao menu opções**\n");
   printf("1. Jogar\n");
   printf("2. Regas do jogo\n");
   printf("3. Sair\n");
   printf("Digite sua escolha:");
   scanf("%d", &opcao1);

   // Usando switch para inicializar cada uma das opções

   switch(opcao1) {
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
    printf("8. Ver informação das cartas\n");
    printf("9. Sair\n");
    printf("Digite sua escolha:");
    scanf("%d", &opcao2);

    //a seleção das opçoes inicializa a comparação das cartas
    switch (opcao2){
    case 1:
    //Comparando a area
     printf("Comparando a Area...\n");
       {resultado1 = carta1area > carta2area ? 1 : 0 ;}
       printf("Escolha a segunda propriedade a comparar\n");
       printf("1. Area da Cidade\n");
       printf("2. População\n");
       printf("3. PIB\n");
       printf("4. Pontos Turisticos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB percapita\n");
       printf("7. Super poder\n");
       scanf("%d",&opcao);
    
     if(opcao==opcao2){
      printf("Voce escolheu a mesma propriedade...");
     }else{
    switch(opcao){
      case 1:
        printf("Comparando Area...\n");
          {resultado2 = carta1area > carta2area ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Area:%.2f\n",carta2area);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n",carta1nome);
            printf("Area:%.2f\n",carta1area);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Area:%.2f\n",carta2area);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Area:%.2f\n",carta2area); 
          }
           break;
      case 2:
        printf("Comparando População...\n");
          {resultado2 = carta1populacao > carta2populacao ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("População:%ld\n",carta2populacao);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("População:%ld\n",carta2populacao);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("População:%ld\n",carta2populacao); 
          }
           break;
      case 3:
        printf("Comparando PIB...\n");
          {resultado2 = carta1PIB > carta2PIB ? 1 : 0;}

            if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("PIB:%.2f\n",carta2PIB);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("PIB:%.2f\n",carta2PIB);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("PIB:%.2f\n",carta1PIB);
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("PIB:%.2f\n",carta2PIB); 
          }
           break;
      case 4:
        printf("Comparando Pontos Turisticos...\n");
          {resultado2 = carta1pontos_turisticos > carta2pontos_turisticos ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos); 
          }
           break;
      case 5:
        printf("Comparando Densidade...\n");
          {resultado2 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Densidadepopulacional :%.2f\n",Densidadepopulacional2); 
          }
           break;
      case 6:
        printf("Comparando PIB percapita...\n");
          {resultado2 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;}
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("PIB percapita:%.2f\n",PIBpercapita2); 
          }
           break;
      case 7:
        printf("Comparando Super Poder...\n");
          {resultado2 = Super_poder1 > Super_poder2 ? 1 : 0;}
          
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Area:%.2f\n", carta1area);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Cidade:%s\n",carta2nome);
            printf("Area:%.2f\n",carta2area);
            printf("Super Poder%.2f\n",Super_poder2); 
          }
           break;
      default:
        printf("Digite uma opção valida\n");
           break;                               
    }
  }

       break;
    case 2:
     printf("Comparando a População...\n");
       {resultado1= carta1populacao > carta2populacao ? 1 : 0;}

       printf("Escolha a segunda propriedade a comparar\n");
       printf("1. Area da Cidade\n");
       printf("2. População\n");
       printf("3. PIB\n");
       printf("4. Pontos Turisticos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB percapita\n");
       printf("7. Super poder\n");
       scanf("%d",&opcao);
    
      if(opcao==opcao2){
       printf("Voce escolheu a mesma propriedade...");
     }else{
      switch(opcao){
      case 1:
            printf("Comparando Area...\n");
          {resultado2 = carta1area > carta2area ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Area:%.2f\n",carta2area);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Area:%.2f\n",carta2area);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Area:%.2f\n",carta2area); 
          }
             break;
      case 2:
          printf("Comparando População...\n");
          {resultado2 = carta1populacao > carta2populacao ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("População:%ld\n",carta2populacao);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("População:%ld\n",carta2populacao);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("População:%ld\n",carta2populacao); 
          }
             break;
      case 3:
          printf("Comparando PIB...\n");
           {resultado2 = carta1PIB > carta2PIB ? 1 : 0;}

            if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("PIB:%.2f\n",carta2PIB);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("PIB:%.2f\n",carta2PIB);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("PIB:%.2f\n",carta1PIB);
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("PIB:%.2f\n",carta2PIB); 
          }
              break;
      case 4:
          printf("Comparando Pontos Turisticos...\n");
           {resultado2 = carta1pontos_turisticos > carta2pontos_turisticos ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos); 
          }
              break;
      case 5:
          printf("Comparando Densidade...\n");
           {resultado2 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2); 
          }
              break;
      case 6:
          printf("Comparando PIB percapita...\n");
           {resultado2 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;}
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("PIB percapita:%.2f\n",PIBpercapita2); 
          }
              break;
      case 7:
          printf("Comparando Super Poder...\n");
           {resultado2 = Super_poder1 > Super_poder2 ? 1 : 0;}
          
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("População:%ld\n", carta1populacao);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Cidade:%s\n",carta2nome);
            printf("População:%ld\n",carta2populacao);
            printf("Super Poder%.2f\n",Super_poder2); 
          }
              break;
      default:
          printf("Digite uma opção valida\n");
              break;                               
    }
  }


       break;
    case 3 :
     printf("Comparando PIB...\n");
       {resultado1 = carta1PIB > carta2PIB ? 1 : 0;}

       printf("Escolha a segunda propriedade a comparar\n");
       printf("1. Area da Cidade\n");
       printf("2. População\n");
       printf("3. PIB\n");
       printf("4. Pontos Turisticos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB percapita\n");
       printf("7. Super poder\n");
       scanf("%d",&opcao);
    
      if(opcao==opcao2){
       printf("Voce escolheu a mesma propriedade...");
     }else{
      switch(opcao){
      case 1:
            printf("Comparando Area...\n");
          {resultado2 = carta1area > carta2area ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Area:%.2f\n",carta2area);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Area:%.2f\n",carta2area);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Area:%.2f\n",carta2area); 
          }
             break;
      case 2:
          printf("Comparando População...\n");
          {resultado2 = carta1populacao > carta2populacao ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("População:%ld\n",carta2populacao);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("População:%ld\n",carta2populacao);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("População:%ld\n",carta2populacao); 
          }
             break;
      case 3:
          printf("Comparando PIB...\n");
           {resultado2 = carta1PIB > carta2PIB ? 1 : 0;}

            if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("PIB:%.2f\n",carta2PIB);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("PIB:%.2f\n",carta2PIB);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("PIB:%.2f\n",carta1PIB);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("PIB:%.2f\n",carta2PIB); 
          }
              break;
      case 4:
          printf("Comparando Pontos Turisticos...\n");
           {resultado2 = carta1pontos_turisticos > carta2pontos_turisticos ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos); 
          }
              break;
      case 5:
          printf("Comparando Densidade...\n");
           {resultado2 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("População:%.2f\n",carta2PIB);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2); 
          }
              break;
      case 6:
          printf("Comparando PIB percapita...\n");
           {resultado2 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;}
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("PIB percapita:%.2f\n",PIBpercapita2); 
          }
              break;
      case 7:
          printf("Comparando Super Poder...\n");
           {resultado2 = Super_poder1 > Super_poder2 ? 1 : 0;}
          
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB:%.2f\n", carta1PIB);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB:%.2f\n",carta2PIB);
            printf("Super Poder%.2f\n",Super_poder2); 
          }
              break;
      default:
          printf("Digite uma opção valida\n");
              break;                               
    }
  }
       break;
    case 4 :
     printf("Comparando Pontos Turisticos...");
       {resultado1 = carta1pontos_turisticos > carta2pontos_turisticos ? 1 : 0;}
       printf("Escolha a segunda propriedade a comparar\n");
       printf("1. Area da Cidade\n");
       printf("2. População\n");
       printf("3. PIB\n");
       printf("4. Pontos Turisticos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB percapita\n");
       printf("7. Super poder\n");
       scanf("%d",&opcao);
    
      if(opcao==opcao2){
       printf("Voce escolheu a mesma propriedade...");
     }else{
      switch(opcao){
      case 1:
            printf("Comparando Area...\n");
          {resultado2 = carta1area > carta2area ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Area:%.2f\n",carta2area);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Area:%.2f\n",carta2area);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Area:%.2f\n",carta2area); 
          }
             break;
      case 2:
          printf("Comparando População...\n");
          {resultado2 = carta1populacao > carta2populacao ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("População:%ld\n",carta2populacao);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("População:%ld\n",carta2populacao);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("População:%ld\n",carta2populacao); 
          }
             break;
      case 3:
          printf("Comparando PIB...\n");
           {resultado2 = carta1PIB > carta2PIB ? 1 : 0;}

            if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("PIB:%.2f\n",carta2PIB);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("PIB:%.2f\n",carta2PIB);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("PIB:%.2f\n",carta1PIB);
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("PIB:%.2f\n",carta2PIB); 
          }
              break;
      case 4:
          printf("Comparando Pontos Turisticos...\n");
           {resultado2 = carta1pontos_turisticos > carta2pontos_turisticos ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos); 
          }
              break;
      case 5:
          printf("Comparando Densidade...\n");
           {resultado2 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2); 
          }
              break;
      case 6:
          printf("Comparando PIB percapita...\n");
           {resultado2 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;}
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turistico:%d\n", carta1pontos_turisticos);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("PIB percapita:%.2f\n",PIBpercapita2); 
          }
              break;
      case 7:
          printf("Comparando Super Poder...\n");
           {resultado2 = Super_poder1 > Super_poder2 ? 1 : 0;}
          
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Pontos Turisticos:%d\n", carta1pontos_turisticos);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Cidade:%s\n",carta2nome);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("Super Poder%.2f\n",Super_poder2); 
          }
              break;
      default:
          printf("Digite uma opção valida\n");
              break;                               
    }
  }
       
       break;
    case 5:
     printf("Comparando Densidade Populacional...\n");
       {resultado1 = Densidadepopulacional1 > Densidadepopulacional2 ? 1 : 0;}

       printf("Escolha a segunda propriedade a comparar\n");
       printf("1. Area da Cidade\n");
       printf("2. População\n");
       printf("3. PIB\n");
       printf("4. Pontos Turisticos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB percapita\n");
       printf("7. Super poder\n");
       scanf("%d",&opcao);
    
      if(opcao==opcao2){
       printf("Voce escolheu a mesma propriedade...");
     }else{
      switch(opcao){
      case 1:
            printf("Comparando Area...\n");
          {resultado2 = carta1area > carta2area ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Area:%.2f\n",carta2area);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Area:%.2f\n",carta2area);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Area:%.2f\n",carta2area); 
          }
             break;
      case 2:
          printf("Comparando População...\n");
          {resultado2 = carta1populacao > carta2populacao ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("População:%ld\n",carta2populacao);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade populacional:%.2f\n",Densidadepopulacional2);
            printf("População:%ld\n",carta2populacao);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("População:%ld\n",carta2populacao); 
          }
             break;
      case 3:
          printf("Comparando PIB...\n");
           {resultado2 = carta1PIB > carta2PIB ? 1 : 0;}

            if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("PIB:%.2f\n",carta2PIB);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("PIB:%.2f\n",carta2PIB);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("PIB:%.2f\n",carta1PIB);
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("PIB:%.2f\n",carta2PIB); 
          }
              break;
      case 4:
          printf("Comparando Pontos Turisticos...\n");
           {resultado2 = carta1pontos_turisticos > carta2pontos_turisticos ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade populacional:%.2f\n", Densidadepopulacional1);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos); 
          }
              break;
      case 5:
          printf("Comparando Densidade...\n");
           {resultado2 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n", Densidadepopulacional1);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2); 
          }
              break;
      case 6:
          printf("Comparando PIB percapita...\n");
           {resultado2 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;}
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.f\n",Densidadepopulacional1);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("PIB percapita:%.2f\n",PIBpercapita2); 
          }
              break;
      case 7:
          printf("Comparando Super Poder...\n");
           {resultado2 = Super_poder1 > Super_poder2 ? 1 : 0;}
          
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Cidade:%s\n",carta2nome);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
            printf("Super Poder%.2f\n",Super_poder2); 
          }
              break;
      default:
          printf("Digite uma opção valida\n");
              break;                               
    }
  }
       break;
    case 6:
     printf("Comparando PIB percapita...\n");
        {resultado1 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;}
       
       printf("Escolha a segunda propriedade a comparar\n");
       printf("1. Area da Cidade\n");
       printf("2. População\n");
       printf("3. PIB\n");
       printf("4. Pontos Turisticos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB percapita\n");
       printf("7. Super poder\n");
       scanf("%d",&opcao);
    
     if(opcao==opcao2){
      printf("Voce escolheu a mesma propriedade...");
     }else{
    switch(opcao){
      case 1:
        printf("Comparando Area...\n");
          {resultado2 = carta1area > carta2area ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n", PIBpercapita1);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Area:%.2f\n",carta2area);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n",carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Area:%.2f\n",carta2area);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n", PIBpercapita1);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Area:%.2f\n",carta2area); 
          }
           break;
      case 2:
        printf("Comparando População...\n");
          {resultado2 = carta1populacao > carta2populacao ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("População:%ld\n",carta2populacao);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("População:%ld\n",carta2populacao);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("População:%ld\n",carta2populacao); 
          }
           break;
      case 3:
        printf("Comparando PIB...\n");
          {resultado2 = carta1PIB > carta2PIB ? 1 : 0;}

            if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("PIB:%.2f\n",carta2PIB);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("PIB:%.2f\n",carta2PIB);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("PIB:%.2f\n",carta1PIB);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("PIB:%.2f\n",carta2PIB); 
          }
           break;
      case 4:
        printf("Comparando Pontos Turisticos...\n");
          {resultado2 = carta1pontos_turisticos > carta2pontos_turisticos ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos); 
          }
           break;
      case 5:
        printf("Comparando Densidade...\n");
          {resultado2 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Densidadepopulacional :%.2f\n",Densidadepopulacional2); 
          }
           break;
      case 6:
        printf("Comparando PIB percapita...\n");
          {resultado2 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;}
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("PIB percapita:%.2f\n",PIBpercapita2); 
          }
           break;
      case 7:
        printf("Comparando Super Poder...\n");
          {resultado2 = Super_poder1 > Super_poder2 ? 1 : 0;}
          
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Cidade:%s\n",carta2nome);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
            printf("Super Poder%.2f\n",Super_poder2); 
          }
           break;
      default:
        printf("Digite uma opção valida\n");
           break;                               
    }
  }

       break;
    
      
    case 7:
       printf("Comparando Super Poder\n");
        {resultado1 = Super_poder1 > Super_poder2 ? 1 : 0;}

       printf("Escolha a segunda propriedade a comparar\n");
       printf("1. Area da Cidade\n");
       printf("2. População\n");
       printf("3. PIB\n");
       printf("4. Pontos Turisticos\n");
       printf("5. Densidade populacional\n");
       printf("6. PIB percapita\n");
       printf("7. Super poder\n");
       scanf("%d",&opcao);
    
      if(opcao==opcao2){
       printf("Voce escolheu a mesma propriedade...");
     }else{
      switch(opcao){
      case 1:
            printf("Comparando Area...\n");
          {resultado2 = carta1area > carta2area ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n", Super_poder1);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Area:%.2f\n",carta2area);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf:("Super Poder:%.2f\n",Super_poder2);
            printf("Area:%.2f\n",carta2area);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Area:%.2f\n",carta1area);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Area:%.2f\n",carta2area); 
          }
             break;
      case 2:
          printf("Comparando População...\n");
          {resultado2 = carta1populacao > carta2populacao ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("População:%ld\n",carta2populacao);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("População:%ld\n",carta2populacao);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("População:%ld\n",carta1populacao);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("População:%ld\n",carta2populacao); 
          }
             break;
      case 3:
          printf("Comparando PIB...\n");
           {resultado2 = carta1PIB > carta2PIB ? 1 : 0;}

            if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("PIB:%.2f\n",carta2PIB);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n", Super_poder1);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("PIB:%.2f\n",carta2PIB);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n", Super_poder1);
            printf("PIB:%.2f\n",carta1PIB);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("PIB:%.2f\n",carta2PIB); 
          }
              break;
      case 4:
          printf("Comparando Pontos Turisticos...\n");
           {resultado2 = carta1pontos_turisticos > carta2pontos_turisticos ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n", Super_poder1);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Pontos Turisticos:%d\n",carta1pontos_turisticos);
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Pontos Turisticos:%d\n",carta2pontos_turisticos); 
          }
              break;
      case 5:
          printf("Comparando Densidade...\n");
           {resultado2 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;}

          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n", Super_poder1);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional1);
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Densidade Populacional:%.2f\n",Densidadepopulacional2); 
          }
              break;
      case 6:
          printf("Comparando PIB percapita...\n");
           {resultado2 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;}
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("PIB percapita:%.2f\n",PIBpercapita2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("PIB percapita:%.2f\n",PIBpercapita1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("PIB percapita:%.2f\n",PIBpercapita2); 
          }
              break;
      case 7:
          printf("Comparando Super Poder...\n");
           {resultado2 = Super_poder1 > Super_poder2 ? 1 : 0;}
          
          if(resultado1 == 1 && resultado2 == 1){
            printf("===Carta 1 Venceu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else if(resultado1 != resultado2){
            printf("===EMPATE===\n");
            printf("===Carta 1===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===\n");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Super Poder:%.2f\n",Super_poder2);
          }else{
            printf("===Carta 1 Perdeu===\n");
            printf("Cidade:%s\n", carta1nome);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("Super Poder:%.2f\n",Super_poder1);
            printf("===Carta 2===");
            printf("Cidade:%s\n",carta2nome);
            printf("Super Poder:%.2f\n",Super_poder2);
            printf("Super Poder:%.2f\n",Super_poder2); 
          }
              break;
      default:
          printf("Digite uma opção valida\n");
              break;                               
    }
  }
       break;
    case 8:
      // Exibição dos Dados das Cartas:
   
     // Exibindo os valores inseridos para cada atributo da cidade, um por linha.

     printf("===Exibindo cartas cadastradas===\n");

     getchar();
     printf("          ==Carta 1==\n");
     printf("        ESTADO: %s", carta1estado);
     printf("==Cidade: %s", carta1nome);
     printf("*Codigo: %s \n", carta1codigo);
     printf("-População = %ld\n", carta1populacao);
     printf("-PIB = %.2f\n ", carta1PIB);
     printf("-Area(m²) = %.2f\n", carta1area);
     printf("-Pontos Turisticos = %d\n", carta1pontos_turisticos);
   
     // Obtendo e inicializando as variaveis Densidade populacional e PIB percapita

     float Densidadepopulacional1 = carta1populacao/carta1area;
     float PIBpercapita1 = carta1PIB/carta1populacao;

    
     // Exibindo o PIB percapita e a densiddade populacional da carta 1
     printf("-PIB per capita:%.2f\n", PIBpercapita1);
     printf("-Densidade populacional:%.2f\n", Densidadepopulacional1);
     // Declarando e inicializando variavel super poder
     double Super_poder1 =carta1populacao + carta1area+carta1PIB+carta1pontos_turisticos+PIBpercapita1-Densidadepopulacional1;
    
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
     //Calculando a densidade populaconal 2
     float Densidadepopulacional2 = carta2populacao/carta2area ;

     //Calculando o PIB per capita 2
     float PIBpercapita2 = carta2PIB/carta2populacao;
     printf("PIB per capita: %.2f\n", PIBpercapita2);
     printf("Densidade populacional:%.2f\n", Densidadepopulacional2);
     //Declarando a variavel super poder da carta 2
     double Super_poder2 =carta2populacao + carta2area+carta2PIB+carta2pontos_turisticos+PIBpercapita2-Densidadepopulacional2;
   
     // exibindo super poder
     printf("-Super Poder: %.2f\n", Super_poder2);
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
     printf("Exibindo regras do jogo...\n");
     printf("1.Serão comparadas as cartas cadastradas pelos usuarios\n  ");
     printf("2.Serão comparadas duas propriedades\n");
     printf("3.Serão comparadas as cartas por suas diferentes propriedades as de maior propriedade ganham\n");
     printf("3.A carta de maior densidade populacional perde\n");
           break;
      //saindo do jogo
    case 3:
     printf("Saindo do jogo...\n") ;
           break;

    default:
     printf("Digite uma opção valida\n");
           break;

   }
       


   

   


    return 0;
}