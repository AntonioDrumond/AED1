#include "LibTH.hpp"

int main()
{
    Header("Estudo Dirigido 16", "23/06/2024");

    int choice = 0;

    do
    {
        std::cout << "Opcoes: " << std::endl;
        std::cout << "01- E1611    02- E1612" << std::endl;
        std::cout << "03- E1613    04- E1614" << std::endl;
        std::cout << "05- E1615    06- E1616" << std::endl;
        std::cout << "07- E1617    08- E1618" << std::endl;
        std::cout << "09- E1619    10- E1620" << std::endl;
        std::cout << "11- E16E1    12- E16E2" << std::endl;
        std::cout << "Insira 0 para sair" << std::endl << std::endl;
        std::cout << "Digite sua escolha: ";
        std::cin >> choice; getchar(); std::cout << std::endl;

        switch (choice)
        {
            case 1: E1611(); break;
            case 2: E1612(); break;
            case 3: E1613(); break;
            case 4: E1614(); break;
            case 5: E1615(); break;
            case 6: E1616(); break;
            case 7: E1617(); break;
            case 8: E1618(); break;
            case 9: E1619(); break;
            case 10: E1620(); break;
            case 11: E16E1(); break;
            case 12: E16E2(); break;
            case 0: std::cout << "Pressione ENTER para sair"; break;
            default: std::cout << "ERRO - OPCAO INVALIDA"; getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
