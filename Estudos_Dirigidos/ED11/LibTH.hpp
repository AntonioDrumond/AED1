#include "LibAD.hpp"

// void stuff()
// {
//     int var = 0;
//     std::cout << "Renato";
//     std::cin >> var;
//     char malloc = "new";
//     char calloc = "new[]";
//     char free = "delete - delete[]";
    // char files = "FILE* fil = fopen(\"filename\", \"w or r\") -> ofstream fil (\"filename\")";
//     char files2 = "ifstream ou ofstream";
//     char files3 = "fil1 << thing1 << thing2 << ...";
//     char files4 = "fil2 >> thing1 >> thing2 >> ...";
// }

class randomnum
{
    public:
    int n;
    int inf;
    int sup;

    randomnum(int n)
    {
        this->n = n;
    }
};

void E1111()
{
    randomnum* randoms = new randomnum(3);
    srand(time(0));
    int seed = 1;
    int n = 0, inf = 0, sup = 0;
    std::cout << "Insira o numero de numeros a serem gerados: ";
    std::cin >> n; getchar();
    std::cout << "Insira os limites inferior e superior da geracao: ";
    std::cin >> inf >> sup; getchar();
    std::ofstream fil ("dados.txt");
    fil << "Serao gerados " << n << " valores aleatorios\n";
    for (int i=0; i<n; i++)
    {
        fil << randInt(inf, sup, seed) << "\n";
        seed *= 13;
    }
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    getchar();
}

void E1112()
{
    int size = 0;
    std::cout << "Insira um arranjo de numeros inteiros separados por espacos no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira o numero de elementos do arranjo: ";
    std::cin >> size; getchar();
    ARRint* arri = new ARRint(size);
    arri->fread(fil);
    std::cout << "O arranjo em questao e: ";
    arri->print(); std::cout << std::endl;
    if(arri->arr[arri->getBiggerEvenPos()]%2==0) std::cout << "O maior numero par no arranjo e: " << arri->arr[arri->biggerEvenPos] << std::endl;
    else std::cout << "Nao haviam numeros pares no arranjo. " << std::endl;    
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete arri;
    getchar();
}

void E1113()
{
    int size = 0;
    std::cout << "Insira um arranjo de numeros inteiros separados por espacos no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira o numero de elementos do arranjo: ";
    std::cin >> size; getchar();
    ARRint* arri = new ARRint(size);
    arri->fread(fil);
    std::cout << "O arranjo em questao e: ";
    arri->print(); std::cout << std::endl;
    if(arri->arr[arri->getSmallerOddPos()]%2!=0) std::cout << "O menor numero impar no arranjo e: " << arri->arr[arri->smallerOddPos] << std::endl;
    else std::cout << "Nao haviam numeros impares no arranjo. " << std::endl;    
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete arri;
    getchar();
}

void E1114()
{
    int size = 0, posA = 0, posB = 0;
    std::cout << "Insira um arranjo de numeros inteiros separados por espacos no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira o numero de elementos do arranjo: ";
    std::cin >> size; getchar();
    ARRint* arri = new ARRint(size);
    arri->fread(fil);
    std::cout << "O arranjo em questao e: ";
    arri->print(); std::cout << std::endl;
    std::cout << "Insira um intervalo de posicoes para somar os elementos entre elas: ";
    std::cin >> posA >> posB; getchar();
    std::cout << "A soma dos elementos pedidos e: " << arri->sumElements(posA, posB) << std::endl;
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete arri;
    getchar();
}

void E1115()
{
    int size = 0, posA = 0, posB = 0;
    std::cout << "Insira um arranjo de numeros inteiros separados por espacos no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira o numero de elementos do arranjo: ";
    std::cin >> size; getchar();
    ARRint* arri = new ARRint(size);
    arri->fread(fil);
    std::cout << "O arranjo em questao e: ";
    arri->print(); std::cout << std::endl;
    std::cout << "Insira um intervalo de posicoes para obter a media dos elementos entre elas: ";
    std::cin >> posA >> posB; getchar();
    std::cout << "A media dos elementos pedidos e: " << arri->averageElements(posA, posB) << std::endl;
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete arri;
    getchar();
}

void E1116()
{
    int size = 0;
    std::cout << "Insira um arranjo de numeros inteiros separados por espacos no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira o numero de elementos do arranjo: ";
    std::cin >> size; getchar();
    ARRint* arri = new ARRint(size);
    arri->fread(fil);
    std::cout << "O arranjo em questao e: ";
    arri->print(); std::cout << std::endl;
    if(arri->areAllNegatives()) std::cout <<"Todos os numeros no arranjo sao negativos. " << std::endl;
    else std::cout << "Nem todos os numeros no arranjo sao negativos. " << std:: endl;
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete arri;
    getchar();
}

void E1117()
{
    int size = 0;
    std::cout << "Insira um arranjo de numeros inteiros separados por espacos no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira o numero de elementos do arranjo: ";
    std::cin >> size; getchar();
    ARRint* arri = new ARRint(size);
    arri->fread(fil);
    std::cout << "O arranjo em questao e: ";
    arri->print(); std::cout << std::endl;
    if (arri->isSortedReverse()) std::cout << "O arranjo esta ordenado na ordem reversa." << std::endl;
    else std::cout << "O arranjo nao esta ordenado em ordem reversa." << std::endl;
    fil.close();
    delete arri;
    getchar();
}

void E1118()
{
    int size = 0;
    int target = 0, posA = 0, posB = 0;
    std::cout << "Insira um arranjo de numeros inteiros separados por espacos no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira o numero de elementos do arranjo: ";
    std::cin >> size; getchar();
    ARRint* arri = new ARRint(size);
    arri->fread(fil);
    std:: cout << "Insira um numero inteiro para ser procurado no arranjo: ";
    std::cin >> target; getchar();
    std::cout << "Insira um intervalo de posicoes para a procura: ";
    std::cin >> posA >> posB; getchar();
    int searchs = arri->search(target, posA, posB);
    if(searchs==-1) std::cout << "O alvo nao pode ser encontrado. " << std::endl;
    else std::cout << "O alvo estava na posicao " << searchs << std::endl;
    fil.close();
    delete arri;
    getchar();
}

void E1119()
{
    int size = 0;
    int c = 0, posA = 0, posB = 0;
    std::cout << "Insira um arranjo de numeros inteiros separados por espacos no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira o numero de elementos do arranjo: ";
    std::cin >> size; getchar();
    ARRint* arri = new ARRint(size);
    arri->fread(fil);
    std::cout << "O arranjo em questao e: ";
    arri->print(); std::cout << std::endl;
    std:: cout << "Insira um numero inteiro para multiplicar elementos do arranjo: ";
    std::cin >> c; getchar();
    std::cout << "Insira um intervalo de posicoes para a operacao: ";
    std::cin >> posA >> posB; getchar();
    arri->scale(c, posA, posB);
    std::cout << "Resultado: ";
    arri->print(); std::cout << std::endl;
    fil.close();
    delete arri;
    getchar();
}

void E1120()
{
    int size = 0;
    std::cout << "Insira um arranjo de numeros inteiros separados por espacos no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira o numero de elementos do arranjo: ";
    std::cin >> size; getchar();
    ARRint* arri = new ARRint(size);
    arri->fread(fil);
    std::cout << "O arranjo em questao e: ";
    arri->print(); std::cout << std::endl;
    arri->sortReverse();
    std::cout << "O arranjo ordenado na ordem inversa: ";
    arri->print(); std::cout << std::endl;
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete arri;
    getchar();
}