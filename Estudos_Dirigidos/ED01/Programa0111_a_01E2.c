/**
 * Author: ANTONIO DRUMOND COTA DE SOUSA
 * Matricula: 855947
 * Data: 28/02/2024
 * Estudo Dirigido 01
 * Resultados no final do programa
 */

//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265359

void E1 (void)
{
    float X = 0;
    printf("%s\n", "Insira a medida do lado: ");
    scanf("%f", &X); getchar();
    float Y = pow((X*3),2);
    printf("%s%f\n", "A medida da area e igual a: ", Y);
    printf("\n");
    getchar();
    return(EXIT_SUCCESS);
}

void E2 (void)
{
    float X = 0;
    printf("%s\n", "Insira a medida do lado: ");
    scanf("%f", &X); getchar();
    float LADO2 = X/2;
    float area = pow(LADO2, 2),
          _2P = 4*LADO2;
    printf("%s%f\n", "A area e igual a ", area, " ");
    printf("%s%f", "e o perimetro e igual a ", _2P);
    getchar(); 
    return(EXIT_SUCCESS);
}

void E3 (void)
{
    float X1 = 0;
    float X2 = 0;
    printf("%s\n", "Insira a medida de um dos lados de um retangulo");
    scanf("%f", &X1); getchar();
    printf("%s\n", "Insira a medida do outro lado");
    scanf("%f", &X2); getchar();
    float area = 6 * (X1 * X2);
    printf("%s%f\n", "A area e igual a ", area);
    getchar();
    return(EXIT_SUCCESS);   
}

void E4 (void)
{
    float X1 = 0;
    float X2 = 0;
    printf("%s\n", "Insira a medida de um dos lados de um retangulo");
    scanf("%f", &X1); getchar();
    printf("%s\n", "Insira a medida do outro lado");
    scanf("%f", &X2); getchar();
    float area = (X1 * X2) / 4;
    printf("%s%f", "A area e igual a ", area);
    getchar();
    return(EXIT_SUCCESS);
}

void E5 (void)
{
    float B = 0,
          H = 0;
    printf("%s\n", "Insira a medida da base de um triangulo");
    scanf("%f", &B); getchar();
    printf("%s\n", "Insira a medida da altura do triangulo");
    scanf("%f", &H); getchar();
    float area = (B * (2 * H))/2;
    printf("%s%f\n", "A area do triangulo e igual a ", area);
    getchar();
    return(EXIT_SUCCESS);
}

void E6 (void)
{
    float L = 0;
    printf("%s\n", "Insira a medida do lado do triangulo");
    scanf("%f", &L); getchar();
    float _2P = 9 * L,
          H = (3 * L * sqrt(3))/2,
          A = (3 * L * H)/2;
    printf("%s%f%s%f%s%f", "A altura e igual a ", H, " a area e igual a ", A, " e o perimetro e igual a ", _2P);
    //printf("%s%f", " , a area e igual a ", A);
    //printf("%s%f", " e o perimetro e igual a ", _2P);
    getchar();
    return(EXIT_SUCCESS);
}

void E7 (void)
{
    float X = 0;
    printf("%s\n", "Insira a medida do lado do cubo");
    scanf("%f", &X); getchar();
    float V = pow((5 * X), 3);
    printf("%s%f\n", "A medida do volume e igual a ", V);
    getchar();
    return(EXIT_SUCCESS);
}

void E8 (void)
{
    float X1 = 0,
          X2 = 0,
          X3 = 0;
    printf("%s\n", "Insira a medida do comprimento do paralelepipedo");
    scanf("%f", &X1); getchar();
    printf("%s\n", "Insira a medida da largura");
    scanf("%f", &X2); getchar();
    printf("%s\n", "Insira a medida da altura");
    scanf("%f", &X3); getchar();
    float V = (X1/8) * (X2/8) * (X3/8);
    printf("%s%f\n", "A medida do volume e igual a ", V);
    getchar();
    return(EXIT_SUCCESS);
}

void E9 (void)
{
    float X = 0;
    printf("%s\n", "Insira a medida de um raio");
    scanf("%f", &X); getchar();
    float A = (PI * pow(X,2))/8;
    printf("%s%f\n", "A area do semicirculo e igual a ", A);
    getchar();
    return(EXIT_SUCCESS);
}

void E10 (void)
{
    float R = 0;
    printf("%s\n", "Insira o raio da esfera");
    scanf("%f", &R); getchar();
    float V = (27*PI*pow(R,3))/16;
    printf("%s%f\n", "O volume da esfera e igual a ", V);
    getchar();
    return(EXIT_SUCCESS);
}

