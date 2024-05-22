#include "LibAD.h"

void E0411 (void)
{
    double x = 0.0, y = 0.0, z = 0.0;
    int i = 0, n = 0, count = 0;
    printf("%s", "Insira dois valores reais que definam um intervalo fechado: ");
    scanf(" %lf %lf", &x, &y); getchar();
    printf("%s", "Insira uma quantidade de valores a serem testados: ");
    scanf(" %d", &n); getchar();

    for (i=0; i<n; ++i)
    {
        printf("%s", "Insira um valor real: ");
        scanf(" %lf", &z); getchar();
        if (((z>=x)&&(z<=y))||((z>=y)&&(z<=x))) {++count;}
    }
    printf("%s%d%s%d%s\n", "Dos numeros inseridos, ", count, " pertencem ao intervalo e ", (n-count), " nao pertencem.");
    getchar(); printf("\n");
}

void E0412 (void)
{
    char x[100] = "Renato";
    printf("%s", "Insira uma sequencia de caracteres: ");
    scanf(" %s", &x); getchar();
    int i = 0, count = 0,
        leng = strlen(x);
    for (i=0; i<leng; ++i)
    {
        if (isUpperr(x[i])&&(x[i]>'L')) {++count;}
    }
    printf("%d%s\n", count, " letras maiusculas sao maiores do que L.");
    getchar(); printf("\n");
}

void E0413 (void)
{
    char x[100] = "Renato";
    readStringT(x, "Digite uma cadeia de caracteres: ");
    int i = 0, count = 0,
        leng = strlen(x);
    for (i=0; i<leng; ++i)
    {
        if (isUpperr(x[i])&&(x[i]>'L')) {++count;}
    }
    printf("%d%s\n", count, " letras maiusculas sao maiores do que L.");
    getchar(); printf("\n");
}

void E0414 (void)
{
    char x[100] = "Renato";
    readStringT(x, "Digite uma cadeia de caracteres: ");
    int i = 0,
        leng = strlen(x);
    printf("%s", "Os seguintes caracteres sao letras maiusculas maiores do que L: ");
    for (i=0; i<leng; ++i)
    {
        if (isUpperr(x[i])&&(x[i]>'L')) {printf("%c", x[i]);}
    }
    getchar(); printf("\n");
}

void E0415 (void)
{
    char x[100] = "Renato";
    readStringT(x, "Digite uma cadeia de caracteres: ");
    int i = 0, count = 0,
        leng = strlen(x);
    for (i=0; i<leng; ++i)
    {
        if ((isUpperr(x[i])&&(x[i]<'L'))||(isLowerr(x[i])&&(x[i]<'l'))) {++count;}
    }
    printf("%d%s\n", count, " letras maiusculas ou minusculas sao menores do que L/l.");
    getchar(); printf("\n");
}

void E0416 (void)
{
    char x[100] = "Renato";
    readStringT(x, "Digite uma cadeia de caracteres: ");
    int i = 0, count = 0,
        leng = strlen(x);
    printf("%s", "Os seguintes caracteres sao letra menores do que L/l: ");
    for (i=0; i<leng; ++i)
    {
        if ((isUpperr(x[i])&&(x[i]<'L'))||(isLowerr(x[i])&&(x[i]<'l'))) {printf("%c", x[i]);}
    }
    getchar(); printf("\n");
}

void E0417 (void)
{
    char x[100] = "Renato";
    readStringT(x, "Digite uma cadeia de caracteres: ");
    int i = 0, count = 0,
        leng = strlen(x);
    for (i=0; i<leng; ++i)
    {
        if (isNumberr(x[i])) {++count;}
    }
    printf("%d%s\n", count, " numeros.");
    getchar(); printf("\n");
}

void E0418 (void)
{
    char x[100] = "Renato";
    readStringT(x, "Digite uma cadeia de caracteres: ");
    int i = 0, count = 0,
        leng = strlen(x);
    printf("%s", "Os seguintes caracteres nao sao letras ou numeros: ");
    for (i=0; i<leng; ++i)
    {
        if (!isNumberr(x[i])&&!isLetterr(x[i])) {printf("%c", x[i]);}
    }
    getchar(); printf("\n");
}

void E0419 (void)
{
    char x[100] = "Renato";
    readStringT(x, "Digite uma cadeia de caracteres: ");
    int i = 0, count = 0,
        leng = strlen(x);
    printf("%s", "Os seguintes caracteres sao letras ou numeros: ");
    for (i=0; i<leng; ++i)
    {
        if (isNumberr(x[i])||isLetterr(x[i])) {printf("%c", x[i]);}
    }
    getchar(); printf("\n");
}

void E0420 (void)
{
    char x[100] = "Renato";
    int n = 0, i = 0, j = 0, count = 0, total = 0;
    printf("%s", "Quantas sequencias de caracteres voce deseja inserir? ");
    scanf("%d", &n); getchar();
    for (i=0; i<n; ++i)
    {
        readStringT(x, "Insira uma sequencia de caracteres: ");
        count = countAplhaNumm(x);    
        printf("%s%d%s\n\n", "Ha ", count, " letras ou numeros na sequencia inserida.");
        total += count; count = 0;
    }
    printf("%s%d%s\n", "Ao todo, voce inseriu ", total, " letras ou numeros.");
    getchar();
}

void E04E1 (void)
{
    char x[100] = "Renato";
    readStringT(x, "Digite uma ou mais palavras: ");
    int total = countALphaNumSpcc(x);
    printf("%s%d%s\n", "Ao todo, a linha inserida contem ", total, " letras ou numeros.");
    getchar();
}

void E04E2 (void)
{
    char x[100] = "Renato",
         y[100] = "Carneiro";
    readStringT(x, "Insira a primeira sequencia de caracteres: ");
    readStringT(y, "Insira a segunda sequencia de caracteres: ");
    if (firstSmallerStringg(x, y)) {printf("%s\n", "A primeira sequencia e maior ou igual a segunda");}
    else {printf("%s\n", "A segunda sequencia e a maior.");}
    getchar();
}