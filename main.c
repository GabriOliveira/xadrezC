#include <stdio.h>
// Movimento das peças (quantidade = quantidade de movimentos e unidade = ações que teram e cada quantidade de movimento)
void bispoMove(int quantidade1)
{ // Movimento do Bispo com recursividade
    if (quantidade1 == 0) return;
        printf("Cima \n");
        printf("Direita \n");
        bispoMove(quantidade1 -1);

    
}

void torreMove(int quantidade2)
{ // Movimento da Torre com recursividade
    if (quantidade2 == 0) return;
        printf("Direita  \n");
    torreMove(quantidade2 - 1);
    
}

void rainhaMove(int quantidade3)
{ // Movimento da Rainha com recursividade
    if (quantidade3 == 0) return;
        printf("Esquerda \n");
        printf("Cima \n");
        printf("Direita \n");
    rainhaMove(quantidade3 - 1);
}

void cavaloMove(int quantidade4)
{ // Movimento do Cavalo com recursividade
    for (int unidade4 = 1; unidade4 <= quantidade4; unidade4++)
    {
        for (int cima = 1; cima <= 2; cima++)
        {
            printf("Cima \n");
        }
        for (int direita = 1; direita <= 1; direita++)
        {
            printf("Direita \n");

            printf("FIM DO MOVIMENTO %d \n", unidade4);
        }
    }
}

int main()
{
    int peca;
    int quantidade_movimento;
    // Entrada de Dados para escolha da peça
    printf("Selecione a peça para usar no xadrez: \n");
    printf("1 para Bispo \n");
    printf("2 para Torre \n");
    printf("3 para Rainha \n");
    printf("4 para Cavalo \n");
    scanf("%d", &peca);

    printf("Qual a quantidade de movimentos? \n");
    scanf("%d", &quantidade_movimento);

    // Estrutura de decisão por trás da escolha da peça, e chamada recursividade
    switch (peca)
    {
    // Bispo
    case 1:
        bispoMove(quantidade_movimento);
        break;

    // Torre
    case 2:
        torreMove(quantidade_movimento);
        break;

    // Rainha
    case 3:
        rainhaMove(quantidade_movimento); // 8
        break;

    // Cavalo
    case 4:
        cavaloMove(quantidade_movimento);
        break;

    default:
        printf("Peça Digitada Inválida..:/ \n");
        break;
    }

    return 0;
}