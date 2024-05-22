#include "LibTH.hpp"

int main()
{
    Header("Estudo Dirigido 12", "26/05/2024");

    int choice = 0;

    do
    {
        std::cout << "Opcoes: " << std::endl;
        std::cout << "01- E1211    02- E1212" << std::endl;
        std::cout << "03- E1213    04- E1214" << std::endl;
        std::cout << "05- E1215    06- E1216" << std::endl;
        std::cout << "07- E1217    08- E1218" << std::endl;
        std::cout << "09- E1219    10- E1220" << std::endl;
        std::cout << "11- E12E1    12- E12E2" << std::endl;
        std::cout << "Insira 0 para sair" << std::endl << std::endl;
        std::cout << "Digite sua escolha: ";
        std::cin >> choice; getchar(); std::cout << std::endl;

        switch (choice)
        {
            case 1: E1211(); break;
            case 2: E1212(); break;
            case 3: E1213(); break;
            case 4: E1214(); break;
            case 5: E1215(); break;
            case 6: E1216(); break;
            case 7: E1217(); break;
            case 8: E1218(); break;
            case 9: E1219(); break;
            case 10: E1220(); break;
            case 11: E12E1(); break;
            case 12: E12E2(); break;
            case 0: std::cout << "Pressione ENTER para sair"; break;
            default: std::cout << "ERRO - OPCAO INVALIDA"; getchar(); break;
        }

    } while (choice != 0);

    getchar(); return(0);
}