#include "LibTH.hpp"

int main()
{
    Header("Estudo Dirigido 14", "09/06/2024");

    int choice = 0;

    do
    {
        std::cout << "Opcoes: " << std::endl;
        std::cout << "01- E1411    02- E1412" << std::endl;
        std::cout << "03- E1413    04- E1414" << std::endl;
        std::cout << "05- E1415    06- E1416" << std::endl;
        std::cout << "07- E1417    08- E1418" << std::endl;
        std::cout << "09- E1419    10- E1420" << std::endl;
        std::cout << "11- E14E1    12- E14E2" << std::endl;
        std::cout << "Insira 0 para sair" << std::endl << std::endl;
        std::cout << "Digite sua escolha: ";
        std::cin >> choice; getchar(); std::cout << std::endl;

        switch (choice)
        {
            case 1: E1411(); break;
            case 2: E1412(); break;
            case 3: E1413(); break;
            case 4: E1414(); break;
            case 5: E1415(); break;
            case 6: E1416(); break;
            case 7: E1417(); break;
            case 8: E1418(); break;
            case 9: E1419(); break;
            case 10: E1420(); break;
            case 11: E14E1(); break;
            case 12: E14E2(); break;
            case 0: std::cout << "Pressione ENTER para sair"; break;
            default: std::cout << "ERRO - OPCAO INVALIDA"; getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
