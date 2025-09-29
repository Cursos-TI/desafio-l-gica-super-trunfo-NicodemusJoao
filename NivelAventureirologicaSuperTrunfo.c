// Desafio Nível Aventureiro, Lógica do jogo super trunfo

#include <stdio.h>

int main()
{

    /*Iniciamos o programa pela declaração de variaveis, cada variável armazenará o valor da sua respectiva carta*/

    char Estado1, Estado2;
    char codCarta1[3], codCarta2[3];
    char Nome1[30], Nome2[30];
    int Populacao1, Populacao2;
    float Area1, Area2, Pib1, Pib2;
    int pontoTuristico1, pontoTuristico2;
    int opcaoSwitch; // variavel usada para fazer o controle do menu iterativo

    // duas variaveis para resultado de cálculos posteriores, respectivamente ( Densidade Populacional e PIB per Capita)
    float denPopulacional1, pibCapita1, denPopulacional2, pibCapita2;

    /*iniciando o programa aonde o usuário terá acesso e poderá inserir os dados,
   utilizaremos Printf() para a impressão de dados na tela do usuário, e scanf()
   para a leitura dos dados que o usuário informar e salva-las nas variáveis declaradas.*/

    printf("\n-------------------------- Super Trunfo ------------------------------\n"
           "Para Iniciarmos o jogo, primeiro passo será informar os dados das cartas!\n");

    /*leitura de dados da primeira carta, atentando no scanf para o uso correto dos especificadores e ao nome correto das variaveis,
    na leitura de dados , utilizamos 0 & nas variáveis */
    printf("Informe os dados da primeira carta!\n");
    printf("Digite o Estado, sendo apenas uma letra de 'A' a 'H' : ");
    scanf(" %c", &Estado1);
    printf("Digite o código da carta, sendo ele '01' a '04': ");
    scanf("%s", &codCarta1);
    printf("Digite o nome da cidade referente ao seu Estado: ");
    scanf("%s", Nome1);
    printf("Digite o número de habitantes de sua cidade: ");
    scanf("%d", &Populacao1);
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area1);
    printf("Informe o PIB (Produto Interno Bruto) de sua cidade: ");
    scanf("%f", &Pib1);
    printf("Informe quantos pontos turísticos existem na cidade: ");
    scanf("%d", &pontoTuristico1);

    /*leitura de dados da segunda carta, seguindo a mesma observação da primeira leitura de dados,
    mas utilizando as variaveis para a segunda carta*/
    printf("\nPerfeito!, Agora insira os dados da segunda carta.\n");
    printf("Digite o Estado, sendo apenas uma letra de 'A' a 'H': ");
    scanf(" %c", &Estado2);
    printf("Digite o código da carta, sendo ele '01' a '04': ");
    scanf("%s", &codCarta2);
    printf("Digite o nome da cidade referente ao seu Estado: ");
    scanf("%s", Nome2);
    printf("Digite o número de habitantes de sua cidade: ");
    scanf("%d", &Populacao2);
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Area2);
    printf("Informe o PIB (Produto Interno Bruto) de sua cidade: ");
    scanf("%f", &Pib2);
    printf("Informe quantos pontos turísticos existem na cidade: ");
    scanf("%d", &pontoTuristico2);

    /*Após a leitura dos dados , iremos calcular a densidade populacional e o pib per capita segundo os
   dados lidos, e seguindo as seguintes formulas :
   - denPopulacional = populaçao / area ,
   - pib per capita = PIb / populacao*/

    // cálculo da primeira carta
    denPopulacional1 = (float)Populacao1 / Area1;
    pibCapita1 = Pib1 / (float)Populacao1;

    // cálculo da segunda carta
    denPopulacional2 = (float)Populacao2 / Area2;
    pibCapita2 = Pib2 / (float)Populacao2;

    /*Finalizado a entrada de dados pelo usuário e o cálculo de Densidade, Pib per capita , agora iremos
 demonstrar as cartas cadastradas, e na saída de dados , no printf() deveremos utilizar os mesmos especificadores
  utilizados no scanf() de leitura, porém aqui, a estrutura se diferencia pois estará no meio do texto que o usuário lerá,
  seguido da declaração da variável, no printf() nao será necessário o uso do &.  */

    printf("Chegamos ao fim do cadastro das cartas!, confira os dados informados: \n"
           "\n------------------------ Cartas Cadastradas -------------------------- \n");

    // Impressao dos dados da primeira carta
    printf("Carta 1: \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %c%s\n", Estado1, codCarta1);
    printf("Nome da cidade: %s\n", Nome1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f Km²\n", Area1);
    printf("PIB: %.2f Bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", denPopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);

    // Impressão dos dados da segunda carta
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %c%s\n", Estado2, codCarta2);
    printf("Nome da cidade: %s\n", Nome2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", denPopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);

    /*iniciaremos com o menu, demonstrando as opções para o usuário , e utilizando uma variavel de controle
    para o switch case, servindo para armazenar a escolha do usuário, logo apos implementaremos
    o bloco de switch case com blocos de if else, aonde o switch será para a implementação do
    menu interativo com  o usuário, e os if elses para fazer comparações entre atributos*/


    //menu interativo com opções
    printf("------------------------------ Super Trunfo --------------------------- \n");
    printf("Escolha agora a opção de um atributo a ser comparado entre as cartas:\n");
    printf(" Opção 1 - Nome do País\n Opção 2 - População\n Opção 3 - Área\n Opção 4 - PIB\n Opção 5 - N° de pontos Turísticos\n Opção 6 - Densidade demográfica\n Digite a Opção: ");
    scanf("%d", &opcaoSwitch);

    printf("-------------------------------- Resultado ------------------------------ \n");

    //inicio switch case, aonde a opção do usuario determinará qual bloco if irá executar

    //usaremos if elses aninhados, comparando atributos, com densidade demografica sendo inverso por regra do jogo, ganha a menor
    switch(opcaoSwitch){

        case 1: 
            printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
            printf("Atributo escolhido: Nome\n");
            printf("Nome cidade 1: %s\n, Nome cidade 2: %s\n", Nome1, Nome2);
                      
            
        break;

        case 2:
            if(Populacao1 > Populacao2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: População \n");
                printf("População país 1: %d\nPopulação país 2: %d\n", Populacao1, Populacao2);
                printf("Carta 1 (%s) Venceu!\n", Nome1);
            
            }else if(Populacao1 < Populacao2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: População \n");
                printf("População cidade 1: %d\nPopulação cidade 2: %d\n", Populacao1, Populacao2);
                printf("Carta 2 (%s) Venceu!\n", Nome2);

            }else{
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: População \n");
                printf("População cidade 1: %d\nPopulação cidade 2: %d\n", Populacao1, Populacao2);
                printf("Empate!");
            }

            
        
        break;

        case 3:
             if(Area1 > Area2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: Área\n");
                printf("Área cidade 1: %.2f\nÁrea cidade 2: %.2f\n", Area1, Area2);
                printf("Carta 1 (%s) Venceu!\n", Nome1);
            
            }else if(Area1 < Area2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: Área\n");
                printf("Área cidade 1: %.2f\nÁrea cidade 2: %.2f\n", Area1, Area2);
                printf("Carta 2 (%s) Venceu!\n", Nome2);

            }else{
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: Área\n");
                printf("Área cidade 1: %.2f\nÁrea cidade 2: %.2f\n", Area1, Area2);
                printf("Empate!");

            }

            

        break;

        case 4:

            if(Pib1 > Pib2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: PIB\n");
                printf("PIB cidade 1: %.2f\nPIB cidade 2: %.2f\n", Pib1, Pib2);
                printf("Carta 1 (%s) Venceu!\n", Nome1);
            
            }else if(Pib1 < Pib2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: PIB\n");
                printf("PIB cidade 1: %.2f\nPIB cidade 2: %.2f\n", Pib1, Pib2);
                printf("Carta 2 (%s) Venceu!\n", Nome2);

            }else{
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: PIB\n");
                printf("PIB cidade 1: %.2f\nPIB cidade 2: %.2f\n", Pib1, Pib2);
                printf("Empate!");

            }

        break;

        case 5: 
            
            if(pontoTuristico1 > pontoTuristico2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: N° de pontos turísticos\n");
                printf("Pontos Turísticos cidade 1: %d\nPontos Turísticos cidade 2: %d\n", pontoTuristico1, pontoTuristico2);
                printf("Carta 1 (%s) Venceu!\n", Nome1);
            
            }else if(pontoTuristico1 < pontoTuristico2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: N° de pontos turísticos\n");
                printf("Pontos Turísticos cidade 1: %d\nPontos Turísticos cidade 2: %d\n", pontoTuristico1, pontoTuristico2);
                printf("Carta 2 (%s) Venceu!\n", Nome2);

            }else{
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: N° de pontos Turísticos\n");
                printf("Pontos Turísticos cidade 1: %.2f\nPontos Turísticos cidade 2: %.2f\n", pontoTuristico1, pontoTuristico2);
                printf("Empate!");

            }

        break;

        case 6: 

            if(denPopulacional1 < denPopulacional2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: Densidade demográfica\n");
                printf("Densidade demográfica cidade 1: %.2f\nDensidade demográfica cidade 2: %.2f\n", denPopulacional1, denPopulacional2);
                printf("Carta 1 (%s) Venceu!\n", Nome1);
            
            }else if(denPopulacional1 > denPopulacional2){
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: Densidade demográfica \n");
                printf("Densidade demográfica cidade 1: %.2f\nDensidade demográfica cidade 2: %.2f\n", denPopulacional1, denPopulacional2);
                printf("Carta 2 (%s) Venceu!\n", Nome2);

            }else{
                printf("Cidades comparadas: %s, %s \n", Nome1, Nome2);
                printf("Atributo escolhido: Densidade demográfica \n");
                printf("Densidade demográfica cidade 1: %.2f\nDensidade demográfica cidade 2: %.2f\n", denPopulacional1, denPopulacional2);
                printf("Empate!");

            }

        break;

        default:

            printf("Opção inválida, tente novamente!\n");

            break;
    
    }

    return 0;
}
