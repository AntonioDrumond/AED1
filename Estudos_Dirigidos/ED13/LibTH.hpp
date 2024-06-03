#include "LibAD.hpp"

class contato
{
    public:
    char* name;
    char** phones;
    char* enderecoComercial;
    char* enderecoResidencial;

    contato(){
        name = new char[64];
        enderecoComercial = new char[64];
        enderecoResidencial = new char[64];
        phones = new char*[10];
        for(int i=0; i<10;i++){
            *(phones+i) = nullptr;
        }
    }
    
    ~contato(){
        if(name!=nullptr) delete[] name;
        if(enderecoComercial!=nullptr) delete[] enderecoComercial;
        if(enderecoResidencial!=nullptr) delete[] enderecoResidencial;
        for(int i=0; i<10; i++){
            if(phones[i]!=nullptr) delete[] phones[i];
        }
        if(phones!=nullptr) delete[] phones;
    }

    void readName(char* newName){
        strcpy(name, newName);
    }

    bool readPhone(char* newPhone, int n){
        if(strlen(newPhone)==10||strlen(newPhone)==9){
            if(isPhoneValid(newPhone)){
                *(phones+n-1) = new char[10]; 
                strcpy(*(phones+n-1), newPhone); 
                return true;}
            else return false;
        }
        else return false;
    }

    void removePhone(int n){
        *(phones+n-1) = nullptr;
    }

    void freadInfo(std::ifstream& fil){
        char buffer[10];
        char aux = ' ';
        int pos = 0;
        int pho = 1;
        while( (aux = fil.get())!='\n' && (int)aux!=EOF && pos<63) name[pos++] = aux;
        pos = 0; 
        while( (aux = fil.get())!='\n' && (int)aux!=EOF && pos<10) buffer[pos++] = aux;
        /*do
        {
            aux=fil.get();
            if(aux!='\n' && (int aux!=EOF && pos<10){
                buffer[pos++] = aux;
            }
            else if(aux=='\n') {
                pos = 0;
                this->readPhone(buffer, pho);
                pho++;
            }
        } while ((int)aux!=EOF);*/

        this->readPhone(buffer, 1);
    }

    void fprintInfo(std::ofstream& fil){
        fil << name << "\n";
        for(int i=0; i<10 && *(phones+i)!=nullptr; i++){
            fil << *(phones+i) << "\n";
        }
    }

    int numberOfPhones(){
        int count = 0;
        for(int i=0; i<10; i++){
            if(*(phones+i)!=nullptr) count++;
        }
        return count;
    }

    void readCom(char* newAdress){
       strcpy(enderecoComercial, newAdress);
    }

    void readRed(char* newAdress){
        strcpy(enderecoResidencial, newAdress);
    }

    private:

    bool isPhoneValid(char* phon){
        for(int i=0; i<strlen(phon); i++){
            if(i==4 ? phon[i]!='-' : !isNumberr(phon[i])) return false;
        }
        return true;
    } 
};

void E1311()
{
    contato* contato1 = new contato;
    char newName[63];
    std::cout << "Insira um nome: ";
    std::cin.getline(newName, 63);
    contato1->readName(newName);
    std::cout << "O nome inserido foi: " << contato1->name << "\n";
    getchar();
    delete contato1;
}

void E1312()
{
    contato* contato1 = new contato;
    char newPhone[10];
    std::cout << "Insira um numero de telefone no formato XXXX-XXXX: ";
    std::cin >> newPhone; getchar();
    if(contato1->readPhone(newPhone, 1)) std::cout << "O numero inserido foi: " << contato1->phones[0] << std::endl;
    else std::cout << "Numero inserido invalido.\n";
    getchar();
    delete contato1;
}

void E1313()
{
    contato* contato1 = new contato;
    char newPhone[10];
    std::cout << "Insira um numero de telefone no formato XXXX-XXXX: ";
    std::cin >> newPhone; getchar();
    if(contato1->readPhone(newPhone, 1)) std::cout << "O numero inserido foi: " << contato1->phones[0] << std::endl;
    else std::cout << "Numero inserido invalido.\n";
    getchar();
    delete contato1;
}

void E1314()
{
    contato* contato1 = new contato;
    std::cout << "Insira nome e numero de telefone no arquivo dados.txt, em linhas separadas e pressione ENTER para comecar";
    getchar();
    std::ifstream fil ("dados.txt");
    contato1->freadInfo(fil);
    std::cout << "Os dados lidos foram:" << "\nNome: " << contato1->name << "\nFone: " << contato1->phones[0];
    getchar();
    fil.close();
    delete contato1;
}

