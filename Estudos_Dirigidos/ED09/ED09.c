#include "LibTH.h"

int main ()

{
    Header("Estudo Dirigido 09", "05/05/2024");

    int choice = 0;

    do
    {
        printf("%s\n", "Opcoes: ");
        printf("%s\n", "01- E0911    02- E0912");
        printf("%s\n", "03- E0913    04- E0914");
        printf("%s\n", "05- E0915    06- E0916");
        printf("%s\n", "07- E0917    08- E0918");
        printf("%s\n", "09- E0919    10- E0920");
        printf("%s\n", "11- E09E1    12- E09E2");
        printf("%s\n\n", "Insira 0 para sair");
        printf("%s", "Digite sua escolha: ");
        scanf(" %d", &choice); getchar(); printf("\n");

        switch (choice)
        {
            case 1: E0911(); break;
            case 2: E0912(); break;
            case 3: E0913(); break;
            case 4: E0914(); break;
            case 5: E0915(); break;
            case 6: E0916(); break;
            case 7: E0917(); break;
            case 8: E0918(); break;
            case 9: E0919(); break;
            case 10: E0920(); break;
            case 11: E09E1(); break;
            case 12: E09E2(); break;
            case 0: printf("%s", "Pressione ENTER para sair"); break;
            default: printf("%s\n", "ERRO - OPCAO INVALIDA"); getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
