#include <iostream>
#include <string>
#include <fstream>

#include <ctime>
#include <cstdio>
#include <cstdbool>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>

/**
 * @brief Method that helps testing code, prints a message in the terminal that can be used to see up to when code ran.
 * 
 */
void flag()
{
    std::cout << "\n" << "FLAG" << "\n"; //Uses \n and not std::endl as not to affect the code around the flag
    getchar();
}

/**
 * @brief Prints out a line made of = symbols
 * 
 * @param length The length of the line
 */
void EQUALINE(int length) 
{
    for (int i = 0; i < length; i++) 
    {
        std::cout << "=";
    }
    std::cout << std::endl;
}

/**
 * @brief Prints a header menu in the terminal
 * 
 * @param a First bit of text to be print
 * @param b Seoond bit of text to be print
 * @return int - Wether the function suceeded in its task
 */
int Header(const char* a, const char* b) 
{
    int comprimentoTotal = strlen(a) + strlen(b) + 3;
    std::cout << "Matricula: 855947 Nome: ANTONIO_DRUMOND_COTA_DE_SOUSA\n\n";
    EQUALINE(comprimentoTotal);
    std::cout << a << " - " << b << std::endl;
    EQUALINE(comprimentoTotal);
    std::cout << std::endl;
    return EXIT_SUCCESS;
}

/**
 * @brief Function that returns a random number between two intervals
 * 
 * @param a The lower limit
 * @param b The upper limit
 * @param seed The seed of the random generation. Preferably use TIME(NULL), and multiply it by an integer after
 * every iteration when put in a loop.
 * @return int - The random number generated.
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

bool isUpperr(char x)
{return((x>='A')&&(x<='Z'));}

bool isLowerr(char x)
{return((x>='a')&&(x<='z'));}

bool isLetterr(char x)
{return(((x>='a')&&(x<='z'))||((x>='A')&&(x<='Z')));}

bool isNumberr(char x)
{return((x>='0')&&(x<='9'));}

/**
 * @brief Class used to work with arrays of integer numbers
 * 
 */
class ARRint
{
    public:
    int* arr;
    int leng;

    ARRint (int len){    //Constructor
        if(len>0){
            this->leng = len;
            arr = new int[leng];
        }
        else std::cerr << "ERRO: Dimensao invalida" << std::endl;
        
    }
    ~ARRint(){           //Destructor
        delete[] arr;
    }

    void print(){
        for(int i=0; i<leng; i++)
        {
            std::cout << *(arr+i) << " ";
        }
    }

    void fprint(std::ofstream& fil){
        for(int i=0; i<leng; i++)
        {
            fil << arr[i] << " ";
        }
    }

    bool fread(std::ifstream& fil){
        if(!fil.is_open()) {std::cout << "ERRO: Arquivo nao pode ser aberto. "; return false;}
        else if(leng<=0) {std::cout << "ERRO: Dimensoes do arranjo invalidas. "; return false;}
        else
        {
            for(int i=0; i<leng; i++){
                if(!(fil >> arr[i])){
                    std::cerr << "ERRO: Falha ao ler dados na posicao " << i;
                    return false;
                }
            }
            return true;
        }
    }

    int sumElements(int posA, int posB){
        int sum = 0;
        if(posA>leng || posB> leng) return 0;
        if(posA<=posB)
        {
            int exec = posB-posA+1;
            for(int i=0; i<exec; i++)
            {
                sum += *(arr+posA+i);
            }
        }
        else
        {
            int exec = posA-posB+1;
            for(int i=0; i<exec; i++)
            {
                sum += *(arr+posB+i);
            }
        }
        return sum;
    }

    double averageElements(int posA, int posB){
        return (sumElements(posA, posB) / abs(posB-posA+1));
    }

    bool areAllNegatives(){
        int i = 0;
        bool test = true;
        while (test==true && i<leng)
        {
            test = *(arr+i)<0 ? true : false;
            i++;
        }
        return test;
    }

    int search(int target, int posA, int posB){
        if(posA>leng || posB> leng) return -1;
        int i = 0;
        int found = false;
        if(posA<=posB)
        {
            int exec = posB-posA+1;
            while(i<exec && found == false){
                found = *(arr+posA+i) == target ? true : false;
                i++;
            }
            return found ? i+posA-1 : -1;
        }
        else
        {
            int exec = posA-posB+1;
            while(i<exec && found == false){
                found = *(arr+posB+i) == target ? true : false;
                i++;
            }
            return found ? i+posB-1 : -1;
        }
    }

    bool isSorted(){
        int i = 0;
        bool test = true;
        while(test==true && i<leng)
        {
            test = *(arr+i) <= *(arr+i+1) ? true : false;
            i++;
        }
        return test;
    }
    
    bool isSortedReverse(){
        int i = 0;
        bool test = true;
        while(test==true && i<leng)
        {
            test = *(arr+i) >= *(arr+i+1) ? true : false;
            i++;
        }
        return test;
    }

    void sort(){
        int buffer = 0, len = leng-1, smallPos;
        for (int i=0; i<len; i++)
        {
            smallPos = i;
            for (int j=i+1; j<leng; j++)
            {
                if(*(arr+smallPos) > arr[j]){
                    smallPos = j;
                }
            }
            buffer = *(arr+i);
            *(arr+i) = *(arr+smallPos);
            *(arr+smallPos) = buffer;
        }
    }

