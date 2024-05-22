#include "LibAD.hpp"

void E1211()
{
    std::ofstream fil ("dados.txt");
    int i = 0, j = 0;
    int a = 0, b = 0;
    std::cout << "Insira as dimensoes da matriz: ";
    std::cin >> i >> j; getchar();
    MATint* matt = new MATint(i, j);
    std::cout << "Insira os intervalos para a geracao de numeros aleatorios: ";
    std::cin >> a >> b; getchar();
    matt->fillRand(a, b);
    fil << "Serao gerados " << matt->cols*matt->lins << " numeros aleatorios:\n";
    matt->fprint(fil);
    std::cout << "Pressione ENTER para terminar. ";
    delete matt;
    fil.close();
    getchar();
}

void E1212()
{
    int i = 0, j = 0;
    int c = 0;
    std::cout << "Insira uma matriz de numeros inteiros no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira as dimensoes da matriz: ";
    std::cin >> i >> j; getchar();
    MATint* matt = new MATint(i, j);
    matt->fread(fil);
    std::cout << "Insira um escalar para multiplicar a matriz: ";
    std::cin >> c; getchar();
    std::cout << "Resultado: " << std:: endl;
    matt->scale(c);
    matt->print();
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete matt;
    getchar();
}

void E1213()
{
    int i = 0, j = 0;
    int c = 0;
    std::cout << "Insira uma matriz de numeros inteiros no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira as dimensoes da matriz: ";
    std::cin >> i >> j; getchar();
    MATint* matt = new MATint(i, j);
    matt->fread(fil);
    if(matt->isIdentity()) std::cout << "A matriz e a matriz identidade. ";
    else std::cout << "A matriz nao e a matriz identidade. ";
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete matt;
    getchar();
}

void E1214()
{
    int i1 = 0, j1 = 0;
    int i2 = 0, j2 = 0;
    std::cout << "Insira duas matrizes de numeros inteiros nos arquivos dados1.txt e dados2.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil1 ("dados1.txt");
    std::ifstream fil2 ("dados2.txt");
    std::cout << "Insira as dimensoes da primeira matriz: ";
    std::cin >> i1 >> j1; getchar();
    std::cout << "Insira as dimensoes da segunda matriz: ";
    std::cin >> i2 >> j2; getchar();
    MATint* mat1 = new MATint(i1, j1);
    MATint* mat2 = new MATint(i2, j2);
    mat1->fread(fil1);
    mat2->fread(fil2);
    if(*mat1==*mat2) std::cout << "As matrizes sao iguais. " << std::endl;
    else std::cout << "As matrizes nao sao iguais. " << std::endl;
    std::cout << "Pressione ENTER para terminar. ";
    fil1.close();
    fil2.close();
    delete mat1;
    delete mat2;
    getchar();
}

void E1215()
{
    int i = 0, j = 0;
    std::cout << "Insira duas matrizes de numeros inteiros com as mesmas dimensoes nos arquivos dados1.txt e dados2.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil1 ("dados1.txt");
    std::ifstream fil2 ("dados2.txt");
    std::cout << "Insira as dimensoes das matrizes: ";
    std::cin >> i >> j; getchar();
    MATint* mat1 = new MATint(i, j);
    MATint* mat2 = new MATint(i, j);
    mat1->fread(fil1);
    mat2->fread(fil2);
    mat1->add(mat2);
    std::cout << "A soma das matrizes e igual a: " << std::endl;
    mat1->print();
    std::cout << "Pressione ENTER para terminar. ";
    fil1.close();
    fil2.close();
    delete mat1;
    delete mat2;
    getchar();
}

