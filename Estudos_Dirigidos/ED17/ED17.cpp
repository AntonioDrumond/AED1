#include "LibTH.hpp"

int main()
{
    Header("Estudo Dirigido 17", "30/06/2024");

    int choice = 0;

    do
    {
        std::cout << "Opcoes: " << std::endl;
        std::cout << "01- E1711    02- E1712" << std::endl;
        std::cout << "03- E1713    04- E1714" << std::endl;
        std::cout << "05- E1715    06- E1716" << std::endl;
        std::cout << "07- E1717    08- E1718" << std::endl;
        std::cout << "09- E1719    10- E1720" << std::endl;
        std::cout << "11- E17E1    12- E17E2" << std::endl;
        std::cout << "Insira 0 para sair" << std::endl << std::endl;
        std::cout << "Digite sua escolha: ";
        std::cin >> choice; getchar(); std::cout << std::endl;

        switch (choice)
        {
            case 1: E1711(); break;
            case 2: E1712(); break;
            case 3: E1713(); break;
            case 4: E1714(); break;
            case 5: E1715(); break;
            case 6: E1716(); break;
            case 7: E1717(); break;
            case 8: E1718(); break;
            case 9: E1719(); break;
            case 10: E1720(); break;
            case 11: E17E1(); break;
            case 12: E17E2(); break;
            case 0: std::cout << "Pressione ENTER para sair"; break;
            default: std::cout << "ERRO - OPCAO INVALIDA"; getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
