// Desafio Nível Mestre, Lógica do jogo super trunfo

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
    int opcaoSwitch1, opcaoSwitch2; // variavel usada para fazer o controle do menu iterativo

    // variaveis para armazenar resultado de comparações
    int resultado1, resultado2;
    float somaAtributos1, somaAtributos2;

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

    // usarei essas variaveis para usar em um vetor e facilitar o codigo ao final
    float atributos1[5] = {Populacao1, Area1, Pib1, pontoTuristico1, denPopulacional1};
    float atributos2[5] = {Populacao2, Area2, Pib2, pontoTuristico2, denPopulacional2};
    char *nomesAtributos[] = {"População",
        "Área",
        "PIB",
        "Pontos turísticos",
        "Densidade populacional"};

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

    printf("------------------------------ Super Trunfo --------------------------- \n");
    printf("Escolha agora o primeiro atributo a ser comparado entre as cartas:\n");
    printf(" Opção 1 - População\n Opção 2 - Área\n Opção 3 - PIB\n Opção 4 - N° de pontos turísticos\n Opção 5 - Densidade demográfica\n Digite a Opção: ");
    scanf("%d", &opcaoSwitch1);

    printf("\nEscolha agora o segundo atributo a ser comparado entre as cartas:\n");
    printf("OBS: escolha um atributo diferente do primeiro!\n");
    printf("Opção: \n");
    printf(" Opção 1 - População\n Opção 2 - Área\n Opção 3 - PIB\n Opção 4 - N° de pontos turísticos\n Opção 5 - Densidade demográfica\n Digite a Opção: ");
    scanf("%d", &opcaoSwitch2);

    

    //faremos o uso inicial de um if else para garantir que nao haverá atributos iguais, e posteriormente, ultilizaremos a logica
    if (opcaoSwitch1 == opcaoSwitch2)
    {

        printf("Atributos iguais! tente novamente com atributos diferentes!\n");
    }
    else
    {
        switch (opcaoSwitch1)
        {
        //utilizaremos o switch case e operador ternario, o switch escolhendo a opção e o operador ternario retornando 0 ou 1 das comparações
        case 1:
            resultado1 = Populacao1 > Populacao2 ? 1 : 0;
            break;

        case 2:
            resultado1 = Area1 > Area2 ? 1 : 0;
            break;

        case 3:
            resultado1 = Pib1 > Pib2 ? 1 : 0;
            break;

        case 4:
            resultado1 = pontoTuristico1 > pontoTuristico2 ? 1 : 0;
            break;

        case 5:
            resultado1 = denPopulacional1 < denPopulacional2 ? 1 : 0;
            break;

        default:
            printf("Opção inválida, tente novamente!\n");
            break;
        }

        switch (opcaoSwitch2)
        {

        case 1:
            resultado2 = Populacao1 > Populacao2 ? 1 : 0;
            break;

        case 2:
            resultado2 = Area1 > Area2 ? 1 : 0;
            break;

        case 3:
            resultado2 = Pib1 > Pib2 ? 1 : 0;
            break;

        case 4:
            resultado2 = pontoTuristico1 > pontoTuristico2 ? 1 : 0;
            break;

        case 5:
            resultado2 = denPopulacional1 < denPopulacional2 ? 1 : 0;
            break;

        default:
            printf("Opção inválida, tente novamente!\n");
            break;
        }

        /*Após feitas todas as comparações possiveis, iremos entrar nas comparações para demonstrar o resultado,aqui 
        iremos fazer a comparação individualmente, se o operador ternario for 1, carta 1 vence, se 0, carta 2 vence, 
        porém, para tratar empates, a primeira condição do if é se os atributos sao iguais*/

        printf("------------------------- Comparação de cartas - Resultado -------------------------\n");
        printf("Cidade 1 escolhida: %s ,Cidade 2 escolhida: %s", Nome1, Nome2);
        printf("\nAtributos escolhidos: \n");
        printf("Atributo 1: \n");
        if (opcaoSwitch1 == 1)
        {
            printf("Atributo escolhido: População\n");
            printf("População carta 1 : %d ,população carta 2: %d\n", Populacao1, Populacao2);
            if (Populacao1 == Populacao2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado1 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }
        else if (opcaoSwitch1 == 2)
        {
            printf("Atributo escolhido: Área\n");
            printf("Área carta 1 : %.2f ,Área carta 2: %.2f\n", Area1, Area2);
            if (Area1 == Area2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado1 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }
        else if (opcaoSwitch1 == 3)
        {
            printf("Atributo escolhido: PIB\n");
            printf("PIB carta 1 : %.2f PIB ,carta 2: %.2f\n", Pib1, Pib2);
            if (Pib1 == Pib2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado1 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }
        else if (opcaoSwitch1 == 4)
        {
            printf("Atributo escolhido: Pontos turísticos\n");
            printf("Pontos turísticos carta 1 : %d ,Pontos turísticos carta 2: %d\n", pontoTuristico1, pontoTuristico2);
            if (pontoTuristico1 == pontoTuristico2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado1 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }
        else
        {
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("Den. Populacional carta 1 : %.2f ,Den. Populacional carta 2: %.2f\n", denPopulacional1, denPopulacional2);
            if (denPopulacional1 == denPopulacional2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado1 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }

        printf("Atributo 2: \n");
        if (opcaoSwitch2 == 1)
        {
            printf("Atributo escolhido: População\n");
            printf("População carta 1 : %d ,população carta 2: %d\n", Populacao1, Populacao2);
            if (Populacao1 == Populacao2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado2 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }
        else if (opcaoSwitch2 == 2)
        {
            printf("Atributo escolhido: Área\n");
            printf("Área carta 1 : %.2f ,Área carta 2: %.2f\n", Area1, Area2);
            if (Area1 == Area2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado2 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }
        else if (opcaoSwitch2 == 3)
        {
            printf("Atributo escolhido: PIB\n");
            printf("PIB carta 1 : %.2f ,PIB carta 2: %.2f\n", Pib1, Pib2);
            if (Pib1 == Pib2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado2 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }
        else if (opcaoSwitch2 == 4)
        {
            printf("Atributo escolhido: Pontos turísticos\n");
            printf("Pontos turísticos carta 1 : %d ,Pontos turísticos carta 2: %d\n", pontoTuristico1, pontoTuristico2);
            if (pontoTuristico1 == pontoTuristico2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado2 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }
        else
        {
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("Den. Populacional carta 1 : %.2f ,Den. Populacional carta 2: %.2f\n", denPopulacional1, denPopulacional2);
            if (denPopulacional1 == denPopulacional2)
            {
                printf("Empate entre cartas!\n");
            }
            else if (resultado2 == 1)
            {
                printf("Cidade 1 (%s) venceu!\n", Nome1);
            }
            else
            {
                printf("Cidade 2 (%s) venceu!\n", Nome2);
            }
        }

        /*foram duas estruturas if identicas, uma para o primeiro atributo, o segundo para o segundo atributo,  nele ja 
        comparamos individualmente e declaramos o campeao, agora no bloco abaixo com ajuda de arrays , iremos buscar diretamente
        os atributos e soma -los*/

        printf("------------------ Somando os Atributos ------------------------\n");
        somaAtributos1 = atributos1[opcaoSwitch1 - 1] + atributos1[opcaoSwitch2 - 1];
        somaAtributos2 = atributos2[opcaoSwitch1 - 1] + atributos2[opcaoSwitch2 - 1];

        printf("Atributos escolhidos: %s e %s\n",
               nomesAtributos[opcaoSwitch1 - 1],
               nomesAtributos[opcaoSwitch2 - 1]);
        printf("Carta 1 (%s): %.2f\n", Nome1, somaAtributos1);
        printf("Carta 2 (%s): %.2f\n", Nome2, somaAtributos2);

        if (somaAtributos1 > somaAtributos2)
            printf("Carta 1 (%s) venceu na soma dos atributos!\n", Nome1);
        else if (somaAtributos1 < somaAtributos2)
            printf("Carta 2 (%s) venceu na soma dos atributos!\n", Nome2);
        else
            printf("Empate na soma dos atributos!\n");
    }

    return 0;
}
