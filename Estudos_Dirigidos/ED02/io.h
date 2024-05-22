#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int P211 (char *text)
{
    int x = 0;
    printf("%s\n",text);
    scanf("%d", &x); getchar();
    return (x % 2 == 0);    
}

int P212 (char *text)
{
    int x = 0;
    printf("%s\n",text);
    scanf("%d", &x); getchar();
    return(( (x>25) && (x%2==0) ) || ( (x<-25) && (x%2!=0) ));
}

int P213 (char *text)
{
    int x = 0;
    printf("%s\n",text);
    scanf("%d", &x); getchar();
    return((x>35)&&(x<65));
}

int P214 (char *text)
{
    int x = 0;
    printf("%s\n",text);
    scanf("%d", &x); getchar();
    return((x>=15)&&(x<=60));
}

int P215 (char *text)
{
    int x =0;
    printf("%s\n", text);
    scanf("%d", &x); getchar();
    if ((x>=10)&&(x<=30))
    {
        if(x>=25) {printf("%s\n","O numero pertence a ambos os intervalos");}
        else {printf("%s\n","O numero pertence a apenas o primeiro intervalo");}
    }
    else
    {
        if((x>=25)&&(x<=50))
        {printf("%s\n","O numero pertence apenas ao segundo intervalo");}
        else{printf("%s\n","O numero nao pertence a nenhum dos intervalos");}
    }
}

int P216 (char *text)
{
    int x, y = 0;
    printf("%s\n",text);
    printf("%s\n", "Primeiro numero: ");
    scanf("%d", &x); getchar();
    printf("%s\n", "Segundo numero: ");
    scanf("%d", &y); getchar();
    return((x%2!=0)&&(y%2==0));
}

int P217 (char *text)
{
    int x, y = 0;
    printf("%s\n",text);
    printf("%s\n", "Digite ambos os numeros: ");
    scanf("%d%d", &x, &y); getchar();
    if ((x%2==0)&&(x<0)) {printf("%s","O primeiro numero antede as condicoes e ");}
    else {printf("%s", "O primeiro numero nao antede as condicoes e ");}
    if ((y%2!=0)&&(y>=0)) {printf("%s\n", "o segundo numero atende as condicoes.");}
    else {printf("%s", "o segundo numero nao atende as condicoes.");}
    return(EXIT_SUCCESS);
}

int P218 (char *text)
{
    double x, y = 0.0;
    printf("%s\n",text);
    printf("%s\n", "Insira os dois numeros: ");
    scanf("%lf%lf", &x, &y); getchar();
    if (y==x/3) {printf("%s\n", "O segundo e igual ao terco do primeiro");}
    else
    {
        if (y>x/3) {printf("%s\n","O segundo e maior que o terco do primeiro");}
        else {printf("%s\n", "O segundo e menor que o terco do primero");}
    }
    return(EXIT_SUCCESS);
}

int P219 (char *text)
{
    double x, y, z = 0;
    printf("%s\n%s\n", text, "Insira os 3 numeros: ");
    scanf("%lf%lf%lf", &x, &y, &z); getchar();
    if(y==z) {printf("%s\n", "ERRO - SEGUNDO E TERCEIRO NUMERO IGUAIS"); return(0);}
    else
    {
        if(y<z) {return((x>y)&&(x<z));}
        if(z<y) {return((x>z)&&(x<y));}
    }
}

int P220 (char *text)
{
    double x, y, z = 0;
    printf("%s\n%s\n", text, "Insira os 3 numeros: ");
    scanf("%lf%lf%lf", &x, &y, &z); getchar();
    if((y==z)||(x==z)||(x==y)) {printf("%s\n", "ERRO - OS NUMEROS INSERIDOS NAO SAO DIFERENTES"); return(0);}
    else
    {
        if(y<z) {return((x>y)&&(x<z));}
        if(z<y) {return((x>z)&&(x<y));}
    }
}

int P2E1 (char *text)
{
    char _1, _2, _3 = '0';
    printf("%s\n%s\n", text, "Insira os 3 caracteres: ");
    scanf(" %c %c %c", &_1, &_2, &_3); getchar();
    if((_1==_2)||(_2==_3)||(_3==_1)) {printf("%s\n", "ERRO - AS LETRAS INSERIDAS NAO SAO DIFERENTES"); return(0);}
    else
    {
        if(_2<_3) {return((_1>_2)&&(_1<_3));}
        if(_3<_2) {return((_1>_3)&&(_1<_2));}
    }
}

int P2E2 (char *text)
{
    char _1, _2, _3 = '0';
    printf("%s\n%s\n", text, "Insira os 3 caracteres: ");
    scanf(" %c %c %c", &_1, &_2, &_3); getchar();
    if((_1==_2)||(_2==_3)||(_3==_1)) {printf("%s\n", "ERRO - AS LETRAS INSERIDAS NAO SAO DIFERENTES"); return(0);}
    else
    {
        if(_2<_3) {return(!((_1>_2)&&(_1<_3)));}
        if(_3<_2) {return(!((_1>_3)&&(_1<_2)));}
    }
}