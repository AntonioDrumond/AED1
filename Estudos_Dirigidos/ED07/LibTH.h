#include "LibAD.h"

void E0711()
{
    int n = 0, x = 0;
    FILE * arquivo = NULL;
    arquivo = fopen("file.txt", "wt");
    readIntT(&n, "Insira um numero inteiro: ");
    for(n=n; n>0; n--)
    {
        x+=4;
        fprintf(arquivo, "%d\n", x);
    }
    fclose(arquivo);
    printf("%s", "Pressione ENTER para terminar. ");
    getchar();
}

void block_0712 (int n, int sum, FILE * arquivo)
{
    if(n>0)
    {
        block_0712(n-1, sum+10, arquivo);
        fprintf(arquivo, "%d\n", sum);
    }
}

void E0712()
{
    int n = 0;
    FILE * arquivo = fopen("file.txt", "wt");
    readIntT(&n, "Insira um numero inteiro: ");
    block_0712(n, 25, arquivo);
    fclose(arquivo);
    printf("%s", "Pressione ENTER para terminar. ");
    getchar();
}

void E0713()
{
    int n = 0, i = 0;
    double value = 0.0;
    FILE * arquivo = fopen("file.txt", "wt");
    readIntT(&n, "Insira um numero inteiro: ");
    for (i=0; i<n; i++)
    {
        value = pow(5, i);
        fprintf(arquivo, "%d\n", (int)value);
    }
    fclose(arquivo);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

void E0714()
{
    int n = 0;
    double value = 0.0;
    FILE * arquivo = fopen("file.txt", "wt");
    readIntT(&n, "Insira um numero inteiro: ");
    for (n-=1; n>=0; n--)
    {
        value = 1/pow(5, n);
        fprintf(arquivo, "%lf\n", value);
    }
    fclose(arquivo);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

void E0715()
{
    int n = 0, i = 1;
    double x = 0.0, value = 1.0;
    FILE * arquivo = fopen("file.txt", "wt");
    readIntT(&n, "Insira um numero inteiro: ");
    readDoubleT(&x, "Insira um valor real: ");
    for (i=1; i<=n; i++)
    {
        fprintf(arquivo, "%lf\n", value);
        value = 1/pow(x, (double)(i*2)+1);
    }
    fclose(arquivo);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

void E0716()
{
    int n = 0;
    double result = 0.0;
    double y = 0.0;
    FILE * arquivo = fopen("file.txt", "r");
    FILE * output = fopen("RESULTADO06.TXT", "wt");
    readIntT(&n, "Insira um numero inteiro: ");
    if(arquivo==NULL)
    {
        printf("%s\n", "O arquivo nao existe, utilize um dos metodos anteriores para cria-lo. ");
    }
    while(fscanf(arquivo, "%lf", &y)==1 && n>0)
    {
        result += y;
        n--;
    }
    fprintf(output, "%lf\n", result);
    fclose(arquivo); fclose(output);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

void E0717()
{
    int n = 0;
    double result = 0.0;
    double y = 0.0;

    E0714();

    FILE * arquivo = fopen("file.txt", "r");
    FILE * output = fopen("RESULTADO07.TXT", "wt");
    readIntT(&n, "Insira um numero inteiro: ");

    while(fscanf(arquivo, "%lf", &y)==1 && n>0)
    {
        result += 1/y;
        n--;
    }

    fprintf(output, "%lf\n", result);
    fclose(arquivo); fclose(output);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

void E0718()
{
    int n = 0, i = 1;
    double result = 0.0;
    FILE * output = fopen("RESULTADO08.TXT", "wt");
    readIntT(&n, "Insira um numero inteiro: ");
    
    for (i=4; i<=n*3; i+=3)
    {
        fprintf(output, "%d => %d\n", i, fiboN(i-1));
    }
    fclose(output);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

int fcountUpperSpcc(char *text, FILE * arquivo)
{
    int i = 0, sqs = 0, count = 0, total = 0,
        leng = strlen(text);
    for (i=0; i<leng; ++i)
    {
        do
        {
            if(isUpperr(text[i]))
            {
                ++count;
            }
            ++i;
        } while ((text[i]!=' ')&&(text[i]!='\0'));
        ++sqs;
        fprintf(arquivo, "%s%d%s%d%s\n", "A sequencia ", sqs, " contem ", count, " letras ou numeros.");
        total += count; count = 0;
    }
    return total;
}

void E0719b() //Primeira tentativa, so consegue ler a primeira linha do arquivo
{
    int i = 0, sqs = 0, count = 0;
    char text[200] = "Renato";
    FILE * createfile = fopen("file0719.txt", "w"); fclose(createfile); //Para criar o arquivo
    FILE * arquivo = fopen("file0719.txt", "r");
    FILE * output = fopen("RESULTADO09.TXT", "wt");
    printf("%s", "Insira o input no arquivo file0719.txt e pressione ENTER para comecar. "); getchar();
    fgets(text, 200, arquivo);
    for (i=0; i<strlen(text); ++i)
    {
        do
        {
            if(isUpperr(text[i]))
            {
                ++count;
            }
            ++i;
        } while ((text[i]!=' ')&&(text[i]!='\0'));
        ++sqs;
        fprintf(output, "%s%d%s%d%s\n", "A sequencia ", sqs, " contem ", count, " letras ou numeros.");
    }
    fclose(arquivo); fclose(output);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

void E0719()
{
    int count = 0, nsqs = 0, i = 0;
    char x[512] = "Renato";
    FILE * createfile = fopen("file0719.txt", "w"); fclose(createfile); //Para criar o arquivo
    FILE * arquivo = fopen("file0719.txt", "r");
    FILE * output = fopen("RESULTADO09.TXT", "wt");
    printf("%s", "Insira o input no arquivo file0719.txt e pressione ENTER para comecar. "); getchar();
    while(fgets(x, 512, arquivo) != NULL)
    {
        for (i=0; i<strlen(x); ++i)
        {
            do
            {
                if(isUpperr(x[i])) {++count;}
                ++i;
            } while ((x[i]!=' ')&&(x[i]!='\0')); nsqs++;
            fprintf(output, "%s%d => %d%s\n", "Sequencia ", nsqs, count, " letra(s) maiuscula(s)."); count = 0;
        }
    }
    fclose(arquivo); fclose(output);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

void E0720()
{
    int count = 0, nsqs = 0, i = 0;
    char x[512] = "Renato";
    FILE * createfile = fopen("file0720.txt", "w"); fclose(createfile); //Para criar o arquivo
    FILE * arquivo = fopen("file0720.txt", "r");
    FILE * output = fopen("RESULTADO10.TXT", "wt");
    printf("%s", "Insira o input no arquivo file0720.txt e pressione ENTER para comecar. "); getchar();
    while(fgets(x, 512, arquivo) != NULL)
    {
        for (i=0; i<strlen(x); ++i)
        {
            do
            {
                if(isNumberr(x[i]) && ((int)x[i]-48)>=5) {++count;}
                ++i;
            } while ((x[i]!=' ')&&(x[i]!='\0')); nsqs++;
            fprintf(output, "%s%d => %d%s\n", "Sequencia ", nsqs, count, " numeros maiores ou iguais a 5."); count = 0;
        }
    }
    fclose(arquivo); fclose(output);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

void block_07E1(FILE* arq, int x, int d)
{
    if(d>0)
    {
        block_07E1(arq, x, d-2);
        if(x%d==0) {fprintf(arq, "%d\n", d);}
    }
}

void E07E1()
{
    int value = 0;
    FILE * arquivo = fopen("file.txt", "wt");
    readIntT(&value, "Insira um numero inteiro: ");
    if(value%2==0)
    {block_07E1(arquivo, value, value-1);}
    else {block_07E1(arquivo, value, value);}
    fclose(arquivo);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}

void E07E2()
{
    int count = 0;
    char x[10];
    FILE * createfile = fopen("file07E2.txt", "wt"); fclose(createfile);
    FILE * arquivo = fopen("file07E2.txt", "rt");
    printf("%s", "Insira palavras, uma por linha, no arquivo \"file07E2.txt\" e pressione ENTER para comecar. "); getchar();
    while (fgets(x, 10, arquivo)!=NULL)
    {
        if(x[0]=='c' || x[0]=='C')
        {
            count++;
        }
    }
    printf("%s%d%s\n", "No arquivo lido, ", count, " linhas comecavam com \"c\" ou \"C\".");
    fclose(arquivo);
    printf("%s", "Pressione ENTER para terminar. "); 
    getchar();
}