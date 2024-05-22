#include "LibTH.h"

int main ()

{
    Header("Estudo Dirigido 10", "05/05/2024");

    int arr[6] = {8, 3, 2, 5, 2, 9};
    printfArrInt(arr, 6);
    printf("\n");
    sortArrayReverse(arr, 6);
    printfArrInt(arr, 6);
    getchar();

    int choice = 0;

    do
    {
        printf("%s\n", "Opcoes: ");
        printf("%s\n", "01- E1011    02- E1012");
        printf("%s\n", "03- E1013    04- E1014");
        printf("%s\n", "05- E1015    06- E1016");
        printf("%s\n", "07- E1017    08- E1018");
        printf("%s\n", "09- E1019    10- E1020");
        printf("%s\n", "11- E10E1");
        printf("%s\n\n", "Insira 0 para sair");
        printf("%s", "Digite sua escolha: ");
        scanf(" %d", &choice); clear(); printf("\n");

        switch (choice)
        {
            case 1: E1011(); break;
            case 2: E1012(); break;
            case 3: E1013(); break;
            case 4: E1014(); break;
            case 5: E1015(); break;
            case 6: E1016(); break;
            case 7: E1017(); break;
            case 8: E1018(); break;
            case 9: E1019(); break;
            case 10: E1020(); break;
            case 11: E10E1(); break;
            case 0: printf("%s", "Pressione ENTER para sair"); break;
            default: printf("%s\n", "ERRO - OPCAO INVALIDA"); getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
