    #include <stdio.h>
    int main(){

        int i;

        //Movimento da Torre (5 casas para a direita) - WHILE
        printf("Movimentando a Torre:\n");
        i = 1;

        while (i<= 5)
        {
            printf("Direita\n");
            i++;
        }

        printf("\n");

        //Movimento do Bispo (5 casas na diagonal: Cima, Direita) - FOR
        printf("Movimentando o Bispo:\n");

        for ( i = 1; i <= 5; i++)
        {
            printf("Cima, Direita\n");
        }

        printf("\n");

        //Movimento da Rainha (8 casas para a Esquerda) - DO-WHILE
        printf("Movimentando a Rainha:\n");
        i = 1;

        do
        {
            printf("Esquerda\n");
            i++;
        } while (i <= 8);


        return 0;

    }