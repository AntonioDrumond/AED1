#include "LibAD.h"

char* inversoInt (int x)
{
    //printf("1/%d ", x);
    char* var = (char*) malloc(10 * sizeof(char));
    snprintf(var, 10, "1/%d", x);
    return var;
}

void block_0611 (int n)
{
    if(n>0)
    {
        block_0611(n-1);
        printf("%d ", n*6);
    }
}

void E0611 ()
{
    int n = 0, i = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os primeiros ", n, " multiplos de 6 sao: ");
    block_0611(n);
    getchar();
}

void block_0612 (int n)
{    
    if(n>0)
    {
        printf("%d ", n*6);
        block_0612(n-1);
    }
}

void E0612 ()
{
    int n = 0, i = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os primeiros ", n, " multiplos de 6 em ordem reversa sao: ");
    block_0612(n);
    getchar();
}

void block_0613 (int n)
{
    if(n>0)
    {
        block_0613(n-1);
        printf("1/%d ", (n*6));
    }
}

void E0613 ()
{
    int n = 0, i = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os inversos dos primeiros ", n, " multiplos de 6 sao: 1/1 ");
    block_0613(n);
    getchar();
}

void block_0614 (int n)
{
    if(n>0)
    {
        printf("1/%d ", (n*6));
        block_0614(n-1);
    }
    else
    {
        printf("1/1");
    }
}

void E0614 ()
{
    int n = 0, i = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "Os inversos dos primeiros ", n, " multiplos de 6 na ordem reversa sao: ");
    block_0614(n-1);
    getchar();
}

int block_0615b (int n, int sum, int total, int answer) // Primeira versao da resolucao do exercicio, pouco eficiente
{
    if (n>1)
    {
        total += sum; 
        printf("%d + ", total); 
        sum+=2; answer += total;
        answer = block_0615b(n-1, sum, total, answer);
    }
    else if (n>0)
    {
        total += sum; 
        printf("%d = ", total); 
        sum+=2; answer += total;
        answer = block_0615b(n-1, sum, total, answer);
    }
    return answer;
}


int block_0615(int n, int sum, int valorPar)
{
    if(n > 1)
    {
        printf("%d + ", sum);
        sum += block_0615(n - 1, sum + valorPar, valorPar + 2);
    }
    else
    {
        printf("%d = ", sum);
    }
    return sum ;
}

void E0615 ()
{
    int n = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "A soma dos primeiros ", n, " numeros pares somados a 6 sao: ");
    printf("%d", block_0615(n, 6, 2));
    getchar();
}

double block_0616b (int n, double sum, double total)
{
    if (n>0)
    {   
        total += block_0616b(n-1, pow((double)n*6.0, -1.0), total);
    }
    if (n==0) {printf("%lf", total);}
    return sum;
}

double block_0616(int n) 
{
    if(n==1)
    {
        return 1.0/6.0;
    }
    else
    {
        return 1.0 / (6*n) + block_0616(n-1);
    }
}

void E0616 ()
{
    int n = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "A soma dos inversos dos ", n, " primeiros multiplos de 6 e igual a: ");
    printf("%lf", block_0616(n));
    getchar();
}

void block_0617(char *x, int n)
{
    if (n<strlen(x))
    {
        printf("%c\n", x[n]);
        block_0617(x, n+1);
    }
}

void E0617()
{   
    char x[100] = "Renato";
    readStringT(x, "Insira uma sequencia de caracteres: ");
    block_0617(x, 0);
    getchar();
}

int block_0618(char *x, int count, int n)
{
    if(n<strlen(x))
    {
        if(isNumberr(x[n])&&(x[n]-'0')%2==0)
        {
            count += 1;
        }
        count = block_0618(x, count, n+1);
    }
    return count;
}

void E0618()
{
    char x[100] = "Renato";
    readStringT(x, "Insira uma sequencia de caracteres: ");
    printf("%s%d%s", "Ha ", block_0618(x, 0, 0), " numeros pares na sequencia.");
    getchar();
}

int block_0619(char *x, int count, int n)
{
    if(n<strlen(x))
    {
        if((isUpperr(x[n])&&x[n]<'L')||(isLowerr(x[n])&&x[n]<'l'))
        {
            count += 1;
        }
        count = block_0619(x, count, n+1);
    }
    return count;
}

void E0619()
{
    char x[100] = "Renato";
    readStringT(x, "Insira uma sequencia de caracteres: ");
    printf("%s%d%s", "Ha ", block_0619(x, 0, 0), " letras menores do que L na sequencia.");
    getchar();
}

int block_0620(int n, int count, int n0) //Essa versao nao funciona com todas as entradas.
{
    int num;
    if (count<n0)
    {
        num = fiboN(n);
    }
    if (num%2==0&&count<n0)
    {
        num = block_0620(n+1, count+1, n0);
    }
    else if (num%2!=0&&count<n0)
    {
        num = block_0620(n+1, count, n0);
    }
    return num;
}

int block_620b(int x, int y, int z, int n, int count) //unica solucao funcional que consegui fazer foi com 5 parametros
{
    z = x + y;
    x = y;
    y = z;
    if(z%2==0) {count++;}
    if (count<n) {z = block_620b(x, y, z, n, count);}
    return z;
}

void E0620()
{
    int n = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s%d", "O ", n, " numero par da sequencia de Fibonacci e igual a: ", block_620b(0, 1, 0, n, 0));
    getchar();
}

int block_06E1(int n, int x, double sum)
{
    if(n>-1)
    {
        sum = block_06E1(n-1, x, sum);
        sum += pow((double)x, (double)n);
    }
    return (int)sum;
}

void E06E1()
{
    int n = 0, x = 1;
    readIntT(&x, "Insira a base das potencias: ");
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s%d%s%d", "A soma das ", n, " primeiras potencias de ", x, " e igual a: ", block_06E1(n-1, x, 0));
    getchar();
}

double block_06E2(int n, double total)
{
    if (n>0)
    {
        total = block_06E2(n-1, total);
        total += (double)((n*2)-1)/(double)factorial((n*2)-2);
    }
    return total;
}

void E06E2()
{
    int n = 0;
    readIntT(&n, "Insira um numero inteiro: ");
    printf("%s%d%s", "A soma dos ", n, " primeiros termos da sequencia e igual a: ");
    printf("%lf",  block_06E2(n, 0));
    getchar();
}