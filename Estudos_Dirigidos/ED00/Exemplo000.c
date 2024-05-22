/**
 * Author: ANTONIO DRUMOND COTA DE SOUSA
 * Matricula: 855947
 * Data: 24/02/2024
 * Trabalho pratico Guia 0
 * Resultados no final do programa
 */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void clrscr ( ) { system ( "cls" ); } 

//Methods
void metodo01 ( void )
{
    printf ( "EXEMPLO101 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); // para esperar
}

void metodo02 (void)
{
    system ( "cls" ); // (Windows) para limpar a tela
// system ( "clear" ); // (Linux ) para limpar a tela
 // (dependente do sistema operacional)
 printf ( "EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n" );
 system ( "pause" ); // (Windows) para esperar
// getchar( ); // para esperar
 // (dependente do sistema operacional)
 return ( EXIT_SUCCESS );
}

void metodo03(void)
{  
    clrscr ( ); // funcao para limpar a tela
 printf ( "EXEMPLO103 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n" ); // para mudar de linha
 printf ( "MATRICULA: 855947 ALUNO : ANTONIO DRUMOND" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo04(void)
{
    printf ( "EXEMPLO104 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\n" ); // para mudar de linha (="\n")
 printf ( "MATRICULA: 855947 ALUNO : ANTONIO DRUMOND" );
 printf ( "\n" ); // para mudar de linha
 printf ( "PRESSIONAR <Enter> PARA TERMINAR. " );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo05(void)
{
    printf ( "EXEMPLO105 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855947 ALUNO : ANTONIO DRUMOND" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f", 3.1415); // valor com parte fracionaria
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR. " );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo06(void)
{
    #define PI 3.1415
    printf ( "EXEMPLO105 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855947 ALUNO : ANTONIO DRUMOND" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f", PI ); // valor com parte fracionaria
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR. " );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo07(void)
{   
    const float pi = 3.14; // com nome e tipo (melhor)
 printf ( "EXEMPLO107 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855947 ALUNO : ANTONIO DRUMOND" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f" , pi ); // constante real
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo08(void)
{
    const float pi = 3.14; // com nome e tipo (melhor)
 printf ( "EXEMPLO107 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855947 ALUNO : ANTONIO DRUMOND" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
 printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
 printf ( "\nREAL : %f" , pi ); // constante real
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo09(void)
{
    const float pi = 3.14; // com nome e tipo (melhor)
// definicao de variavel real
 float X = 10.01;
// definicao de variavel inteira
 int I = 10;
 printf ( "EXEMPLO109 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855947 ALUNO : ANTONIO DRUMOND" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nINTEIRO : %i" , I );
 printf ( "\nREAL : %f" , X );
 printf ( "\nREAL : %f" , pi );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo10(void)
{
const double pi = 3.14; // com nome e tipo (melhor)
// definicao de variavel real
 float X = 10.01;
// definicao de variavel inteira
 int I = 10;
// definicao de variavel caractere
 char N = '\n'; // mudar de linha
 printf ( "EXEMPLO110 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: 855947 ALUNO : ANTONIO DRUMOND" );
 printf ( "%c%s", N, "EXEMPLOS DE VALORES : " );
 printf ( "%c%s%i" , N, "INTEIRO : " , I );
 printf ( "%c%s%f" , N, "REAL : " , X );
 printf ( "%c%s%lf", N, "REAL : " , pi );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo11(void)
{
    // PROGRAMA PARA LER E IMPRIMIR UM VALOR INTEIRO
// VARIAVEL:
 int X = 0;
 printf ( "EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %d", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}


void metodo12(void)
{
    // PROGRAMA PARA LER E IMPRIMIR UM VALOR REAL
// VARIAVEL:
 double X = 0.0;
 printf ( "EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %lf", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo13(void)
{
    char X = '0';
 printf ( "EXEMPLO203 - LER E IMPRIMIR UM CARACTERE" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI: %c", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo14(void)
{
    // PROGRAMA PARA LER E IMPRIMIR, NO MAXIMO, 10 CARACTERES
// VARIAVEL:
 char x[10];
 printf ( "EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES" );
 printf ( "\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: " );
 scanf ( "%s", x ); // OBS.: NAO usar o (&) para caracteres !
 getchar( ); // limpar a entrada de dados
 printf ( "\nFOI DIGITADO: %s", x );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo15(void)
{
    int X=0, Y=0, Z=0;
 printf ( "EXEMPLO205 - LER E SOMAR DOIS VALORES INTEIROS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 Z = X + Y;
 printf ( "\nA SOMA DOS DOIS = %d", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo16(void)
{
    // PROGRAMA PARA LER E SUBTRAIR DOIS VALORES REAIS
// VARIAVEIS:
 float X=0.0, Y=0.0, Z=0.0;
 printf ( "EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%f", &Y );
 getchar( ); // limpar a entrada de dados
 Z = X - Y;
 printf ( "\nA DIFERENCA ENTRE OS DOIS = %f", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return (EXIT_SUCCESS);
}

void metodo17(void)
{
    // PROGRAMA PARA OPERAR VALORES LOGICOS
// VARIAVEIS:
 bool X=false, Y=false, Z=false;
 printf ( "EXEMPLO207 - OPERAR VALORES LOGICOS" );
 X = true;
 Y = false;
 Z = X || Y; // X ou Y
 printf ( "\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 Z = X && Y; // X e Y
 printf ( "\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo18(void)
{
    // PROGRAMA PARA CALCULAR A VELOCIDADE DE UM VEICULO
// VARIAVEIS:
 double D = 0.0, // Distancia
 T = 0.0, // Tempo
 V = 0.0; // Velocidade
 printf ( "EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
 printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
 scanf ( "%lf", &D );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
 scanf ( "%lf", &T );
 getchar( ); // limpar a entrada de dados
 V = D / T;
 printf ( "\nV = D / T = %lf%s", V, " m/s " );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo19(void)
{
    // PROGRAMA PARA COMPARAR CARACTERES COM UMA SENHA
// CONSTANTE:
 const char SENHA[5] = "XXXX";
// VARIAVEL:
 char S [10];
 printf ( "EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA" );
 printf ( "\nFORNECER UMA CADEIA DE CARACTERES QUALQUER: " );
 scanf ( "%s", S ); // OBS.: NAO usar o (&) para caracteres !
 getchar( ); // limpar a entrada de dados
 printf ( "\nA COMPARACAO COM A SENHA = %d", (strcmp(S,SENHA)==0)?1:0 );
// strcmp(S1,S2) compara S1 com S2
// igual a 0: S1 = S2 => 1 ( verdadeiro )
// diferente: S1 <> S2 => 0 ( falso )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( ( EXIT_SUCCESS ) );

}

void metodo20(void)
{
    // PROGRAMA PARA CALCULAR O ARCO TRIGONOMETRICO DE UM SENO
// CONSTANTE:
 const double pi = 3.14;
// VARIAVEIS:
 double ARCO = 0.0,
 COSSENO = 0.0,
 SENO = 0.0,
 TANGENTE = 0.0;
 printf ( "EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO" );
 printf ( "\nFORNECER O VALOR DO SENO: " );
 scanf ( "%lf", &SENO );
 getchar( ); // limpar a entrada de dados
 COSSENO = sqrt( 1.0 - pow(SENO,2) );
 TANGENTE = SENO / COSSENO;
 ARCO = atan( TANGENTE );
 printf ( "\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO*180.0/pi) );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo21(void)
{
    // PROGRAMA PARA LER UM VALOR INTEIRO E VERIFICAR SE E' ZERO
// VARIAVEL:
 int X = 0;
 printf ( "EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 if ( X == 0 )
 printf ( "\nO VALOR DIGITADO FOI ZERO" );
 else
 printf ( "\nO VALOR DIGITADO NAO FOI ZERO" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo22(void)
{
    // PROGRAMA PARA LER UM REAL E TESTAR SE DIFERENTE DE ZERO
// VARIAVEL:
 float X = 0.0;
 printf ( "EXEMPLO302 - LER E TESTAR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: " );
 scanf ( "%f", &X );
 getchar( ); // limpar a entrada de dados
 if( X != 0.0 )
 printf ( "\nO VALOR DIGITADO FOI DIFERENTE DE ZERO" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo23(void)
{
    // PROGRAMA PARA LER CARACTERE E VERIFICAR SE E' UM ALGARISMO
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO303 - LER E TESTAR UM CARACTERE" );
 printf ( "\nFORNECER UM ALGARISMO QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( X >= '0' && X <= '9' )
 {
 printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" );
 printf ( "\nO ALGARISMO DIGITADO FOI: %c", X );
 } // if ALGARISMO
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo24(void)
{
    // PROGRAMA PARA LER CARACTERE E TESTAR SE NAO E' ALGARISMO
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO304 - LER E TESTAR CARACTERE" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( !( X >= '0' && X <= '9') )
 {
 printf ( "\nNAO FOI DIGITADO UM ALGARISMO" );
 printf ( "\nFOI DIGITADO O CARACTERE: %c", X );
 } // if NAO ALGARISMO
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo25(void)
{
    // PROGRAMA PARA LER E TESTAR A IGUALDADE DE DOIS INTEIROS
// VARIAVEIS:
 int X=0, Y=0;
 printf ( "EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 if( X == Y )
 printf ( "\nDOIS VALORES IGUAIS" );
 else
 {
 printf ( "\n%d", X );
 printf ( " DIFERENTE DE " );
 printf ( "%d", Y );
 }
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo26(void)
{
    // PROGRAMA PARA LER E TESTAR DOIS VALORES REAIS
// VARIAVEIS:
 double X=0.0, Y=0.0;
 printf ( "EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%lf", &Y );
 getchar( ); // limpar a entrada de dados
 if( ! (X == Y) )
 {
 printf ( "\n%lf", X );
 printf ( " DIFERENTE DE " );
 printf ( "%lf", Y );
 }
 else
 {
 printf ( "VALORES IGUAIS" );
 } // if VALORES DIFERENTES
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo27(void)
{
    // PROGRAMA PARA TRATAR ALTERNATIVAS COM VALORES LOGICOS
// VARIAVEIS:
 int X=0, Y=0;
 bool Z=false;
 printf ( "EXEMPLO307 - TRATAR VALORES LOGICOS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); // limpar a entrada de dados
 Z = (X == Y);
 if( Z )
 printf ( "VALORES IGUAIS" );
 else
 printf ( "VALORES DIFERENTES" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo28(void)
{
    // PROGRAMA PARA LER E TESTAR UMA LETRA
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO308 - LER E TESTAR UMA LETRA" );
 printf ( "\nFORNECER UMA LETRA QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 if( X >= 'A' && X <= 'Z' )
 printf ( "FOI DIGITADA UMA LETRA MAIUSCULA" );
 else
 if( X >= 'a' && X <= 'z' )
 printf ( "FOI DIGITADA UMA LETRA MINUSCULA" );
 else
 printf ( "NAO FOI DIGITADA UMA LETRA" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo29(void)
{
    // PROGRAMA PARA COMPARAR CARACTERES < , = , >
// VARIAVEL:
 char X = '0';
 printf ( "EXEMPLO309 - COMPARAR CARACTERES < , = , >" );
 printf ( "\nFORNECER UM DOS CARACTERES CITADOS: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 switch( X )
 {
 case '>': printf ( "FOI DIGITADO O SINAL DE MAIOR" );
 break;
 case '=': printf ( "FOI DIGITADO O SINAL DE IGUAL" );
 break;
 case '<': printf ( "FOI DIGITADO O SINAL DE MENOR" );
 break;
 default : printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
 } // COMPARACAO DE X COM < , = , >
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo30(void)
{
    // PROGRAMA PARA IDENTIFICAR CARACTERES
// VARIAVEL
 char X = '0';
 printf ( "EXEMPLO310 - IDENTIFICAR CARACTERES" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); // limpar a entrada de dados
 switch ( X )
 {
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U': printf ( "FOI DIGITADO UMA VOGAL" );
 break;
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': printf ( "FOI DIGITADO UM ALGARISMO" );
 printf ( "\nO NUMERO CORRESPONDENTE = %d", (X-48) );
 break;
 default: printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
 } // IDENTIFICACAO DE UM CARACTERE
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo31(void)
{
    // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS" );
 printf ( "\n" ); // mudar de linha
 CONTADOR = 1;
 while ( CONTADOR <= 3 ) // REPETIR
 {
 printf ( "\n" ); // mudar de linha
 printf ( "%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 } // ENQUANTO ( CONTADOR <= 3 )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return (EXIT_SUCCESS);
}

void metodo32(void)
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0, N = 0, CONTADOR = 0;
 printf ( "EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 CONTADOR = 1;
 while ( CONTADOR <= N )
 {
 printf ( "\n%d", CONTADOR );
 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 } // ENQUANTO ( CONTADOR <= N )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo33(void)
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0, N = 0;
 printf ( "EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 while ( N > 0 ) // REPETIR
 {
 printf ( "\n%d", N );
 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 N = N - 1;
 } // ENQUANTO N > 0
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo34(void)
{
    // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
 for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1)
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 } // PARA CONTADOR EM [1:3]
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo35(void)
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 N = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); // limpar a entrada de dados
 for ( CONTADOR = 1; CONTADOR <= N; CONTADOR++ )
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d", X );
 } // PARA CONTADOR EM [1:N]
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo36(void)
{
    // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
 CONTADOR = 1;
 do // REPETIR
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 }
 while ( CONTADOR <= 3 ); // ATE' ( CONTADOR > 3 )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo37(void)
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &CONTADOR );
 getchar( ); // limpar a entrada de dados
 do // REPETIR
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR - 1;
 }
 while ( CONTADOR > 0 ); // ATE' ( CONTADOR <= 3 )
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo38(void)
{
    // PROGRAMA PARA LER E IMPRIMIR INTEIROS DIFERENTES DE ZERO
// VARIAVEL :
 int X = 0;
 printf ( "EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" );
 printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 while ( X != 0 ) // REPETIR
 {
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 printf ( "\nDIGITE UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 } // ENQUANTO X DIFERENTE DE ZERO
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void metodo39(void)
{
    // PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
// VARIAVEL :
 int X = 0;
 printf ( "EXEMPLO409 - PARA LER UM INTEIRO NAO NULO\n" );
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 while ( X == 0 ) // REPETIR
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 } // ENQUANTO X IGUAL A ZERO
 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
}

void metodo40(void)
{
    // PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
// VARIAVEL :
 int X = 0;
 printf ( "EXEMPLO410 - LER UM INTEIRO NAO NULO\n" );
 do // REPETIR
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); // limpar a entrada de dados
 }
 while ( X == 0 ); // ATE' X DIFERENTE DE ZERO
 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void P1 ( void )
{
 printf ( "\n" );
 printf ( "\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS" );
 printf ( "\n" );
}

void metodo41(void)
{
    // PROGRAMA PARA CHAMADA DE PROCEDIMENTO SEM PARAMETROS
 printf ( "EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO" );
 P1 ( ); // chamada ao procedimento
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
}

int Y = 0;

void P2 ( void )
{
printf ( "\n" );
printf ( "\nCHAMADO O PROCEDIMENTO P2 %d VEZ(ES)", Y );
printf ( "\n" );
} 

void metodo42(void)
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
 printf ( "EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL\n" );
 for ( Y = 1; Y <= 5; Y = Y + 1 )
 P2 ( ); // chamar 5 vezes
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

int Z = 0;

void P3 ( void )
{
 Z = Z + 1; // AVANCAR O CONTEXTO
 printf ( "\nCHAMADO O PROCEDIMENTO P3 %d VEZ(ES)", Z );
 printf ( "\n" );
 if ( Z < 5 )
 P3 ( ); // CHAMAR O PROCEDIMENTO RECURSIVAMENTE
 printf ( "\nRETORNANDO AO PROCEDIMENTO P3 PARA A CHAMADA %d", Z );
 Z = Z - 1; // RETORNAR AO CONTEXTO ANTERIOR
 getchar ( ); // para esperar
}

void metodo43(void)
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
 printf ( "EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL\n" );
 Z = 0;
 P3 ( ); // OBSERVAR A RECURSIVIDADE !
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
}

void P4 ( int A )
{
 printf ( "\nCHAMADO O PROCEDIMENTO P4 %d VEZ(ES)\n", A );
 if ( A < 5 )
 P4( A + 1 ); // chamar recursivamente com parametro
 printf ( "\nRETORNANDO AO PROCEDIMENTO P4 PARA A CHAMADA %d", A );
 getchar ( ); // para esperar
}

void metodo44(void)
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
 printf ( "EXEMPLO0904 - CHAMADA/RETORNO COM PARAMETRO\n" );
 P4 ( 1 ); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void P5 ( int B )
{
 printf ( "\nCHAMADO O PROCEDIMENTO P5 %d VEZ(ES)\n", B );
 if ( B > 1 )
 P5 ( B - 1 );
 printf ( "\nRETORNANDO AO PROCEDIMENTO P5 PARA A CHAMADA %d", B );
 getchar ( ); // para esperar
} // fim procedimento P1( )


void metodo45(void)
{
    // PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR VALOR
 printf ( "EXEMPLO0505 - CHAMADA/RETORNO COM PARAMETRO\n" );
 P5 ( 5 ); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );
}

void P7 (int X);

void P6 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P6 COM X = %d\n", X );
 if ( X < 5 )
 P7 ( X );
 printf ( "RETORNANDO AO PROCEDIMENTO P7 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ); // para esperar
} 

void P7 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P7 COM X = %d\n", X );
 X = X+1;
 printf ( "RETORNANDO AO PROCEDIMENTO P6 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ); // para esperar
 P6 ( X );
}

void metodo46(void)
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
 printf ( "EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO\n\n" );
 P6 ( 1 ); // OBSERVAR RECURSIVIDADE INDIRETA !
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void P8 ( int* X )
{
 *X = *X + 1; // AVANCAR O CONTEXTO NA REFERENCIA
 printf ( "\nCHAMADO O PROCEDIMENTO P8 %d VEZ(ES)\n", *X );
 if ( *X < 5 )
 P8 ( X );
 printf ( "\nRETORNANDO AO PROCEDIMENTO P8 PARA A CHAMADA %d", *X );
 *X = *X - 1; // RETORNAR AO CONTEXTO DA REFERENCIA ANTERIOR
 getchar ( ); // para esperar
}

void metodo47(void)
{
    // PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR REFERENCIA
// VARIAVEL LOCAL
 int X;
 printf ( "EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA\n" );
 X = 0;
 P8 ( &X ); // OBSERVAR REPETICAO FINITA !
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

void P10 ( int X ); // PROTOTIPO DE PROCEDIMENTO

void P9 ( int X )
{
 X = X + 1;
 printf ( "CHAMADO O PROCEDIMENTO P9 COM X = %d\n", X );
 if ( X < 4 )
 {
 P9 ( X );
 P10 ( X );
 }
 printf ( "\nRETORNANDO AO PROCEDIMENTO P9 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ) ; // para esperar
}

void P10 ( int X )
{
 printf ( "CHAMADO O PROCEDIMENTO P10 COM X = %d\n", X );
 if ( X > 1 )
 P10 ( X - 1 );
 printf ( "RETORNANDO AO PROCEDIMENTO P10 PARA A CHAMADA COM X = %d", X );
 getchar ( ); // para esperar
}

void metodo48(void)
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
 printf ( "EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS\n\n" );
 P9 ( 1 );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); // para esperar
 return ( EXIT_SUCCESS );

}

int main (void)
{
   int opcao = 0;
   do
   {
    // identificar
    printf ( "\n" );
    printf("%s\n","");
    printf("%s\n","");
    printf ( "%s\n", "Lista_00 - v.0.1 - 24/02/2024");
    printf ( "%s\n", "Matricula: 855947 Nome: antonio drumond cota de sousa" );
    // pedir escolha
    printf("%s\n","");
    printf("\n%s","Escolha um dos 48 metodos ou pressione 0 para sair");
    // ler opcao
    printf("%s\n","");
    scanf  ( "%d", &opcao );
    getchar ( );
    printf ( "%d",  opcao );
    // escolher acao
    switch (opcao)
    {
        case 0: break;

        case 1: metodo01(); break;
        case 2: metodo02(); break;
        case 3: metodo03(); break;
        case 4: metodo04(); break;
        case 5: metodo05(); break;
        case 6: metodo06(); break;
        case 7: metodo07(); break;
        case 8: metodo08(); break;
        case 9: metodo09(); break;
        case 10: metodo10(); break;
        case 11: metodo11(); break;
        case 12: metodo12(); break;
        case 13: metodo13(); break;
        case 14: metodo14(); break;
        case 15: metodo15(); break;
        case 16: metodo16(); break;
        case 17: metodo17(); break;
        case 18: metodo18(); break;
        case 19: metodo19(); break;
        case 20: metodo20(); break;
        case 21: metodo21(); break;
        case 22: metodo22(); break;
        case 23: metodo23(); break;
        case 24: metodo24(); break;
        case 25: metodo25(); break;
        case 26: metodo26(); break;
        case 27: metodo27(); break;
        case 28: metodo28(); break;
        case 29: metodo29(); break;
        case 30: metodo30(); break;
        case 31: metodo31(); break;
        case 32: metodo32(); break;
        case 33: metodo33(); break;
        case 34: metodo34(); break;
        case 35: metodo35(); break;
        case 36: metodo36(); break;
        case 37: metodo37(); break;
        case 38: metodo38(); break;
        case 39: metodo39(); break;
        case 40: metodo40(); break;
        case 41: metodo41(); break;
        case 42: metodo42(); break;
        case 43: metodo43(); break;
        case 44: metodo44(); break;
        case 45: metodo45(); break;
        case 46: metodo46(); break;
        case 47: metodo47(); break;
        case 48: metodo48(); break;

        default: printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
                 break;
    }
   }
   while (opcao != 0);
   {
    printf ( "\n%s\n\n", "Apertar ENTER para terminar." );
    getchar( );
    return (0);
   }
   
}

/*
RESULTADOS:

Metodo 1: Retorna texto
Metodo 2: Limpa o terminal
Metodo 3: Limpa terminal e retorna nome e matricula
Metodo 4: Retorna nome e matricula
Metodo 5: Retorna matricula e exemplos de valores de cada tipo
Metodo 6: Mesmo que anterior
Metodo 7: Mesmo que anterior, porem com menos precisao no numero decimal
Metodo 8: Mesmo que anterior
Metodo 9: Retorna matricula e exemplos de valores, adicionando variavel X
Metodo 10: Mesmo que anterior, porem utilizando variavel inteira
Metodo 11: Pede e retorna um valor numerico inteiro digitado no terminal
Metodo 12: Pede e retorna um valor numerico real digitado no terminal
Metodo 13: Pede e retorna um unico caractere
Metodo 14: Pede e retorna uma sequencia de caracteres
Metodo 15: Pede dois valores inteiros e retorna sua soma
Metodo 16: Pede dois valores inteiros e retorna sua subtracao
Metodo 17: Opera valores logicos X e Y, retornando sua disjuncao e conjuncao
Metodo 18: Calcula e retorna a velocidade estavel necessaria para percorrer uma distancia X em Y segundos
Metodo 19: Compara uma sequencia de caracteres dada pelo usuario com uma senha predefinida e retorna se a sequencia e igual a senha
Metodo 20: Retorna o arco correspondeente a um seno informado
Metodo 21: Retorna se um valor inteiro digitado foi igual ou diferente de zero
Metodo 22: Retorna se um valor real informado foi igual ou diferente de zero
Metodo 23: Retorna se um valor qualquer informado pelo usuario e um algarismo
Metodo 24: Mesmo que anterior, porem com caracteres (letras) ao inves de numeros
Metodo 25: Identifica e retorna se dois valores inteiros informados sao iguais ou nao
Metodo 26: Mesmmo que anterior, mas com valores reais e nao inteiros
Metodo 27: Mesmo que 25, porem de maneira diferente
Metodo 28: Identifica e retorna se uma letra informada e maiuscula ou minuscula
Metodo 29: Transcreve e retorna o nome de um caractere comparador <, =, >
Metodo 30: Identifica e retorna se um caractere informado se trata de um algarismo ou vogal, retornando "algarismo qualquer" em outros casos
Metodo 31: Retorna 3 valores inteiros informados pelo usuario
Metodo 32: Mesmo que anterior, mas o numero de valores inteiros e escolhido pelos usuarios
Metodo 33: Mesmo que anterior, porem com funcionamento diferente
Metodo 34: Retorna 3 valores inteiros informados pelo usuario, alem do numero de valores ja informados
Metodo 35: Mesmo que anterior, mas o numero de valores e definido pelo usuario
Metodo 36: Mesmo que 31, mas com funcionamento diferente
Metodo 37: Mesmo que 32, mas com funcionamento diferente
Metodo 38: Retorna valores inteiros informados pelo usuario, repetindo ate que 0 seja informado
Metodo 39: Pede que o usuario insira um numero, repetindo ate que o numero seja DIFERENTE de zero
Metodo 40: Pede que o usuario insira um numero, repetindo ate que o numero seja IGUAL a zero
Metodo 41: Chama um metodo P1 sem parametros definido
Metodo 42: Chama o procedimento P2 cinco vezes
Metodo 43: Chama o procedimento P3 cinco vezes, e inicia uma contagem de cinco confirmacoes de retorno do usuario
Metodo 44: Mesmo que anterior mas com funcionamento diferente
Metodo 45: Mesmo que anterior mas com funcionamento diferente
Metodo 46: Chama por dois metodos que se chamam recursivamente, um deles contando positivamente ate cinco, e o outro voltando a contagem a zero e encerrando execucao
Metodo 47: Mesmo que metodo 43
Metodo 48: Chama por um procedimento que se ativa recursivamente N vezes, sendo N definido por um outro metodo, tambem chamado recursivamente, que reduz a contagem de N ate zero  e encerra a execucao

*/
