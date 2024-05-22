#include "LibAD.h"

struct randNumbers
{
    int lowIn;
    int uppIn;
    int n;
};

void E1011()
{
    struct randNumbers* rnd;
    rnd = calloc(1, sizeof(struct randNumbers));
    int x = 1;
    int arr[100];
    readIntT(&rnd->lowIn, "Insira a medida do menor limite da geracao: ");
    readIntT(&rnd->uppIn, "Insira o limite superior da geracao: ");
    readIntT(&rnd->n, "Insira quantos elementos devem ser gerados: ");

    for(int i=0; i<rnd->n; i++)
    {
        int buffer = randInt(rnd->lowIn, rnd->uppIn, time(NULL)*x);
        arr[i] = buffer;
        x*=13;
    }
    
    FILE* fil = fopen("file.txt", "wt");
    fprintArrInt(fil, arr, rnd->n);
    fclose(fil);
    getchar();
    free(rnd);
}

struct searchValueInfo
{
    char fileName[30];
    int target;
};

void E1012()
{
    int arr[100];
    struct searchValueInfo* info = calloc(1, sizeof(struct searchValueInfo));
    FILE* makeFile = fopen("dados.txt", "wt"); fclose(makeFile);
    printf("Insira numeros inteiros, separados por \" \" no arquivo \"dados.txt\" e pressione ENTER para comecar");
    getchar();
    strcpy(info->fileName, "dados.txt");
    readIntT(&info->target, "Insira um numero para ser procurado no arranjo: ");
    FILE* fil = fopen(info->fileName, "rt");
    freadIntArr(fil, arr, 100);
    int position = searchArrayInt(arr, info->target, 0, 100);
    if(position==-1) printf("O alvo nao pode ser encontrado. ");
    else printf("O alvo estava na posicao %d do arranjo. ", position);
    getchar();
    free(info);
}


struct arraysCompare 
{
    char arr1[128];
    char arr2[128];
    int arrSize1;
    int arrSize2;
    bool compare;
};

bool compareArrays(char* arr1, char* arr2)
{
    int i = 0, diff = 0;
    while(arr1[i]!='\0'&&arr2[i]!='\0')
    {
        diff = arr1[i]!=arr2[i] ? diff+1 : diff;
        i++;
    }
    return diff==0;
}

void E1013()
{
    struct arraysCompare* arrCompare = calloc(1, sizeof(struct arraysCompare));
    FILE* mkfl1 = fopen("dados1.txt", "wt"); 
    FILE* mkfl2 = fopen("dados2.txt", "wt");
    fclose(mkfl1);fclose(mkfl2);
    printf("Insira um arranjo, com numeros separados por \" \" nos arquivo dados1.txt e dados2.txt e pressione ENTER para comecar.");
    getchar();
    FILE* fil1 = fopen("dados1.txt", "r");
    FILE* fil2 = fopen("dados2.txt", "r");
    arrCompare->arrSize1 = 1;
    arrCompare->arrSize2 = 1;
    fgets(arrCompare->arr1, 128, fil1);
    fgets(arrCompare->arr2, 128, fil2);
    int i = 0, leng = strlen(arrCompare->arr1);
    for(i=0; i<leng; i++)
    {
        if(arrCompare->arr1[i]==' ') arrCompare->arrSize1++;
    }
    leng = strlen(arrCompare->arr2);
    for(i=0; i<leng; i++)
    {
        if(arrCompare->arr2[i]==' ') arrCompare->arrSize2++;
    }
    if(arrCompare->arrSize1==arrCompare->arrSize2) 
    {
        arrCompare->compare = compareArrays(arrCompare->arr1, arrCompare->arr2);
        printf("%s", arrCompare->compare ? "Os arranjos sao iguais. " : "Os arranjos sao diferentes. ");
    }
    else printf("Os arranjos nao tinham tamanhos compativeis. ");
    getchar();
    free(arrCompare);
}

struct arraysAdd
{
    int arr1[128];
    int arr2[128];
    int arrSize1;
    int arrSize2;
    int con;
};

void E1014()
{
    struct arraysAdd* addRays = calloc(1, sizeof(struct arraysAdd));
    FILE* mkfl1 = fopen("dados1.txt", "wt"); 
    FILE* mkfl2 = fopen("dados2.txt", "wt");
    fclose(mkfl1);fclose(mkfl2);
    printf("Insira um arranjo, com numeros inteiros separados por \" \" nos arquivo dados1.txt e dados2.txt e pressione ENTER para comecar.");
    clear();
    readIntT(&addRays->arrSize1, "Insira o tamanho do primeiro arranjo: ");
    readIntT(&addRays->arrSize2, "Insira o tamanho do segundo arranjo: ");
    FILE* fil1 = fopen("dados1.txt", "r");
    FILE* fil2 = fopen("dados2.txt", "r");
    freadIntArr(fil1, addRays->arr1, addRays->arrSize1);
    freadIntArr(fil2, addRays->arr2, addRays->arrSize2);
    if(addRays->arrSize1==addRays->arrSize2)
    {
        readIntT(&addRays->con, "Insira uma constante para multiplicar o segundo arranjo: ");
        addArraysConstInt(addRays->arrSize1, addRays->con, addRays->arr1, addRays->arr2);
        printf("\nO arranjo resultante e: \n");
        printfArrInt(addRays->arr1, addRays->arrSize1);
    }
    else printf("Os tamanhos dos arranjos nao eram compativeis. ");
    getchar();
    fclose(fil1);
    fclose(fil2);
    free(addRays);
}


