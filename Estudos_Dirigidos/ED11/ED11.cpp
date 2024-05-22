#include "LibTH.hpp"

int main()
{
    Header("Estudo Dirigido 11", "19/05/2024");

    int choice = 0;

    do
    {
        printf("%s\n", "Opcoes: ");
        printf("%s\n", "01- E1111    02- E1112");
        printf("%s\n", "03- E1113    04- E1114");
        printf("%s\n", "05- E1115    06- E1116");
        printf("%s\n", "07- E1117    08- E1118");
        printf("%s\n", "09- E1119    10- E1120");
        printf("%s\n\n", "Insira 0 para sair");
        printf("%s", "Digite sua escolha: ");
        scanf(" %d", &choice); getchar(); printf("\n");

        switch (choice)
        {
            case 1: E1111(); break;
            case 2: E1112(); break;
            case 3: E1113(); break;
            case 4: E1114(); break;
            case 5: E1115(); break;
            case 6: E1116(); break;
            case 7: E1117(); break;
            case 8: E1118(); break;
            case 9: E1119(); break;
            case 10: E1120(); break;
            case 0: printf("%s", "Pressione ENTER para sair"); break;
            default: printf("%s\n", "ERRO - OPCAO INVALIDA"); getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}