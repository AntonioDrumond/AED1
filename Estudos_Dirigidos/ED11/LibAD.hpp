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

void flag()
{
    std::cout << "\n" << "FLAG" << "\n";
    getchar();
}

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

class ARRint
{
    public:
    int* arr;
    int leng;
    int smallerOddPos;
    int biggerEvenPos;

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

    int getBiggerEvenPos(){
        int bigger = 0;
        for (int i=0; i<leng; i++)
        {
            if(arr[i]%2==0 && arr[i]>arr[bigger]) bigger = i;
        }
        biggerEvenPos = bigger;
        return bigger;
    }

    int getSmallerOddPos(){
        int smaller = 0;
        for (int i=0; i<leng; i++)
        {
            if(arr[i]%2!=0 && arr[i]<arr[smaller]) smaller = i;
        }
        smallerOddPos = smaller;
        return smaller;
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
            int found = false;
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