struct arrReversed
{
    int arr[100];
    bool reversed;
    int number;
};
void E1015()
{
    struct arrReversed* reversedd = calloc(1, sizeof(struct arrReversed));
    FILE* mkfil = fopen("dados.txt", "wt"); fclose(mkfil);
    FILE* fil = fopen("dados.txt", "r");
    printf("Insira numeros inteiros, separados por \" \", no arquivo dados.txt"); getchar();
    reversedd->number = freadIntArr(fil, reversedd->arr, 100);
    reversedd->reversed = isArrIntSortedReverse(reversedd->arr, reversedd->number);
    printf("%s", reversedd->reversed ? "O arranjo estava ordenado na ordem reversa." : "O arranjo nao estava na ordem reversa.");
    getchar();
    free(reversedd);
}

struct transposeMatrix
{
    int i;
    int j;
    int mat[50][50];
    int trans[100][100];
};
void E1016()
{
    struct transposeMatrix* transpose = calloc(1, sizeof(struct transposeMatrix));
    FILE* mkfil = fopen("dados.txt", "wt"); fclose(mkfil);
    FILE* fil = fopen("dados.txt", "r");
    transpose->i = 0;
    transpose->j = 0;
    printf("Insira uma matriz de numeros inteiros no arquivo dados.txt. ");
    getchar();
    readIntT(&transpose->i, "Insira o numero de linhas na matriz: ");
    readIntT(&transpose->j, "Insira o numero de colunas na matriz: ");
    freadMatInt(fil, transpose->i, transpose->j, transpose->mat);
    transposeMatrixInt(transpose->i, transpose->j, transpose->mat, transpose->trans);
    printf("\nA matriz original e:\n");
    printMatInt(transpose->i,transpose->j,transpose->mat);
    printf("\nE a matriz transposta e:\n");
    printMatInt(transpose->j,transpose->i,transpose->trans);
    getchar();
    fclose(fil);
    free(transpose);
}

bool checkIfZeroesMatrix (int i, int j, int mat[][j])
{
    int i1 = 0, j1 = 0;
    int count = 0;
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            if(mat[i1][j1]!=0) count++;
        }
    }
    bool areZeroes = (count==0);
    return areZeroes;
}

struct matrixZeroes
{
    int mat[50][50];
    int i;
    int j;
};

void E1017()
{
    struct matrixZeroes* areZeroes = calloc(1, sizeof(struct matrixZeroes));
    FILE* mkfil = fopen("dados.txt", "wt"); fclose(mkfil);
    FILE* fil = fopen("dados.txt", "r");
    printf("Insira uma matriz de numeros inteiros no arquivo dados.txt. ");
    getchar();
    readIntT(&areZeroes->i, "Insira o numero de linhas na matriz: ");
    readIntT(&areZeroes->j, "Insira o numero de colunas na matriz: ");
    freadMatInt(fil, areZeroes->i, areZeroes->j, areZeroes->mat);
    printf("%s", checkIfZeroesMatrix(areZeroes->i, areZeroes->j, areZeroes->mat) ? "A matriz so contem valores iguais a zero." : "A matriz contem valores diferentes de zero.");
    getchar();
    fclose(fil);
    free(areZeroes);
}

struct matrixEquals
{
    int im1;
    int im2;
    int jm1;
    int jm2;
    int mat1[50][50];
    int mat2[50][50];
};

void E1018()
{
    struct matrixEquals* areEquals = calloc(1, sizeof(struct matrixEquals));
    FILE* mkfl1 = fopen("dados1.txt", "wt"); 
    FILE* mkfl2 = fopen("dados2.txt", "wt");
    fclose(mkfl1);fclose(mkfl2);
    printf("Insira um arranjo, com numeros separados por \" \" nos arquivo dados1.txt e dados2.txt e pressione ENTER para comecar.");
    getchar();
    FILE* fil1 = fopen("dados1.txt", "r");
    FILE* fil2 = fopen("dados2.txt", "r");
    readIntT(&areEquals->im1, "Insira o numero de linhas na primeira matriz: ");
    readIntT(&areEquals->jm1, "Insira o numero de colunas na primeira matriz: ");
    readIntT(&areEquals->im2, "Insira o numero de linhas na segunda matriz: ");
    readIntT(&areEquals->jm2, "Insira o numero de colunas na segunda matriz: ");
    if((areEquals->im1!=areEquals->im2)||(areEquals->jm1!=areEquals->jm2)) printf("As dimensoes das matrizes nao eram compativeis. ");
    else
    {
        freadMatInt(fil1, areEquals->im1, areEquals->jm1, areEquals->mat1);
        freadMatInt(fil2, areEquals->im2, areEquals->jm2, areEquals->mat2);
        printf("%s", equalMatInt(areEquals->im1, areEquals->jm1, areEquals->mat1, areEquals->mat2) ? "As matrizes eram iguais. " : "As matrizes eram diferentes. ");
    }
    getchar();
    fclose(fil1);
    fclose(fil2);
    free(areEquals);
}

