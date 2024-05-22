#include "LibAD.h"

int evenArray (int array[], int size)
{
    int n = 0;
    if (size>0)
    {
        for (int i=0; i<size; i++)
        {
            if(array[i]%2!=0||array[i]<=0) n++;
        }
        return (n==0);
    }
    else {perror("O tamanho do arranjo e negativo ou nulo."); return -1;}
}

int block_0811()
{
    int size = 0;
    int arr[100];
    readIntT(&size, "Insira o tamanho do arranjo: ");
    if (size <= 0) {perror("O tamanho do arranjo e negativo ou nulo."); return -1;}
    else
    {
        for (int i = 0; i<100&&i<size; i++)
        {
            readIntT(&arr[i], "Insira um numero do arranjo: ");
        }
        return evenArray(arr, size);
    }
}

void E0811()
{
    int size = 0;
    int arr[5];
    if(block_0811()) {printf("%s", "O arranjo inserido so contem valores positivos e pares.");}
    else printf("%s", "O arranjo inserido contem valores negativos ou impares, ou seu tamanho e invalido.");
    getchar();
}


/**
 * @brief reads a file, one integer per line, and saves the numbers in an array
 * if they are even, returning the amount of numbers saved in the array.
 * 
 * @param arq the file to be read
 * @param arr the array where the numbers go into
 * @param arrSize the size of the array
 * @return int returns the amount of numbers saved
 */
int intFileToArrEven (FILE * arq, int arr[], int arrSize)
{
    int x = 0, i = 0;
    while (fscanf(arq, " %d", &x)==1&&i<arrSize)
    {
        if(x%2==0&&x>0) 
        {
            arr[i]=x;
            i++;
        }
    }
    return i;
}

void E0812()
{
    int arranjo[80], lidos = 0;
    FILE * MakeFile = fopen("0812.txt", "wt"); fclose(MakeFile);
    printf("%s", "Insira numeros inteiros no arquivo \"0812.txt\", um por linha, e pressione ENTER para iniciar.");
    getchar();
    FILE * arq = fopen("0812.txt", "rt");
    printf("\n flag \n");
    lidos = intFileToArrEven(arq, arranjo, 80);
    printf("%s", "Os numeros pares positivos inseridos no arquivo sao: ");
    for (int i=0; i<lidos; i++)
    {
        printf("%d ", arranjo[i]);
    }
    getchar();
}

void E0813 ()
{
    int a = 0, b = 0, n = 0, x = time(NULL);
    readIntT(&a, "Insira o limite inferior da randomizacao: ");
    readIntT(&b, "Insira o limite superior da randomizacao: ");
    readIntT(&n, "Insira o numero de numeros a serem gerados: ");
    FILE * arq = fopen("DADOS.TXT", "wt");
    fprintf(arq, "%s%d%s\n", "Seguem ", n, " numeros aleatorios.");
    for (n=n; n>0; n--)
    {
        fprintf(arq, "%d\n", randInt(a, b, x));
        x*=13;
    }
    fclose(arq);
    printf("%s\n", "Pressione ENTER para terminar.");
    getchar();
}

void E0814()
{
    FILE * MakeFile = fopen("DADOS.TXT", "wt"); fclose (MakeFile);
    printf("Insira numeros inteiros, um por linha , no arquivo \"DADOS.TXT\" e pressione ENTER para comecar.");
    getchar();
    FILE * arq = fopen("DADOS.TXT", "rt");
    int arr[100], x = 0, n = 0, i = 0;
    n = intFileToArr(arq, arr, 100);
    x = arr[i]; i++;
    for(i=1; i<n; i++)
    {
        if(arr[i]%2!=0) x = (arr[i]<x) ? arr[i] : x;
    }
    fclose(arq);
    if(x%2==0) printf("%s", "Nao haviam numeros impares no arquivo.");
    else printf("%s%d", "O menor numero primo do arquivo e igual a: ", x);
    getchar();
}

void E0815()
{
    FILE * MakeFile = fopen("DADOS.TXT", "wt"); fclose (MakeFile);
    printf("Insira numeros inteiros, um por linha , no arquivo \"DADOS.TXT\" e pressione ENTER para comecar.");
    getchar();
    FILE * arq = fopen("DADOS.TXT", "rt");
    int arr[100], x = 0, n = 0, i = 0;
    n = intFileToArr(arq, arr, 100);
    x = arr[i]; i++;
    for(i=1; i<n; i++)
    {
        if(arr[i]%2!=0) x = (arr[i]>x) ? arr[i] : x;
    }
    fclose(arq);
    if(x%2==0) printf("%s", "Nao haviam numeros impares no arquivo.");
    else printf("%s%d", "O maior numero impar do arquivo e igual a: ", x);
    getchar();
}

void E0816()
{
    FILE * MakeFile = fopen("DADOS.TXT", "wt"); fclose(MakeFile);
    FILE * arq = fopen("DADOS.TXT", "rt");
    FILE * file1 = fopen("MenoresOuIguais.txt", "wt");
    FILE * file2 = fopen("Maiores.txt", "wt");
    printf("Insira numeros inteiros, um por linha , no arquivo \"DADOS.TXT\" e pressione ENTER para comecar.");
    getchar();
    int arr[100], n = 0;
    n = intFileToArr(arq, arr, 100);
    double average = avgArrInt(arr, n);
    for (int i=0; i<n; i++)
    {
        if((double)arr[i]<=average) fprintf(file1, "%d\n", arr[i]);
        else fprintf(file2, "%d\n", arr[i]);
    }
    fclose(arq); fclose(file1); fclose(file2);
    printf("%s", "Pressione ENTER para terminar.");
    getchar();
}

