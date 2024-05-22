#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void EQUALINE(int comprimento) 
{
    for (int i = 0; i < comprimento; i++) 
    {
        printf("=");
    }
    printf("\n");
}

int Header(const char* exercicio, const char* data) 
{
    int comprimentoTotal = strlen(exercicio) + strlen(data) + 3;
    printf("Matricula: 855947 Nome: ANTONIO_DRUMOND_COTA_DE_SOUSA\n\n");
    EQUALINE(comprimentoTotal);
    printf("%s - %s\n", exercicio, data);
    EQUALINE(comprimentoTotal);
    printf("\n");
    return EXIT_SUCCESS;
}

char *readString(char *par)
{
    printf("Digite uma palavra: ");
    fgets ( par, 100-1, stdin);
    par[strlen(par)-1]='\0';
    return par;
}

char *readStringT(char *var, char *text)
{
    printf(text);
    fgets ( var, 100-1, stdin);
    var[strlen(var)-1]='\0';
    return var;
}

int readIntT(int *var, char *text)
{
    int resultado;
    printf("%s", text);
    resultado = scanf("%d", var);
    while (resultado != 1)
    {
        getchar();
        printf("%s", "Entrada invalida, por favor digite um numero inteiro: ");
        resultado = scanf("%d", var);
    }
    getchar();
    return *var;
}

bool isUpperr(char x)
{return((x>='A')&&(x<='Z'));}

bool isLowerr(char x)
{return((x>='a')&&(x<='z'));}

bool isLetterr(char x)
{return(((x>='a')&&(x<='z'))||((x>='A')&&(x<='Z')));}

bool isNumberr(char x)
{return((x>='0')&&(x<='9'));}

int countAplhaNumm(char *text)
{
    int leng = strlen(text),
        i = 0, count = 0;
    for (i=0; i<leng; i++)
    {
        if (isLetterr(text[i])||isNumberr(text[i])) {++count;}
    }
    return count;
}

int countALphaNumSpcc(char *text)
{
    int i = 0, sqs = 0, count = 0, total = 0,
        leng = strlen(text);
    for (i=0; i<leng; ++i)
    {
        do
        {
            if(isNumberr(text[i])||isLetterr(text[i]))
            {
                ++count;
            }
            ++i;
        } while ((text[i]!=' ')&&(text[i]!='\0'));
        ++sqs;
        printf("%s%d%s%d%s\n", "A palavra ", sqs, " contem ", count, " letras ou numeros.");
        total += count; count = 0;
    }
    return total;
}

int factorial(int n)
{
    int i = 2, total = 1;
    if (n!=0&&n!=1)
    {
        n++;
        for (i=2; i<n; i++) {total *= i;}
    }
    return total;
}
// https://www.instagram.com/renatomestremat/