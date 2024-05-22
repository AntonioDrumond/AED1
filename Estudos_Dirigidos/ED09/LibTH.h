#include "LibAD.h"

int readDoubleTNeg(double* var, char *text)
{
    double resultado;
    printf("%s", text);
    resultado = scanf("%lf", var); getchar();
    resultado = *var<=0.0 ? 1 : 0;
    while (resultado!=1)
    {
        printf("%s", "Entrada invalida, por favor digite um numero real e negativo: ");
        resultado = scanf("%lf", var); getchar();
        resultado = *var<0.0 ? 1 : 0;
    }
    return *var;
}

void readMatDoubleNeg (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    double buffer = 0.0;
    char* text = allocChar(80);
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            strcpy(text, STR_EMPTY);
            readDoubleTNeg(&buffer, concat(
                                    concat ( concat(text, intToString(i1)), "," ),
                                    concat ( concat(text, intToString(j1)), ":")));
            mat[i1][j1] = buffer;
        }
    }
}

void E0911()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("Segue a matriz inserida:\n");
    printMatDouble(i, j, matrix);
    getchar();
}

void E0912()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("Pressione ENTER para gravar a matriz inserida no arquivo \"dados.txt\".\n"); getchar();
    FILE * wrtFil = fopen("dados.txt", "wt");
    fprintMatDouble(wrtFil, i, j, matrix);
    fclose(wrtFil);
    FILE* redFil = fopen("dados.txt", "r");
    freadMatDouble(redFil, i, j, matrix);
    printf("Pressione ENTER para ver a matriz lida do arquivo.\n"); getchar();
    printMatDouble(i, j, matrix);
    fclose(redFil);
    getchar();
}

void E0913()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("\nSegue a diagonal principal da matriz inserida: \n");
    printMatDiagDouble(i, j, matrix);
    getchar();
}

void E0914()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("\nSegue a diagonal secundaria da matriz inserida: \n");
    printMatDiagSDouble(i, j, matrix);
    getchar();
}

void E0915()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("\nSegue a diagonal principal e os valores abaixo da matriz inserida: \n");
    printMatDiagUnDouble(i, j, matrix);
    getchar();
}

void E0916()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("\nSegue a diagonal principal e os valores acima da matriz inserida: \n");
    printMatDiagOvDouble(i, j, matrix);
    getchar();
}

void E0917()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("\nSegue a diagonal secundaria e os valores abaixo da matriz inserida: \n");
    printMatDiagSUnDouble(i, j, matrix);
    getchar();
}

void E0918()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("\nSegue a diagonal secundaria e os valores acima da matriz inserida: \n");
    printMatDiagSOvDouble(i, j, matrix);
    getchar();
}


bool checkIfZeroesUnderDiag (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    int count = 0;
    if(i==j)
    {
        for (i1=0; i1<i; i1++)
        {
            for (j1=0; j1<j; j1++)
            {
                if((i1==j1 || i1>j1) && mat[i1][j1]==0) count++;
            }
        }
        return count!=0;
    }
    else {printf("ERRO: Matriz com dimensoes invalidas."); return -1;}
}

bool checkIfZeroesOverDiag (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    int count = 0;
    if(i==j)
    {
        for (i1=0; i1<i; i1++)
        {
            for (j1=0; j1<j; j1++)
            {
                if((i1==j1 || i1<j1) && mat[i1][j1]==0) count++;
            }
        }
        return count!=0;
    }
    else {printf("ERRO: Matriz com dimensoes invalidas."); return -1;}
}

void E0919()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("%s", checkIfZeroesUnderDiag(i,j,matrix) ? "Todos os numeros abaixo da diagonal principal sao iguais a zero." : "Nem todos os numeros abaixo da diagonal principal sao iguais a zero.");
    getchar();
}

void E0920()
{
    double matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    readMatDoubleNeg(i, j, matrix);
    printf("%s", checkIfZeroesOverDiag(i,j,matrix) ? "Todos os numeros acima da diagonal principal sao iguais a zero." : "Nem todos os numeros acima da diagonal principal sao iguais a zero.");
    getchar();
}

void pattern09E1 (int i, int j, int mat[][j])
{
    int i1 = 0, j1 = 0;
    int x = 1;
    char* text = allocChar(80);
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            mat[i1][j1] = x;
            x++;
        }
    }
}

void E09E1()
{
    int matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    pattern09E1(i,j,matrix);
    printMatInt(i,j,matrix);
    getchar();
}

void pattern09E2 (int i, int j, int mat[][j])
{
    int i1 = 0, j1 = 0;
    int x = i*j;
    char* text = allocChar(80);
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            mat[i1][j1] = x;
            x--;
        }
    }
}

void E09E2()
{
    int matrix[100][100];
    int i  = 0, j  = 0;
    readIntT(&i, "Insira a quantidade de colunas: ");
    while(i<=0) readIntT(&i, "Insira um numero positivo por favor: ");
    readIntT(&j, "Insira a quantidade de linhas: ");
    while(i<=0) readIntT(&j, "Insira um numero positivo por favor: ");
    pattern09E2(i,j,matrix);
    printMatInt(i,j,matrix);
    getchar();
}