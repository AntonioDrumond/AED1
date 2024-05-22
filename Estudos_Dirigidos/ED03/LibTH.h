#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirLinhaIgual(int comprimento) 
{
    for (int i = 0; i < comprimento; i++) 
    {
        printf("=");
    }
    printf("\n");
}

int cabecalho(const char* exercicio, const char* funcao) 
{
    int comprimentoTotal = strlen(exercicio) + strlen(funcao) + 3;
    printf("\nEstudo Dirigido 03 - 17/03/2024\n");
    printf("Matricula: 855947 Nome: ANTONIO_DRUMOND_COTA_DE_SOUSA\n\n");
    imprimirLinhaIgual(comprimentoTotal);
    printf("%s - %s\n", exercicio, funcao);
    imprimirLinhaIgual(comprimentoTotal);
    printf("\n");
    return EXIT_SUCCESS;
}

void E0311(void)
{   
    char y[100] = "Renato";
    printf("%s", "Digite a sua palavra: ");
    scanf("%s", &y); getchar();
    int count = strlen(y);
    int i;
    for (i = 0;y[i]; ++i)
    {
        if((y[i]>='A')&&(y[i]<='Z')) {printf("%c", y[i]);}
    }
    printf("\n\n"); getchar();
}

void E0312(void)
{
    char y[100] = "Renato";
    printf("%s", "Digite a sua palavra: ");
    scanf("%s", &y); getchar();
    int count = strlen(y);
    int n = 0;
    int i;
    for (i = 0;y[i]; ++i)
    {
        if((y[i]>='A')&&(y[i]<='Z')) {printf("%c", y[i]); n++;}
    }
    printf("\n%s%d%s\n", "Ha ", n, " letras maiusculas."); getchar();
}

void E0313(void)
{
    char y[100] = "Renato";
    printf("%s", "Digite a sua palavra: ");
    scanf("%s", &y); getchar();
    int count = strlen(y);
    int n = 0;
    int i;
    for (i = 0;y[i]; ++i)
    {
        if((y[(count-i-1)]>='A')&&(y[(count-i-1)]<='Z')) {printf("%c", y[(count-i-1)]); n++;}
    }
    printf("\n%s%d%s\n", "Ha ", n, " letras maiusculas."); getchar();
}

void E0314(void)
{
    char y[100] = "Renato";
    printf("%s", "Digite a sua palavra: ");
    scanf("%s", &y); getchar();
    int count = strlen(y);
    int n = 0;
    int i;
    for (i = 0;y[i]; ++i)
    {
        if(((y[i]>='A')&&(y[i]<='Z')) || ((y[i]>='a')&&(y[i]<='z'))) {printf("%c", y[i]); n++;}
    }
    printf("\n%s%d%s\n", "Ha ", n, " letras."); getchar();
}

void E0315(void)
{
    char y[100] = "Renato";
    printf("%s", "Digite a sua palavra: ");
    scanf("%s", &y); getchar();
    int count = strlen(y);
    int n = 0;
    int i;
    for (i = 0;y[i]; ++i)
    {
        if((y[(count-i-1)]>='0')&&(y[(count-i-1)]<='9')) {printf("%c", y[(count-i-1)]); n++;}
    }
    printf("\n%s%d%s\n", "Ha ", n, " digitos."); getchar();
}

void E0316(void)
{
    char y[100] = "Renato";
    printf("%s", "Digite a sua palavra: ");
    scanf("%s", &y); getchar();
    int count = strlen(y);
    int n = 0;
    int i;
    for (i = 0;y[i]; ++i)
    {
        if(!((y[i]>='A')&&(y[i]<='Z')) && !((y[i]>='a')&&(y[i]<='z')) && !((y[i]>='0')&&(y[i]<='9'))) {printf("%c", y[i]); n++;}
    }
    printf("\n%s%d%s\n", "Ha ", n, " caracteres especiais."); getchar();
}

void E0317(void)
{
    int a, b, n, i, x = 0;
    printf("%s", "Insira as extremidades do intervalo: ");
    scanf(" %d %d", &a, &b); getchar();
    printf("%s", "Insira a quantidade de valores inteiros a serem checados: ");
    scanf(" %d", &n); getchar();
    int count = 0;
    for (i=0; i < n; ++i)
    {
        printf("\n%s", "Insira um numero inteiro: ");
        scanf("%d", &x); getchar();
        if((x%6==0)&&(x>=a)&&(x<=b)) {printf("%d\n", x); ++count;}
    }
    printf("%s%d%s", "Apenas ", count, " numeros atendem as condicoes.");
    printf("\n"); getchar();
}

