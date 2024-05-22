/**
 * 855947_AED1
 * ANTONIO DRUMOND COTA DE SOUSA
 * ESTUDO DIRIGIDO 02    
 */

#include "io.h"
#include "cabecalho.h"

int main (void)
{
    cabecalho("Estudo Dirigido", "02");

    printf("%s%d\n","test = ",P211("Checar se um numero inteiro e par"));
    printf("\n");
    printf("%s%d\n","test = ",P212("Checar se um numero inteiro e maior que 25 e par ou menor que -25 e impar"));
    printf("\n");
    printf("%s%d\n","test = ",P213("Checar se um numero inteiro pertence ao intervalo aberto entre 35 e 65"));
    printf("\n");
    printf("%s%d\n","test = ",P214("Checar se um numero inteiro pertence ao intervalo fechado entre 15 e 60"));
    printf("\n");
    P215("Checar se um numero inteiro pertence a, entre os intervalos 10:30 e 25:50, a um dos intervalos, nenhum ou ambos");
    printf("\n");
    printf("%s%d\n","test = ",P216("Checar se, de dois numeros fornecidos, o primeiro e impar e o segundo e par"));
    printf("\n");
    P217("Checar se se de dois valores inseridos o primeiro e par e negativo, e se o segundo e impar e positivo.");
    printf("\n");
    P218("Checar se entre dois valores inseridos, o segundo e menor, igual ou maior que um terco do primeiro");
    printf("\n");
    printf("%s%d\n","test = ",P219("Checar se entre tres valores inseridos, o primeiro esta entre os dois ultimos, quando esses dois forem diferentes entre si."));
    printf("\n");
    printf("%s%d\n","test = ",P220("Checar se entre tres valores inseridos, o primeiro esta entre os dois ultimos, quando todos os numeros forem diferentes entre si."));
    printf("\n");
    printf("%s%d\n", "test = ", P2E1("Checar se entre tres caracteres inseridos, o primeiro esta entre os dois ultimos, quando esses dois forem diferentes entre si."));
    printf("\n");
    printf("%s%d\n", "test = ", P2E2("Checar se entre tres caracteres inseridos, o primeiro esta fora do intervalo entre os dois ultimos, quando esses dois forem diferentes entre si."));
    printf("\n");

    getchar(); return(0);   
}

/**
 * Resultados:
 * Exemplo: Input -> Output
 * P211: 2 -> 1 ; 1 -> 0
 * P212: 32 -> 1 ; -50 -> 0 ; -61 -> 1
 * P213: 40 -> 1 ; 30 -> 0 ; 65 -> 0
 * P214: 15 -> 1 ; 62 -> 0 ; 40 -> 1
 * P215: 27 -> ambos ; 15 -> Primeiro intervalo ; 40 -> Segundo intervalo ; 9 -> Nenhum dos intervalos
 * P216: 5, 6 -> 1 ; 4, 7 -> 0 ; 5, 3 -> 0
 * P217: -40, 31 -> Ambos atendem ; 32, 35 -> Apenas o segundo atende ; -90, 30 -> Apenas o primeiro atende
 * P218: 9, 3 -> Igual ; 12, 5 -> Maior ; 8, 1 -> Menor
 * P219: 0.75, 0.5, 1.8 -> 1 ; 3.6, 4.5, 2.4 -> 1 ; 6.3, 7.2, 6.5 -> 0
 * P220: 0.75, 0.5, 1.8 -> 1 ; 3.6, 4.5, 3.6 -> ERRO
 * P2E1: a, e, c -> 0 ; d, u, a  -> 1 ; c, x, b -> 1
 * P2E2: a, e, c -> 1 ; a, c, e -> 1 ; d, u, a -> 0 ; a, e, a -> ERRO
 */