    void sortReverse(){
        int buffer = 0, len = leng-1, bigPos;
        for (int i=0; i<len; i++)
        {
            bigPos = i;
            for (int j=i+1; j<leng; j++)
            {
                if(arr[bigPos] < arr[j]){
                    bigPos = j;
                }
            }
            buffer = arr[i];
            arr[i] = arr[bigPos];
            arr[bigPos] = buffer;
        }
    }

    void scale(int c, int posA, int posB){
        if(!(posA>leng || posB> leng)){
            if(posA<=posB)
            {
                int exec = posB-posA+1;
                for(int i=0; i<exec; i++){
                    *(arr+posA+i) *= c;
                }
            }
            else
            {
                int exec = posA-posB+1;
                for(int i=0; i<exec; i++){
                    *(arr+posB+i) *= c;
                }
            }
        }
    }
};

class MATint
{
    public:
    int** mat;
    int lins;
    int cols;

    MATint(int lin, int col){   //Constructor
        if(lin>0 && col>0){
            this->lins = lin;
            this->cols = col;
            mat = new int*[lin];
            for(int i=0; i<lin; i++)
            {
                *(mat+i) = new int[col];
            }
        }
        else std::cerr << "ERRO: Dimensao invalida" << std::endl;
    }
    
    ~MATint(){                 //Destructor
        for(int i=0; i<lins; i++)
            {
                delete[] *(mat+i);
            }
        delete[] mat;
    }

    bool operator==(MATint& comp){
        if(this->lins!=comp.lins || this->cols!=comp.cols) return false;
        for (int i1=0; i1<lins; i1++)
            {
                for (int j1=0; j1<cols; j1++)
                {
                    if(this->mat[i1][j1] != comp.mat[i1][j1]) return false;
                }
            }
        return true;
    }

    void print(){
        for (int i1=0; i1<lins; i1++)
        {
            for (int j1=0; j1<cols; j1++)
            {
                std::cout << mat[i1][j1] << " ";
            }
            std::cout << std::endl;
        }
    }

    void fprint(std::ofstream& fil){
        for (int i1=0; i1<lins; i1++)
        {
            for (int j1=0; j1<cols; j1++)
            {
                fil << mat[i1][j1] << " ";
            }
            fil << std::endl;
        }
    }

    void fread(std::ifstream& fil){
        int buffer = 0;
        for (int i1=0; i1<lins; i1++)
        {
            for (int j1=0; j1<cols && !fil.eof(); j1++)
            {
                fil >> buffer;
                mat[i1][j1] = buffer;
            }
        }
    }

    int searchRows(int target){
        int i1 = -1;
        bool found = false;
        while(i1<lins && !found){
            i1++;
            for(int j1=0; j1<cols; j1++){
                if(mat[i1][j1] == target) found = true;
            }
        }
        return found ? i1 : -1;
    }

    int searchCols(int target){
        int i1 = 0, j1 = 0;
        bool found = false;
        for (i1=0; i1<lins && !found; i1++)
        {
            for (j1=0; j1<cols && !found; j1++)
            {
                if(mat[i1][j1] == target) found = true;
            }
        }
        return found ? j1-1 : -1;
    }

    void fillRand(int a, int b){
        int x = 1;        
        for (int i1=0; i1<lins; i1++)
        {
            for (int j1=0; j1<cols; j1++)
            {
                mat[i1][j1] = randInt(a, b, x);
                x*=13;
            }
        }
    }

    void fillCrescent(){
        int x = 1;
        for (int i1=0; i1<lins; i1++)
        {
            for (int j1=0; j1<cols; j1++)
            {
                mat[i1][j1] = x;
                x++;
            }
        }
    }

    void fillDecrescent(){
        int x = lins*cols;
        for (int i1=0; i1<lins; i1++)
        {
            for (int j1=0; j1<cols; j1++)
            {
                mat[i1][j1] = x;
                x--;
            }
        }
    }

    void scale(int c){
        for (int i1=0; i1<lins; i1++)
        {
            for (int j1=0; j1<cols; j1++)
            {
                mat[i1][j1] *= c;
            }
        }
    }

    void add(MATint* other){
        for (int i1=0; i1<lins; i1++)
        {
            for (int j1=0; j1<cols; j1++)
            {
                mat[i1][j1] += other->mat[i1][j1];
            }
        }
    }

    MATint* transpose(){
        MATint* result = new MATint(cols, lins);
        for (int i1=0; i1<lins; i1++)
        {
            for (int j1=0; j1<cols; j1++)
            {
                result->mat[j1][i1] = mat[i1][j1];
            }
        }
        return result;
    }

    bool addLineByProductOfSecond(int l1, int l2, int c){
        if(l1<lins&&l2<lins)
        {
            for(int i=0; i<cols; i++)
            {
                mat[l1][i] += mat[l2][i] * c;
            }
            return true;
        }
        else return false;
    }

    bool subtractLineByProductOfSecond(int l1, int l2, int c){
        if(l1<lins&&l2<lins)
        {
            for(int i=0; i<cols; i++)
            {
                mat[l1][i] -= mat[l2][i] * c;
            }
            return true;
        }
        else return false;
    }

    bool isIdentity(){
        bool id = true;
        if(lins!=cols) id = false;
        else{
            for (int i1=0; i1<lins && id; i1++)
            {
                for (int j1=0; j1<cols && id; j1++)
                {
                    if(i1==j1 && mat[i1][j1] != 1) id = false;
                    else if(i1!=j1 && mat[i1][j1] != 0) id = false;
                }
            }
        }
        return id;
    }
};