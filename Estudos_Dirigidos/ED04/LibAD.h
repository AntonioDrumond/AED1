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
    printf("\nEstudo Dirigido 04 - 21/03/2024\n");
    printf("Matricula: 855947 Nome: ANTONIO_DRUMOND_COTA_DE_SOUSA\n\n");
    imprimirLinhaIgual(comprimentoTotal);
    printf("%s - %s\n", exercicio, funcao);
    imprimirLinhaIgual(comprimentoTotal);
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

_Bool isUpperr(char x)
{return((x>='A')&&(x<='Z'));}

_Bool isLowerr(char x)
{return((x>='a')&&(x<='z'));}

_Bool isLetterr(char x)
{return(((x>='a')&&(x<='z'))||((x>='A')&&(x<='Z')));}

_Bool isNumberr(char x)
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

_Bool firstSmallerStringg (char *st1, char *st2)
{
    int leng1 = strlen(st1),
        leng2 = strlen(st2);
    return(leng1>=leng2);
}

// https://www.instagram.com/renatomestremat/