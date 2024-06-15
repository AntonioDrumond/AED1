#include "LibTH.hpp"

int main()
{
    Header("Estudo Dirigido 15", "16/06/2024");

    int choice = 0;

    do
    {
        std::cout << "Opcoes: " << std::endl;
        std::cout << "01- E1511    02- E1512" << std::endl;
        std::cout << "03- E1513    04- E1514" << std::endl;
        std::cout << "05- E1515    06- E1516" << std::endl;
        std::cout << "07- E1517    08- E1518" << std::endl;
        std::cout << "09- E1519    10- E1520" << std::endl;
        std::cout << "11- E15E1    12- E15E2" << std::endl;
        std::cout << "Insira 0 para sair" << std::endl << std::endl;
        std::cout << "Digite sua escolha: ";
        std::cin >> choice; getchar(); std::cout << std::endl;

        switch (choice)
        {
            case 1: E1511(); break;
            case 2: E1512(); break;
            case 3: E1513(); break;
            case 4: E1514(); break;
            case 5: E1515(); break;
            case 6: E1516(); break;
            case 7: E1517(); break;
            case 8: E1518(); break;
            case 9: E1519(); break;
            case 10: E1520(); break;
            case 11: E15E1(); break;
            case 12: E15E2(); break;
            case 0: std::cout << "Pressione ENTER para sair"; break;
            default: std::cout << "ERRO - OPCAO INVALIDA"; getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