void E0318(void)
{
    int a, b, n, i, x = 0;
    printf("%s", "Insira as extremidades do intervalo: ");
    scanf(" %d %d", &a, &b); getchar();
    printf("%s", "Insira a quantidade de valores inteiros a serem checados: ");
    scanf(" %d", &n); getchar();
    int count = 0;
    for (i=0; i < n; ++i)
    {
        printf("\n%s", "Insira um numero inteiro: ");
        scanf("%d", &x); getchar();
        if((x%4==0)&&(x>=a)&&(x<=b)&&(x%5!=0)) {printf("%d\n", x); ++count;}
    }
    printf("%s%d%s", "Apenas ", count, " numeros atendem as condicoes.");
    printf("\n"); getchar();
}

void E0319(void)
{
    int i, n, INTX = 0;
    double a, b, x = 0.0;
    printf("%s", "Insira as extremidades do intervalo: ");
    scanf(" %lf %lf", &a, &b); getchar();
    printf("%s", "Insira a quantidade de valores reais a serem checados: ");
    scanf(" %d", &n); getchar();
    int count = 0;
    for (i=0; i < n; ++i)
    {
        printf("\n%s", "Insira um numero real: ");
        scanf("%lf", &x); getchar();
        INTX = (int) x;
        if((INTX%2==0)&&(x>=a)&&(x<=b)) {printf("%lf\n", x); ++count;}
    }
    printf("%s%d%s", "Apenas ", count, " numeros atendem as condicoes.");
    printf("\n"); getchar();
}

void E0320(void)
{
    int i, n, INTX = 0;
    double a, b, x, FRAC = 0.0;
    do
    {
        printf("%s", "Insira as extremidades do intervalo aberto: ");
        scanf(" %lf %lf", &a, &b); getchar();
        if((a>1)||(a<0)||(b>1)||(b<0)) {printf("%s\n", "ERRO - Os numeros inseridos nao pertencem ao intervalo 0:1");}
    } while((a>1)||(a<0)||(b>1)||(b<0));
    printf("%s", "Insira a quantidade de valores reais a serem checados: ");
    scanf(" %d", &n); getchar();
    int count = 0;
    for (i=0; i < n; ++i)
    {
        printf("\n%s", "Insira um numero real: ");
        scanf("%lf", &x); getchar();
        INTX = (int) x; FRAC = (x - (double) INTX);
        if(!((FRAC>a)&&(FRAC<b))) {printf("%lf\n", x); ++count;}
    }
    printf("\n%s%d%s", "Apenas ", count, " numeros atendem as condicoes.");
    printf("\n"); getchar();
}

void E03E1(void)
{
    char x[100] = "Renato";
    printf("%s", "Digite algo: ");
    gets(x); 
    int i = 0,
        leng = strlen(x);
    for (i=0; i<leng; ++i)
    {
        if (!((x[i]>='A')&&(x[i]<='Z')) && !((x[i]>='a')&&(x[i]<='z')) && !((x[i]>='0')&&(x[i]<='9')))
        {
            printf("%c", x[i]);
        }
    }
    printf("\n\n");
}

void E03E2(void)
{
    char x[100] = "Renato";
    printf("%s", "Digite algo: ");
    scanf("%s", &x); getchar();
    int i, count = 0,
        leng = strlen(x);
    for (i=0; i<leng; ++i)
    {
        if (((x[i]>='A')&&(x[i]<='Z')) || ((x[i]>='a')&&(x[i]<='z')))
        {
            ++count;
        }
    }
    if (count == 0) {printf("%s", "A sequencia contem apenas simbolos que nao sao letras.");}
    else {printf("%s", "A sequencia contem letras.");}
    getchar();
}


// ((x>='A')&&(x<='Z')) -> Detect if uppercase letter
// ((x>='a')&&(x<='z')) -> Detect if lowercase letter
// (!((x>='A')&&(x<='Z')) && !((x>='a')&&(x<='z'))) -> Detect if not a letter
// (!((x>='A')&&(x<='Z')) && !((x>='a')&&(x<='z')) && !((x>='0')&&(x<='9'))) -> Detect if not a letter or number