void E1216()
{
    int i = 0, j = 0;
    int l1 = 0, l2 = 0;
    int c = 0;
    std::cout << "Insira uma matriz de numeros inteiros no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira as dimensoes da matriz: ";
    std::cin >> i >> j; getchar();
    MATint* matt = new MATint(i, j);
    matt->fread(fil);
    std::cout << "Insira duas linhas da matriz e uma constante para multiplicar a segunda, nessa ordem:";
    std::cin >> l1 >> l2 >> c; getchar();
    if(!matt->addLineByProductOfSecond(l1, l2, c)) std::cout << "ERRO: Linhas invalidas. ";
    matt->print();
    std::cout << "Pressione ENTER para terminar. " << std::endl;
    fil.close();
    delete matt;
    getchar();
}

void E1217()
{
    int i = 0, j = 0;
    int l1 = 0, l2 = 0;
    int c = 0;
    std::cout << "Insira uma matriz de numeros inteiros no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira as dimensoes da matriz: ";
    std::cin >> i >> j; getchar();
    MATint* matt = new MATint(i, j);
    matt->fread(fil);
    std::cout << "Insira duas linhas da matriz e uma constante para multiplicar a segunda, nessa ordem:";
    std::cin >> l1 >> l2 >> c; getchar();
    if(!matt->subtractLineByProductOfSecond(l1, l2, c)) std::cout << "ERRO: Linhas invalidas. ";
    matt->print();
    std::cout << "Pressione ENTER para terminar. " << std::endl;
    fil.close();
    delete matt;
    getchar();
}

void E1218()
{
    int i = 0, j = 0;
    int target = 0;
    std::cout << "Insira uma matriz de numeros inteiros no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira as dimensoes da matriz: ";
    std::cin >> i >> j; getchar();
    MATint* matt = new MATint(i, j);
    matt->fread(fil);
    std::cout << "Insira um numero para ser procurado na matriz: ";
    std::cin >> target; getchar();
    int pos = matt->searchRows(target);
    if(pos==-1) std::cout << "O alvo nao pode ser encontrado. " << std::endl;
    else std::cout << "O alvo estava na linha " << pos << "." << std::endl;
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete matt;
    getchar();
}

void E1219()
{
    int i = 0, j = 0;
    int target = 0;
    std::cout << "Insira uma matriz de numeros inteiros no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira as dimensoes da matriz: ";
    std::cin >> i >> j; getchar();
    MATint* matt = new MATint(i, j);
    matt->fread(fil);
    std::cout << "Insira um numero para ser procurado na matriz: ";
    std::cin >> target; getchar();
    int pos = matt->searchCols(target);
    if(pos==-1) std::cout << "O alvo nao pode ser encontrado. " << std::endl;
    else std::cout << "O alvo estava na coluna " << pos << "." << std::endl;
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete matt;
    getchar();
}

void E1220()
{
    int i = 0, j = 0;
    std::cout << "Insira uma matriz de numeros inteiros no arquivo dados.txt e pressione ENTER para comecar. ";
    getchar();
    std::ifstream fil ("dados.txt");
    std::cout << "Insira as dimensoes da matriz: ";
    std::cin >> i >> j; getchar();
    MATint* matt = new MATint(i, j);
    matt->fread(fil);
    std::cout << "A matriz original: " << std::endl;
    matt->print();
    MATint* transp = matt->transpose();
    std::cout << "E sua transposta: " << std::endl;
    transp->print();
    std::cout << "Pressione ENTER para terminar. ";
    fil.close();
    delete matt;
    delete transp;
    getchar();
}

void E12E1()
{
    int i = 0, j = 0;
    std::cout << "Insira as dimensoes de uma matriz: ";
    std::cin >> i >> j; getchar();
    std::cout << std::endl << std::endl;
    MATint* matt = new MATint(i, j);
    matt->fillCrescent();
    matt->print();
    getchar();
    delete matt;
}

void E12E2()
{
    int i = 0, j = 0;
    std::cout << "Insira as dimensoes de uma matriz: ";
    std::cin >> i >> j; getchar();
    std::cout << std::endl << std::endl;
    MATint* matt = new MATint(i, j);
    matt->fillDecrescent();
    matt->print();
    getchar();
    delete matt;
}