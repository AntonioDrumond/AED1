#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

/**
 * @brief returns a random positive number between a and b. If put on a loop, 
 * is recommended to multiply the third parameter for each iteration
 * @param a is the lower limit
 * @param b is the higher limit
 * @param seed is the seed of the random generation. Preferably use time(NULL)
 * @return the random numer, or -1 if the parameters are invalid
 */
int randInt(int a, int b, int seed)
{
    if(0<a<b)
    {
        srand(seed);
        int x = rand()%(b-a+1)+a;
        return x;
    }
    else return -1;
}

void clear()
{
    int  x = 0;
    do { x = getchar( ); } while ( x != EOF && x != '\n' );
    clearerr ( stdin ); 
}

char* inversoInt (int x)
{
    char* var = (char*) malloc(10 * sizeof(char));
    if(x==1){snprintf(var, 10, "1");}
    else {snprintf(var, 10, "1/%d", x);}
    return var;
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

/**
 * @brief prints text to the terminal, reads an integer value and stores in a variable. 
 * 
 * @param var is the target variable
 * @param text is the text to be print
 * @return int
 */
int readIntT(int *var, char *text)
{
    int resultado;
    printf("%s", text);
    resultado = scanf(" %d", var); getchar();
    while (resultado != 1)
    {
        getchar();
        printf("%s", "Entrada invalida, por favor digite um numero inteiro: ");
        resultado = scanf("%d", var); getchar();
    }
    return *var;
}

int readDoubleT(double *var, char *text)
{
    double resultado;
    printf("%s", text);
    resultado = scanf("%lf", var); getchar();
    while (resultado != 1)
    {
        getchar();
        printf("%s", "Entrada invalida, por favor digite um numero real: ");
        resultado = scanf("%lf", var); getchar();
    }
    return *var;
}

/**
 * @brief Prints out the first n elements in an array
 * @param arr The array to be printed
 * @param n The amount of elements to be printed
 */
void printfArrInt (int arr[], int n)
{
    int i = 0;
    for(i=0; i<n; i++) printf("%d\n", arr[i]);
}

bool isUpperr(char x)
{return((x>='A')&&(x<='Z'));}

bool isLowerr(char x)
{return((x>='a')&&(x<='z'));}

bool isLetterr(char x)
{return(((x>='a')&&(x<='z'))||((x>='A')&&(x<='Z')));}

bool isNumberr(char x)
{return((x>='0')&&(x<='9'));}

/**
 * @brief Checks if an array's elements are ordered progressively.
 * 
 * @param arr the array to be checked
 * @param arrSize the size of the array
 * @return true if sorted
 * @return false if not sorted
 */
bool isArrIntSorted (int arr[], int arrSize)
{
    int count = 0;
    for (int i=0; i<arrSize-1; i++)
    {
        if(arr[i]>arr[i+1]) count++;
    };
    return count<1;
}

/**
 * @brief Checks if an array's elements are ordered in reverse progression.
 * 
 * @param arr the array to be checked
 * @param arrSize the size of the array
 * @return true if sorted
 * @return false if not sorted
 */
bool isArrIntSortedReverse (int arr[], int arrSize)
{
    int count = 0;
    for (int i=0; i<arrSize-1; i++)
    {
        if(arr[i]<arr[i+1]) count++;
    }
    return count<1;
}

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

int factorial(int n)
{
    int i = 2, total = 1;
    if (n<0) {n*=-1;}
    if (n!=0&&n!=1)
    {
        n++;
        for (i=2; i<n; i++) {total *= i;}
    }
    return total;
}

int fiboN (int n)
{
    int x = 0, y = 1, z = 0, i = 0;
    if(n==1){return 1;}
    else
    {
        for (i=0; i<n-1; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return z;
    }
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

/**
 * @brief reads a file, one integer per line, and saves the numbers in an array, returning the amount of
 * numbers saved in the array.
 * 
 * @param arq the file to be read
 * @param arr the array where the numbers go into
 * @param arrSize the size of the array
 * @return int returns the amount of numbers written
 */
int intFileToArr (FILE * arq, int arr[], int arrSize)
{
    int x = 0, i = 0;
    while (fscanf(arq, " %d", &x)==1&&i<arrSize)
    {
        arr[i]=x;
        i++;
    }
    return i;
}

/**
 * @brief Returns the average value of numbers in an array
 * @param arr the array to be read
 * @param n the size of the array
 * @return double the average value
 */
double avgArrInt(int arr[], int n)
{
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    return (double)sum/(double)n;
}

/**
 * @brief Checks if a target element can be found inside an array and returns where
 * @attention Be careful not to exceed the array's size
 * @param arr the array to be searched
 * @param target the element to be searched
 * @param startPos the first position to be checked
 * @param n how many positions should be checked
 * @return int -1 if the target was not found or the index of the target if it was found
 */
int searchArrayInt (int arr[], int target, int startPos, int n)
{
    int count = -1;
    if(startPos>=0&&n>0)
    {
        int found = 0;
        int* pos = &arr[0];
        while(count<n&&found<1)
        {
            if(*(pos+startPos)==target) found++;
            count++;
        }
        if(found==0) count = -1;
    }
    return count;
}

/**
 * @brief Counts how many times a target element can be found inside a parameter
 * @attention Be careful not to exceed the array's size
 * @param arr the array to be searched
 * @param target the element to be searched
 * @param startPos the first position to be checked
 * @param n how many positions should be checked
 * @return int the number of times the element was found
 */
int freqArrayInt (int arr[], int target, int startPos, int n)
{
    int* pos = &arr[0];
    int count = 0, i = 0;
    if(startPos>=0&&n>0)
    {
        while(i<n)
        {
            if(*(pos+startPos+i)==target) count++;
            i++;
        }
    }
    return count;
}

/**
 * @brief Returns the amount of dividers a number has
 * @param number The number in question
 * @return int The amount of dividers
 */
int amountDividers(int number)
{
    int amount = 0, x = 1;
    while (x<=number)
    {
        if(number%x==0) amount++;
        x++;
    }
    return amount;
}

/**
 * @brief Returns the amount of dividers a number has and saves each one of them in an array
 * @attention Be careful not to exceed the size of the array
 * @param number The number in question
 * @param arr The array where the dividers should be saved
 * @return int The amount of dividers
 */
int dividersInArray(int number, int arr[])
{
    int amount = 0, x = 1;
    while (x<=number)
    {
        if(number%x==0) 
        {
            arr[amount] = x;
            amount++;
        }
        x++;
    }
    return amount;
}

// https://www.instagram.com/renatomestremat/