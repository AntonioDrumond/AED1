#include "LibTH.h"

int main ()
{
    Header("Estudo Dirigido 07", "20/04/2024");

    int choice = 0;

    do
    {
        printf("%s\n", "Opcoes:");
        printf("%s\n", "01- E0711    02- E0712");
        printf("%s\n", "03- E0713    04- E0714");
        printf("%s\n", "05- E0715    06- E0716");
        printf("%s\n", "07- E0717    08- E0718");
        printf("%s\n", "09- E0719    10- E0720");
        printf("%s\n", "11- E07E1    12- E07E2");
        printf("%s\n\n", "Insira 0 para sair");
        printf("%s", "Digite sua escolha: ");
        scanf(" %d", &choice); getchar(); printf("\n");

        switch (choice)
        {
            case 1: E0711(); break;
            case 2: E0712(); break;
            case 3: E0713(); break;
            case 4: E0714(); break;
            case 5: E0715(); break;
            case 6: E0716(); break;
            case 7: E0717(); break;
            case 8: E0718(); break;
            case 9: E0719(); break;
            case 10: E0720(); break;
            case 11: E07E1(); break;
            case 12: E07E2(); break;
            case 0: printf("%s", "Pressione ENTER para sair"); break;
            default: printf("%s\n", "ERRO - OPCAO INVALIDA"); getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