struct addingMatrixes
{
    int im1;
    int im2;
    int jm1;
    int jm2;
    int c;
    int mat1[50][50];
    int mat2[50][50];
};

void E1019()
{
    struct addingMatrixes* matrixAdd = calloc(1, sizeof(struct addingMatrixes));
    FILE* mkfl1 = fopen("dados1.txt", "wt"); 
    FILE* mkfl2 = fopen("dados2.txt", "wt");
    fclose(mkfl1);fclose(mkfl2);
    printf("Insira um arranjo, com numeros separados por \" \" nos arquivo dados1.txt e dados2.txt e pressione ENTER para comecar.");
    getchar();
    FILE* fil1 = fopen("dados1.txt", "r");
    FILE* fil2 = fopen("dados2.txt", "r");
    readIntT(&matrixAdd->im1, "Insira o numero de linhas na primeira matriz: ");
    readIntT(&matrixAdd->jm1, "Insira o numero de colunas na primeira matriz: ");
    readIntT(&matrixAdd->im2, "Insira o numero de linhas na segunda matriz: ");
    readIntT(&matrixAdd->jm2, "Insira o numero de colunas na segunda matriz: ");
    readIntT(&matrixAdd->c, "Insira um numero inteiro para multiplicar a segunda matriz: ");
    if((matrixAdd->im1!=matrixAdd->im2)||(matrixAdd->jm1!=matrixAdd->jm2)) printf("As dimensoes das matrizes nao eram compativeis. ");
    else
    {
        freadMatInt(fil1, matrixAdd->im1, matrixAdd->jm1, matrixAdd->mat1);
        freadMatInt(fil2, matrixAdd->im2, matrixAdd->jm2, matrixAdd->mat2);
        addMatrixConstInt(matrixAdd->im1, matrixAdd->jm1, matrixAdd->mat1, matrixAdd->c, matrixAdd->mat2);
        printMatInt(matrixAdd->im1, matrixAdd->jm1, matrixAdd->mat1);
    }
    getchar();
    fclose(fil1);
    fclose(fil2);
    free(matrixAdd);
}

struct multiplyMatrixes
{
    int im1;
    int im2;
    int jm1;
    int jm2;
    int mat1[50][50];
    int mat2[50][50];
};

void E1020()
{
    struct multiplyMatrixes* matrixMulti = calloc(1, sizeof(struct multiplyMatrixes));
    FILE* mkfl1 = fopen("dados1.txt", "wt"); 
    FILE* mkfl2 = fopen("dados2.txt", "wt");
    fclose(mkfl1);fclose(mkfl2);
    printf("Insira duas matrizes, com numeros inteiros separados por \" \" nos arquivo dados1.txt e dados2.txt e pressione ENTER para comecar.");
    getchar();
    FILE* fil1 = fopen("dados1.txt", "r");
    FILE* fil2 = fopen("dados2.txt", "r");
    readIntT(&matrixMulti->im1, "Insira o numero de linhas na primeira matriz: ");
    readIntT(&matrixMulti->jm1, "Insira o numero de colunas na primeira matriz: ");
    readIntT(&matrixMulti->im2, "Insira o numero de linhas na segunda matriz: ");
    readIntT(&matrixMulti->jm2, "Insira o numero de colunas na segunda matriz: ");  
    freadMatInt(fil1, matrixMulti->im1, matrixMulti->jm1, matrixMulti->mat1);
    freadMatInt(fil2, matrixMulti->im2, matrixMulti->jm2, matrixMulti->mat2);
    if(matrixMulti->jm1!=matrixMulti->im2) printf("As dimensoes das matrizes nao eram compativeis para a multiplicacao. ");
    else
    {
        printMatIntPtr(matrixMulti->im1, matrixMulti->jm2, multiplyMatrixInt(matrixMulti->im1, matrixMulti->jm1, matrixMulti->mat1, matrixMulti->im2, matrixMulti->jm2, matrixMulti->mat2));
    }
    getchar();
    fclose(fil1);
    fclose(fil2);
    free(matrixMulti);
}

struct sortRray
{
    int arr[100];
    int arrLeng;
};

void E10E1()
{
    struct sortRray* arrSort = calloc(1, sizeof(struct sortRray));
    FILE* mkfil = fopen("dados.txt", "wt"); fclose(mkfil);
    printf("Insira no arquivo dados.txt um arranjo de numeros inteiros, separados por espacos e pressione ENTER para comecar. ");
    getchar();
    FILE* fil = fopen("dados.txt", "r");
    arrSort->arrLeng = freadIntArr(fil, arrSort->arr, 100);
    sortArrayReverse(arrSort->arr, arrSort->arrLeng);
    printf("O arranjo ordenado na ordem reversa e: \n");
    printfArrInt(arrSort->arr, arrSort->arrLeng);
    getchar();
    fclose(fil);
    free(arrSort);
}