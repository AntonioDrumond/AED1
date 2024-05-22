#include <stdbool.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const   char STR_EMPTY [] =  "" ;

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
 * @brief Function that allocates space for a string
 * @param size amount of characters
 * @return char* - reserved space, if exists, NULL if it doesn't
 */
char* allocChar (int size)
{
    return ( (char*) malloc(size * sizeof(char)) );
}

/**
    @brief Function that converts an integer number to a sequence of characters
    @param x integer value
    @return sequence with the result
 */
char* intToString (int x)
{
    char* buffer = allocChar(64+1);
    sprintf(buffer, "%d", x);
    return buffer;
}

/**
    @brief Function that converts a real number to a sequence of characters
    @param x real value
    @return sequence with the result
 */
char* doubleToString (double x)
{
    char* buffer = allocChar(64+1);
    sprintf(buffer, "%lf", x);
    return buffer;
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
    if(0<a && a<b)
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

/**
    @brief Function that concatenates two sequences of characters
    @param text1 First sequence
    @param text2 Second sequence
    @return char* - the combination of the two sequences
 */
char* concat (const char * const text1, const char * const text2)
{
    char* buffer = allocChar(strlen(text1)+strlen(text2)+1);
    strcpy(buffer, text1);
    strcat(buffer, text2);
    return buffer;
}

/**
 * @brief Function that returns the inverse of a number in the form of a string
 * 
 * @param x The number in question
 * @return char* - 1/x
 */
char* inverseInt (int x)
{
    char* var = (char*) malloc(10 * sizeof(char));
    if(x==1){snprintf(var, 10, "1");}
    else {snprintf(var, 10, "1/%d", x);}
    return var;
}

/**
 * @brief Function that reads a sequence of characters and stores it in a variable
 * @param par the variable in question
 * @return char* - the sequence of characters read
 */
char *readString(char *par)
{
    printf("Digite uma palavra: ");
    fgets ( par, 100-1, stdin);
    par[strlen(par)-1]='\0';
    return par;
}

/**
 * @brief Function that prints text to the termial, thenreads a sequence of characters and stores it in a variable
 * @param par the variable in question
 * @param text the text that is going to be printed in the terminal
 * @return char* - the sequence of characters read
 */
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
int readIntT(int *var, char* text)
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

/**
 * @brief prints text to the terminal, reads a real value and stores in a variable. 
 * 
 * @param var is the target variable
 * @param text is the text to be print
 * @return double - The value read
 */
double readDoubleT(double *var, char *text)
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

/**
 * @brief Prints the contents of a matrix with integer values
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void printMatInt (int i, int j, int mat[][j])
{
    int i1 = 0, j1 = 0;
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            printf("%d ", mat[i1][j1]);
        }
        printf("\n");
    }
}

/**
 * @brief Prints the contents of a matrix with real values
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void printMatDouble (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            printf("%0.3lf ", mat[i1][j1]);
        }
        printf("\n");
    }
}

/**
 * @brief Prints the contents of the main diagonal of a matrix with real values
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void printMatDiagDouble (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    if(i==j)
    {
        for (i1=0; i1<i; i1++)
        {
            for (j1=0; j1<j; j1++)
            {
                if(i1!=j1) printf("------ ");
                else printf("%0.3lf ", mat[i1][j1]);
            }
            printf("\n");
        }
    }
    else printf("ERRO: Matriz com dimensoes invalidas.");
}

/**
 * @brief Prints the contents of the secondary diagonal of a matrix with real values
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void printMatDiagSDouble (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    int x = 0, y = j-1;
    if(i==j)
    {
        for (i1=0; i1<i; i1++)
        {
            for (j1=0; j1<j; j1++)
            {
                if(i1==x && j1==y) printf("%0.3lf ", mat[i1][j1]);
                else printf("------ ");
            }
            printf("\n");
            x++; y--;
        }
    }
    else printf("ERRO: Matriz com dimensoes invalidas.");
}

/**
 * @brief Prints the contents of the main diagonal and over it of a matrix with real values
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void printMatDiagUnDouble (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    if(i==j)
    {
        for (i1=0; i1<i; i1++)
        {
            for (j1=0; j1<j; j1++)
            {
                if(i1==j1 || i1>j1) printf("%0.3lf ", mat[i1][j1]);
                else printf("------ ");
            }
            printf("\n");
        }
    }
    else printf("ERRO: Matriz com dimensoes invalidas.");
}

/**
 * @brief Prints the contents of the main diagonal and under it of a matrix with real values
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void printMatDiagOvDouble (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    if(i==j)
    {
        for (i1=0; i1<i; i1++)
        {
            for (j1=0; j1<j; j1++)
            {
                if(i1==j1 || i1<j1) printf("%0.3lf ", mat[i1][j1]);
                else printf("------ ");
            }
            printf("\n");
        }
    }
    else printf("ERRO: Matriz com dimensoes invalidas.");
}

/**
 * @brief Prints the contents of the secondary diagonal and under it of a matrix with real values
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void printMatDiagSUnDouble (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    int x = 0, y = j-1;
    if(i==j)
    {
        for (i1=0; i1<i; i1++)
        {
            for (j1=0; j1<j; j1++)
            {
                if(i1<=x && j1>=y) printf("%0.3lf ", mat[i1][j1]);
                else printf("------ ");
            }
            printf("\n");
            x++; y--;
        }
    }
    else printf("ERRO: Matriz com dimensoes invalidas.");
}

/**
 * @brief Prints the contents of the secondary diagonal and under it of a matrix with real values
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void printMatDiagSOvDouble (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    int x = 0, y = j-1;
    if(i==j)
    {
        for (i1=0; i1<i; i1++)
        {
            for (j1=0; j1<j; j1++)
            {
                if(i1>=x && j1<=y) printf("%0.3lf ", mat[i1][j1]);
                else printf("------ ");
            }
            printf("\n");
            x++; y--;
        }
    }
    else printf("ERRO: Matriz com dimensoes invalidas.");
}

/**
 * @brief Prints the contents of a matrix with real values into a file
 * @param fil the file where the values should be print
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void fprintMatDouble (FILE* fil, int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            fprintf(fil, "%0.3lf ", mat[i1][j1]);
        }
        fprintf(fil, "\n");
    }
}

/**
 * @brief Prints the contents of a matrix with integer values into a file
 * @param fil the file where the values should be print
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void fprintMatInt (FILE* fil, int i, int j, int mat[][j])
{
    int i1 = 0, j1 = 0;
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            fprintf(fil, "%d ", mat[i1][j1]);
        }
        fprintf(fil, "\n");
    }
}

/**
 * @brief Reads integer values and stores them in a matrix
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void readMatInt (int i, int j, int mat[][j])
{
    int i1 = 0, j1 = 0;
    int buffer = 0;
    char* text = allocChar(80);
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            strcpy(text, "");
            readIntT(&buffer, concat(
                                    concat ( concat(text, intToString(i1)), "," ),
                                    concat ( concat(text, intToString(j1)), ":")));
            mat[i1][j1] = buffer;
        }
    }
}

/**
 * @brief Reads real values and stores them in a matrix
 * 
 * @param i the amount of rows in the matrix
 * @param j the amount of columns in the matrix
 * @param mat the matrix itself
 */
void readMatDouble (int i, int j, double mat[][j])
{
    int i1 = 0, j1 = 0;
    double buffer = 0.0;
    char* text = allocChar(80);
    for (i1=0; i1<i; i1++)
    {
        for (j1=0; j1<j; j1++)
        {
            strcpy(text, "");
            readDoubleT(&buffer, concat(
                                    concat ( concat(text, intToString(i1)), "," ),
                                    concat ( concat(text, intToString(j1)), ":")));
            mat[i1][j1] = buffer;
        }
    }
}

/**
 * @brief Reads real values from a file and saves them into a matrix
 * 
 * @param fil the file to be read
 * @param i the number of lines in the matrix
 * @param j the number of columns in the matrix
 * @param mat the matrix where the values will be saved
 */
void freadMatDouble (FILE* fil, int i, int j, double mat[][j])
{
   int i1 = 0, j1 = 0;
    double buffer = 0.0;
    for (i1=0; (i1<i && !feof(fil)); i1++)
    {
        for (j1=0; (j1<j && !feof(fil)); j1++)
        {
            fscanf(fil, " %lf", &buffer);
            mat[i1][j1] = buffer;
        }
    }
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

/**
 * @brief Counts how many alphanumeric characters there are inside of a string
 * 
 * @param text the string in question
 * @return int - the amount of alphanumeric characters
 */
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

/**
 * @brief Counts how many alphanumeric characters there are inside of each word in a string and prints them to the terminal
 * 
 * @param text the string in question
 * @return int - the amount of alphanumeric characters in total
 */
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
 * @brief returns the factorial of an integer number
 * 
 * @param n the number in question. If a negative number, will be turned positive
 * @return int - n!
 */
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

/**
 * @brief returns the nth number in fibonaccis sequence
 * 
 * @param n the index of the number
 * @return int - the nth number in fibonaccis sequence
 */
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