void E0817()
{
    int n = 0, i = 0;
    int arr[100];
    int* elmt = &arr[0];
    readIntT(&n, "Insira o numero de elementos em um arranjo: ");
    for(i=0; i<n; i++)
    {
        readIntT(elmt+i, "Insira um numero do arranjo: ");
    }
    if(isArrIntSortedReverse(arr, n)) printf("%s", "O arranjo esta ordenado em ordem decrescente. Pressione ENTER para terminar\n");
    else printf("%s", "O arranjo nao esta ordenado. Pressione ENTER para terminar.\n");
    getchar();
}

void E0818()
{
    FILE * MakeFile = fopen("DADOS.TXT", "wt"); fclose(MakeFile);
    FILE * arq = fopen("DADOS.TXT", "rt");
    int n = 0, i = 0, target = 0, startPos = 0; n = 0;
    int arr[100];
    int* elmt = &arr[0];

    readIntT(&n, "Insira o numero de elementos em um arranjo: ");
    printf("Insira os elementos do arranjo, um por linha, no arquivo \"DADOS.TXT\" e aperte ENTER para comecar.");
    getchar();
    intFileToArr(arq, arr, n);

    readIntT(&target, "Insira um numero para ser procurado no arranjo: ");

    readIntT(&startPos, "Insira a posicao inicial da procura: ");
    while(startPos>100) readIntT(&startPos, "Numero muito grande. Insira a posicao inicial da procura: ");

    readIntT(&n, "Insira quantos elementos devem ser procurados: ");
    while(n+startPos>=100) readIntT(&n, "Numero muito grande. Insira quantos elementos devem ser procurados: ");

    if(searchArrayInt(arr, target, startPos, n)>=0) printf("O numero alvo estava dentro do arranjo. Pressione ENTER para terminar.");
    else printf("O numero alvo nao estava dentro do arranjo. Pressione ENTER para terminar.");
    getchar();
}

void E0819()
{
    FILE * MakeFile = fopen("DADOS.TXT", "wt"); fclose(MakeFile);
    FILE * arq = fopen("DADOS.TXT", "rt");
    int n = 0, i = 0, target = 0, startPos = 0; n = 0;
    int arr[100];
    int* elmt = &arr[0];

    readIntT(&n, "Insira o numero de elementos em um arranjo: ");
    printf("Insira os elementos do arranjo, um por linha, no arquivo \"DADOS.TXT\" e aperte ENTER para comecar.");
    getchar();
    intFileToArr(arq, arr, n);

    readIntT(&target, "Insira um numero para ser procurado no arranjo: ");

    readIntT(&startPos, "Insira a posicao inicial da procura: ");
    while(startPos>100) readIntT(&startPos, "Numero muito grande. Insira a posicao inicial da procura: ");

    readIntT(&n, "Insira quantos elementos devem ser procurados: ");
    while(n+startPos>=100) readIntT(&n, "Numero muito grande. Insira quantos elementos devem ser procurados: ");

    int position = searchArrayInt(arr, target, startPos, n);
    if(position>=0) printf("O numero alvo estava na posicao %d. Pressione ENTER para terminar.", position);
    else printf("O numero alvo nao estava dentro do arranjo. Pressione ENTER para terminar.");
    getchar();
}

void E0820()
{
    FILE * MakeFile = fopen("DADOS.TXT", "wt"); fclose(MakeFile);
    FILE * arq = fopen("DADOS.TXT", "rt");
    int n = 0, i = 0, target = 0, startPos = 0; n = 0;
    int arr[100];
    int* elmt = &arr[0];

    readIntT(&n, "Insira o numero de elementos em um arranjo: ");
    printf("Insira os elementos do arranjo, um por linha, no arquivo \"DADOS.TXT\" e aperte ENTER para comecar.");
    getchar();
    intFileToArr(arq, arr, n);

    readIntT(&target, "Insira um numero para ser procurado no arranjo: ");

    readIntT(&startPos, "Insira a posicao inicial da procura: ");
    while(startPos>100) readIntT(&startPos, "Numero muito grande. Insira a posicao inicial da procura: ");

    readIntT(&n, "Insira quantos elementos devem ser procurados: ");
    while(n+startPos>=100) readIntT(&n, "Numero muito grande. Insira quantos elementos devem ser procurados: ");

    printf("O numero alvo apareceu %d vezes no arranjo. Pressione ENTER para terminar.", freqArrayInt(arr, target, startPos, n));
    getchar();
}

int oddDividersInArray(int number, int arr[])
{
    int amount = 0, x = 1;
    while (x<=number)
    {
        if(number%x==0) 
        {
            arr[amount] = x;
            amount++;
        }
        x+=2;
    }
    return amount;
}

void E08E1()
{
    int n = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    int arr[100], amount = oddDividersInArray(n, arr);
    printf("O numero de divisores e: %d\nE eles sao:\n", amount);
    printfArrInt(arr, amount);
    printf("Pressione ENTER para terminar.");
    getchar();
}