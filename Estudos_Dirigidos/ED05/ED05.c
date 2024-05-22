#include "LibTH.h"

int main ()
{
    Header("Estudo Dirigido", "05");

    int choice = 0;

    do
    {
        printf("%s\n", "Opcoes:");
        printf("%s\n", "01- E0511    02- E0512");
        printf("%s\n", "03- E0513    04- E0514");
        printf("%s\n", "05- E0515    06- E0516");
        printf("%s\n", "07- E0517    08- E0518");
        printf("%s\n", "09- E0519    10- E0520");
        printf("%s\n", "11- E05E1    12- E05E2");
        printf("%s\n\n", "Insira 0 para sair");
        printf("%s", "Digite sua escolha: ");
        scanf(" %d", &choice); getchar(); printf("\n");

        switch (choice)
        {
            case 1: E0511(); break;
            case 2: E0512(); break;
            case 3: E0513(); break;
            case 4: E0514(); break;
            case 5: E0515(); break;
            case 6: E0516(); break;
            case 7: E0517(); break;
            case 8: E0518(); break;
            case 9: E0519(); break;
            case 10: E0520(); break;
            case 11: E05E1(); break;
            case 12: E05E2(); break;
            case 0: printf("%s", "Pressione ENTER para sair"); break;
            default: printf("%s\n", "ERRO - OPCAO INVALIDA"); getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}