#include "LibAD.h"

void E0511 ()
{
    int n = 0, i = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os ", n, " primeiros multiplos de 6 sao: ");
    for (i=0; i < n; i++)
    {
        printf("%d ", 6*(i+1));
    }
    getchar();
}

void E0512 ()
{
    int n = 0, i = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os ", n, " primeiros multiplos de 15 sao: ");
    for (i=0; i < n; i++)
    {
        printf("%d ", 15*(i+1));
    }
    getchar();
}

void E0513 ()
{
    int n = 0, i = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "As ", n, " primeiras potencias de 4 sao: ");
    double last = pow(4, (double)n);
    printf("%d ", (int)last);
    for (i=0; i<(n-1); i++)
    {
        last /= 4;
        printf("%d ", (int)last);
    }
    getchar();
}

void E0514 ()
{
    int n = 0, i = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os inversos dos ", n, " primeiros potencias de 6 sao: ");
    for (i=0; i<n; i++)
    {
        printf("%s%d ", "1/", 6*(i+1));
    }
    getchar();
}

void E0515 ()
{// A variavel potentiation e usada para corrigir um erro com conversoes de unidade
    int n = 0, i = 1, a = 0;
    double potentiation = 0.0;
    readIntT(&n, "Insira um numero inteiro: ");
    readIntT(&a, "Insira o valor das bases das potencias: ");
    printf("%s%d%s%d%s", "Os inversos dos ", n, " primeiros potencias com expoentes pares de base ", a, " sao: 1 ");
    for (i=1; i<n; i++)
    {
        potentiation = pow((double)a, ((double)i*2));
        printf("%s%d ", "1/", (int)potentiation);
    }
    getchar();
}

void E0516 ()
{
    int n = 0, i = 0, j = 1, x = 1, total = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os primeiros ", n, " multiplos de 3 que nao sao multiplos de 5 sao: ");
    for (i=0; i<n; j++)
    {
        x = j * 3;
        if (((x % 5) != 0) && (i!=(n-1))) {printf("%d + ", x); total += x; i++;}
        else if (((x % 5) != 0) && (i==(n-1))) {printf("%d = ", x); total += x; i++;}
    }
    printf("%d", total);
    getchar();
}

void E0517 ()
{
    int n = 0, i = 0, j = 1, under = 0, x = 1;
    double total = 0.0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os inversos dos ", n, " primeiros multiplos de 6 que nao sao multiplos de 5 sao: ");
    for (i=0; i<n; j++)
    {
        x = j * 6;
        if (((x % 5) != 0) && (i!=(n-1))) {printf("1/%d + ", x); total += pow((double)x, -1); i++;}
        else if (((x % 5) != 0) && (i==(n-1))) {printf("1/%d = ", x); total += pow((double)x, -1); i++;}
    }
    printf("%lf", total);
    getchar();
}

void E0518 ()
{
    int n = 0, i = 0, x = 6, total = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "A soma dos ", n, " numeros naturais somados a 6 sao: ");
    for (i=0; i<n; i++)
    {
        x += i;
        if (i!=n-1) {printf("%d + ", x); total += x;}
        else if (i==n-1) {printf("%d = ", x);total += x;}
    }
    printf("%d", total);
    getchar();
}

void E0519 ()
{
    int n = 0, i = 0, x = 6;
    double square = 0.0, total = 0.0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "A soma dos ", n, " primeiros quadrados de naturais comecando em 6 sao: ");
    for (i=0; i<n; i++)
    {
        square = pow((double)x, 2);
        if (i!=n-1) {printf("%d + ", (int)square); total += square;}
        else if (i==n-1) {printf("%d = ", (int)square); total += square;}
        x++;
    }
    printf("%d", (int)total);
    getchar();
}

void E0520 ()
{
    int n = 0, i = 0, under = 0, x = 6;
    double total = 0.0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os inversos das ", n, " adicoes dos numeros naturais terminando em 6 sao: ");

    for (i=0; i<n; i++) {x += i;} //para conseguir o primeiro numero da sequencia

    for (i=n; i>0; i--)
    {
        n--;
        if (i!=1) {printf("1/%d + ", x); total += pow((double)x, -1);}
        else if (i==1) {printf("1/%d = ", x); total += pow((double)x, -1);}
        x -= n;
    }
    printf("%lf", total);
    getchar();
}

void E05E1 ()
{
    int n = 0, i = 2;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "O fatorial de ", n, " e igual a: ");
    if (n==0||n==1) {printf("%d", 1);}
    else if (n<0) {printf("%s", "O fatorial de numeros inteiros negativos nao existe.");}
    else    
    {
        printf("%d", factorial(n));
    }
    getchar();
}

void E05E2 ()
{
    int n = 0, i = 0, denominador = 3;
    double total = 1.0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "A soma dos primeiros ", n, " termos da sequencia e igual a: ");
    for (i=0; i<n; i++)
    {
        denominador += 2;
        total *= 1 + (pow((double)2, (double)(i+1)) / factorial(denominador));
    }
    printf("%lf", total);
    getchar();
}
