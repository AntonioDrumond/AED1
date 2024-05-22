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
    printf("\nEstudo Dirigido 02 - 10/03/2024\n");
    printf("Matricula: 855947 Nome: ANTONIO_DRUMOND_COTA_DE_SOUSA\n\n");
    imprimirLinhaIgual(comprimentoTotal);
    printf("%s - %s\n", exercicio, funcao);
    imprimirLinhaIgual(comprimentoTotal);
    printf("\n");
    return EXIT_SUCCESS;
}



	