void E1315()
{
    contato* contato1 = new contato;
    std::cout << "Insira nome e numero de telefone no arquivo dados.txt, em linhas separadas e pressione ENTER para comecar";
    getchar();
    std::ifstream src ("dados.txt");
    std::ofstream fil ("Pessoa1.txt");
    contato1->freadInfo(src);
    contato1->fprintInfo(fil);
    std::cout << "Informacoes de teste foram gravadas no arquivo Pessoa1.txt. Pressione ENTER para terminar.";
    getchar();
    fil.close();
    src.close();
    delete contato1;
}

void E1316()
{
    contato* contato1 = new contato;
    char newPhone[10];
    std::cout << "Insira um numero de telefone no formato XXXX-XXXX: ";
    std::cin >> newPhone; getchar();
    contato1->readPhone(newPhone, 1);
    std::cout << "Insira outro numero de telefone no formato XXXX-XXXX: ";
    std::cin >> newPhone; getchar();
    contato1->readPhone(newPhone, 2);
    std::cout << "Os numeros inseridos foram:\n" << contato1->phones[0] << "\n" << contato1->phones[1];
    getchar();
    delete contato1;
}

void E1317()
{
    contato* contato1 = new contato;
    char buffer[10];
    bool read;
    int i = 1;
    do{
        std::cout << "Insira um numero de telefone: ";
        std::cin >> buffer; getchar();
        read = contato1->readPhone(buffer, i);
        i++;
    } while(read==true && i<11);
    int numero = contato1->numberOfPhones();
    std::cout << "Foram inseridos " << numero << " telefones validos, sao eles:\n";
    for(int j=0; j<numero; j++){
        std::cout << contato1->phones[j] << "\n";
    }
    getchar();
    delete contato1;
}

void E1318()
{
    contato* contato1 = new contato;
    char buffer[10];
    std::cout << "Insira um valor para o segundo telefone: ";
    std::cin >> buffer; getchar();
    bool read = contato1->readPhone(buffer, 2);
    if(read) std::cout << "O segundo telefone do contato e: " << contato1->phones[1];
    else std::cout << "Numero inserido invalido. ";
    getchar();
    delete contato1;
}

void E1319()
{
    contato* contato1 = new contato;
    char ans;
    char buffer[10];
    char cont[10];
    strcpy(cont, "1234-5678");
    contato1->readPhone(cont, 1);
    strcpy(cont, "8765-4321");
    contato1->readPhone(cont, 2);
    std::cout << "O contato tem dois numeros associados: " << contato1->phones[0] << " e " << contato1->phones[1];
    std::cout << "\nDeseja alterar o segundo? (y/n)  ";
    std::cin >> ans; getchar();
    if(ans=='y' || ans=='Y') {
        std::cout << "Insira um valor para o segundo telefone: ";
        std::cin >> buffer; getchar();
        bool read = contato1->readPhone(buffer, 2);
        if(read) std::cout << "O novo segundo telefone do contato e: " << contato1->phones[1];
        else std::cout << "Numero inserido invalido. ";
    }
    else std::cout << "Pressione ENTER para sair ";
    getchar();
    delete contato1;

}

void E1320()
{
    contato* contato1 = new contato;
    char ans;
    char buffer[10];
    char cont[10];
    strcpy(cont, "1234-5678");
    contato1->readPhone(cont, 1);
    strcpy(cont, "8765-4321");
    contato1->readPhone(cont, 2);
    std::cout << "O contato tem dois numeros associados: " << contato1->phones[0] << " e " << contato1->phones[1];
    std::cout << "\nDeseja remover o segundo? (y/n)  ";
    std::cin >> ans; getchar();
    if(ans=='y' || ans=='Y') {
        contato1->removePhone(2);
        std::cout << "O contato tem apenas um numero associado: " << contato1->phones[0];
    }
    else std::cout << "Pressione ENTER para sair ";
    getchar();
    delete contato1;
}

void E13E1()
{
    contato* contato1 = new contato;
    char buffer[10];
    bool read;
    int i = 1;
    do{
        std::cout << "Insira um numero de telefone: ";
        std::cin >> buffer; getchar();
        read = contato1->readPhone(buffer, i);
        i++;
    } while(read==true && i<11);
    int numero = contato1->numberOfPhones();
    std::cout << "Foram inseridos " << numero << " telefones validos, sao eles:\n";
    for(int j=0; j<numero; j++){
        std::cout << contato1->phones[j] << "\n";
    }
    getchar();
    delete contato1;
}

void E13E2()
{
    contato* contato1 = new contato;
    char newAdress[63];
    std::cout << "Insira um endereco residencial: ";
    std::cin.getline(newAdress, 63);
    contato1->readRed(newAdress);
    std::cout << "Insira um endereco comercial: ";
    std::cin.getline(newAdress, 63);
    contato1->readCom(newAdress);
    std::cout << "Os enderecos inseridos foram:\n" << contato1->enderecoResidencial << "\n" << contato1->enderecoComercial << "\n";
    getchar();
    delete contato1;
}
