#include "LibTH.h"

int main ()
{
    Header("Estudo Dirigido 06", "14/04/2024");

    int choice = 0;

    do
    {
        printf("%s\n", "Opcoes:");
        printf("%s\n", "01- E0611    02- E0612");
        printf("%s\n", "03- E0613    04- E0614");
        printf("%s\n", "05- E0615    06- E0616");
        printf("%s\n", "07- E0617    08- E0618");
        printf("%s\n", "09- E0619    10- E0620");
        printf("%s\n", "11- E06E1    12- E06E2");
        printf("%s\n\n", "Insira 0 para sair");
        printf("%s", "Digite sua escolha: ");
        scanf(" %d", &choice); getchar(); printf("\n");

        switch (choice)
        {
            case 1: E0611(); break;
            case 2: E0612(); break;
            case 3: E0613(); break;
            case 4: E0614(); break;
            case 5: E0615(); break;
            case 6: E0616(); break;
            case 7: E0617(); break;
            case 8: E0618(); break;
            case 9: E0619(); break;
            case 10: E0620(); break;
            case 11: E06E1(); break;
            case 12: E06E2(); break;
            case 0: printf("%s", "Pressione ENTER para sair"); break;
            default: printf("%s\n", "ERRO - OPCAO INVALIDA"); getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
