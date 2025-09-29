// Desafio Nível Novato, Lógica do jogo super trunfo

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

    // duas variaveis para resultado de cálculos posteriores, respectivamente ( Densidade Populacional e PIB per Capita)
    float denPopulacional1, pibCapita1, denPopulacional2, pibCapita2;

    /*iniciando o programa aonde o usuário terá acesso e poderá inserir os dados,
   utilizaremos Printf() para a impressão de dados na tela do usuário, e scanf()
   para a leitura dos dados que o usuário informar e salva-las nas variáveis declaradas.*/

    printf("-------------------------- Super Trunfo ------------------------------\n"
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

    // Estrutura de decisão if, aonde iremos comparar um atributo da carta e determinar qual será vencedora

    /*iniciamos o bloco , e nos parenteses, colocaremos a comparação entre os valores da população da carta 1 e carta 2, aonde:
    Se a população da carta 1 for maior , o primeiro bloco do if apresentará os dados com a carta 1 sendo vencedora, se não, o bloco
    2 irá apresentar no codigo como a carta 2 sendo a vencedora.*/
    printf("\nComparação de cartas (Atributo: População): \n");
    printf("Carta 1 - %s: %d\n", Nome1, Populacao1);
    printf("Carta 2 - %s: %d\n", Nome2, Populacao2);
    if (Populacao1 > Populacao2)
         {
            printf("Resultado: Carta 1 - %s venceu!\n", Nome1);
         }
    else
        {
            printf("Resultado: Carta 2 - %s venceu!\n", Nome2);
        }

    return 0;
}
