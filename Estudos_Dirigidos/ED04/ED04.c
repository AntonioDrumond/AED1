#include "LibTH.h"

int main()
{
    cabecalho("Estudo Dirigido", "04");

    int choice = 0;

    do
    {
        printf("%s\n", "Opcoes:");
        printf("%s\n", "01- E0411    02- E0412");
        printf("%s\n", "03- E0413    04- E0414");
        printf("%s\n", "05- E0415    06- E0416");
        printf("%s\n", "07- E0417    08- E0418");
        printf("%s\n", "09- E0419    10- E0420");
        printf("%s\n", "11- E04E1    12- E04E2");
        printf("%s\n", "Insira 0 para sair");
        printf("%s", "Digite sua escolha: ");
        scanf("%d", &choice); getchar(); printf("\n");

        switch (choice)
        {
            case 1: E0411(); break;
            case 2: E0412(); break;
            case 3: E0413(); break;
            case 4: E0414(); break;
            case 5: E0415(); break;
            case 6: E0416(); break;
            case 7: E0417(); break;
            case 8: E0418(); break;
            case 9: E0419(); break;
            case 10: E0420(); break;
            case 11: E04E1(); break;
            case 12: E04E2(); break;
            case 0: printf("%s", "Pressione ENTER para sair"); break;
            default: printf("%s\n", "ERRO - OPCAO INVALIDA"); getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}