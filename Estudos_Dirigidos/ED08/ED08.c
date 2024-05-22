#include "LibTH.h"

int main ()
{
    Header("Estudo Dirigido 08", "28/04/2024");

    int choice = 0;

    do
    {
        printf("%s\n", "Opcoes:");
        printf("%s\n", "01- E0811    02- E0812");
        printf("%s\n", "03- E0813    04- E0814");
        printf("%s\n", "05- E0815    06- E0816");
        printf("%s\n", "07- E0817    08- E0818");
        printf("%s\n", "09- E0819    10- E0820");
        printf("%s\n", "11- E08E1");
        printf("%s\n\n", "Insira 0 para sair");
        printf("%s", "Digite sua escolha: ");
        scanf(" %d", &choice); getchar(); printf("\n");

        switch (choice)
        {
            case 1: E0811(); break;
            case 2: E0812(); break;
            case 3: E0813(); break;
            case 4: E0814(); break;
            case 5: E0815(); break;
            case 6: E0816(); break;
            case 7: E0817(); break;
            case 8: E0818(); break;
            case 9: E0819(); break;
            case 10: E0820(); break;
            case 11: E08E1(); break;
            //case 12: E08E2(); break;
            case 0: printf("%s", "Pressione ENTER para sair"); break;
            default: printf("%s\n", "ERRO - OPCAO INVALIDA"); getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
