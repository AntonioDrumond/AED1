#include "LibTH.h"

int main ()
{
    cabecalho("Estudo Dirigido ", "03");

    int choice = 0;
    char word[100] = "Renato";

    do
    {
        printf("%s\n", "Digite sua opcao: ");
        printf("%s\n", "01- E0311    02- E0312");
        printf("%s\n", "03- E0313    04- E0314");
        printf("%s\n", "05- E0315    06- E0316");
        printf("%s\n", "07- E0317    08- E0318");
        printf("%s\n", "09- E0319    10- E0320");
        printf("%s\n", "11- E03E1    12- E03E2");
        printf("%s", "Opcao: ");
        scanf("%d", &choice); getchar(); printf("\n");

        switch (choice)
        {
            case 1: E0311(); break;
            case 2: E0312(); break;
            case 3: E0313(); break;
            case 4: E0314(); break;
            case 5: E0315(); break;
            case 6: E0316(); break;
            case 7: E0317(); break;
            case 8: E0318(); break;
            case 9: E0319(); break;
            case 10: E0320(); break;
            case 11: E03E1(); break;
            case 12: E03E2(); break;
            case 0: printf("%s", "Pressione ENTER para sair"); break;
            default: printf("%s\n", "ERRO - OPCAO INVALIDA"); getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}