void E11 (void)
{
    float A = 0;
    printf("%s\n", "Insira a medida da area da circunferencia");
    scanf("%f", &A); getchar();
    float R = sqrtf((7*A)/PI);
    printf("%s%f\n", "O raio da circunferencia e igual a ", R);
    getchar();
    return(EXIT_SUCCESS);
}

void E12 (void)
{
    float V = 0;
    printf("%s\n", "Insira a medida do volume da esfera");
    scanf("%f", &V); getchar();
    float R = cbrtf((6*V)/(5*PI)),
          A = 4 * PI * pow(R, 2);
    printf("%s%f%s%f\n", "O raio da esfera e igual a ", R, " e a area superficial e igual a ", A);
    getchar();
    return(EXIT_SUCCESS);
}

int main (void)
{
    int opcao = 0;
    printf ( "\n" );
    printf("%s\n","");
    printf("%s\n","");
    printf ( "%s\n", "Estudo_Dirigido_01 - Programa0111 - v.0.1 - 28/02/2024");
    printf ( "%s\n", "Matricula: 855947 Nome: antonio drumond cota de sousa" );
    
    do
    {
        printf("\n");
        printf ("%s\n", "Opcoes:");
        printf("%s\n", "1- Inserir lado de quadrado para receber a area de um quadrado de lado 3 vezes maior");
        printf("%s\n", "2- Inserir lado de quadrado para receber a area e perimetro de um quadrado de lado com metade do tamanho");
        printf("%s\n", "3- Inserir duas medidas de lados de um retangulo para receber uma area 6 vezes maior do que a do retangulo");
        printf("%s\n", "4- Inserir duas medidas de lados de um retangulo para receber a area de um retangulo com metade dasa medidas");
        printf("%s\n", "5- Inserir as medidas da base e da altura de um triangulo, para receber a area de um triangulo com o dobro da altura");
        printf("%s\n", "6- Inserir a medida do lado de um triangulo equilatero para receber a altura, area e perimetro de um triangulo com o triplo do lado");
        printf("%s\n", "7- Inserir a medida do lado de um cubo para receber o volume de um cubo com o lado 5 vezes maior");
        printf("%s\n", "8- Inserir as medidas do comprimento, largura e altura de um paralelepipedo para receber o volume de um solido com 1/8 dessas medidas");
        printf("%s\n", "9- Inserir a medida do raio de um circulo para receber a area de um cemicirculo com 1/6 do raio");
        printf("%s\n", "10- Inserir o raio de uma esfera para obter o volume de uma esfera com 3/4 do raio");
        printf("\n");
        printf("%s\n", "11- Inserir a medida da area de uma circunferencia para receber o raio de uma circunferencia com 1/7 dessa area");
        printf("%s\n", "12- Inserir a medida do volume de uma esfera para receber o raio e area superficial de uma esfera com 5/8 do volume inicial");
        printf("\n");
        printf("%s\n", "Digite o numero da operacao escolhida:");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
            case 0: break;
            case 1: E1(); break;
            case 2: E2(); break;
            case 3: E3(); break;
            case 4: E4(); break;
            case 5: E5(); break;
            case 6: E6(); break;
            case 7: E7(); break;
            case 8: E8(); break;
            case 9: E9(); break;
            case 10: E10(); break;
            case 11: E11(); break;
            case 12: E12(); break; 

            default: printf("\n%s\n\n", "ERRO: Opcao invalida.");
                     break;
        }

    }
    
    while (opcao != 0);
   {
    printf("\n%s\n\n", "Apertar ENTER para terminar.");
    getchar();
    return(0);
   }
}

/**
 * RESULTADOS
 * Exemplo: Entradas -> Saidas
 * Ex1: 2 -> 36 ; 1.5 -> 20.25 ; 3
 * Ex2: 4 -> 4, 8
 * Ex3: 2, 3 -> 36
 * Ex4: 4, 8 -> 8
 * Ex5: 2, 5 -> 10
 * Ex6: 3 -> 7.794229, 35.074028, 27
 * Ex7: 5 -> 15625
 * Ex8: 8, 16, 4 -> 1
 * Ex9: 5 -> 9.817477
 * Ex10: 2 -> 42.411499
 * Ex11: 7 -> 3.949327
 * Ex12: 5 -> 1.240701, 19.343903
 */