#include <stdio.h>

int main()
{
    int peca;

    printf("Selecione a peça para usar no xadrez: \n");
    printf("1 para Bispo \n");
    printf("2 para Torre \n");
    printf("3 para Rainha \n");
    scanf("%d", &peca);

    // Bispo(While)
    if (peca == 1)
    {
        int b = 1;
        while (b <= 5)
        {
            printf("Cima, Direita \n");
            b++;
        }
    }

    // Torre(Do while)
    if (peca == 2)
    {
        int t = 1;
        do
        {
            printf("Direita \n");
            t++;
        } while (t <= 5);
    }

    // Rainha(For)
    if (peca == 3)
    {
        for (int r = 1; r <= 8; r++)
        {
            printf("Esquerda \n");
        }
    }

    
    return 0;
}