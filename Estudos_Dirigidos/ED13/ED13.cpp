#include "LibTH.hpp"

int main()
{
    Header("Estudo Dirigido 13", "02/06/2024");

    int choice = 0;

    do
    {
        std::cout << "Opcoes: " << std::endl;
        std::cout << "01- E1311    02- E1312" << std::endl;
        std::cout << "03- E1313    04- E1314" << std::endl;
        std::cout << "05- E1315    06- E1316" << std::endl;
        std::cout << "07- E1317    08- E1318" << std::endl;
        std::cout << "09- E1319    10- E1320" << std::endl;
        std::cout << "11- E13E1    12- E13E2" << std::endl;
        std::cout << "Insira 0 para sair" << std::endl << std::endl;
        std::cout << "Digite sua escolha: ";
        std::cin >> choice; getchar(); std::cout << std::endl;

        switch (choice)
        {
            case 1: E1311(); break;
            case 2: E1312(); break;
            case 3: E1313(); break;
            case 4: E1314(); break;
            case 5: E1315(); break;
            case 6: E1316(); break;
            case 7: E1317(); break;
            case 8: E1318(); break;
            case 9: E1319(); break;
            case 10: E1320(); break;
            case 11: E13E1(); break;
            case 12: E13E2(); break;
            case 0: std::cout << "Pressione ENTER para sair"; break;
            default: std::cout << "ERRO - OPCAO INVALIDA"; getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}
