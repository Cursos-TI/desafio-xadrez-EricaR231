        #include <stdio.h>
        int main(){

            int i, j;

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

            printf("\n");

            printf("Movimentando o Cavalo:\n");

            int opcao;

            //Menu para escolher a opção
            printf("\nEscolha o movimento do cavalo que deseja:\n");
            printf("1. Para Baixo e para à Esquerda\n");
            printf("2. Para Cima e para à Direita\n");
            printf("\n");
            printf("Digite o número de sua opção: ");
            scanf("%d", &opcao);

            
            switch (opcao) {
                case 1:
                    // Movimento do Cavalo (2 casas para Baixo)
                    for (i = 1; i <= 2; i++) 
                    {
                        printf("Baixo,");
                    }

                    //Movimento do Cavalo (1 casa para à Esquerda)
                    j = 1;

                    while (j <= 1)
                    {
                        printf("Esquerda\n");
                        j++;
                    }
                    break;

                case 2:
                    // Movimento do Cavalo (2 casas para Cima)
                    for (i = 1; i <= 2; i++)
                    {
                        printf("Cima,");
                    }

                    //Movimento do Cavalo (1 casa para à Direita)
                    j = 1;

                    while (j <= 1) 
                    {
                        printf("Direita\n");
                        j++;
                    }
                    break;

                default:
                    printf("Opção inválida!\n");
            }

        
            return 0;

        }