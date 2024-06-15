#include "LibAD.hpp"

void E1511()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	char ch = ' ';
	std::cout << "Insira um caractere para ser colocado no final da palavra: ";
	std::cin >> ch; getchar();
	string1->pushBack(ch);
	string1->print();
	delete string1;
	getchar();
}

void E1512()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	string1->popBack();
	string1->print();
	delete string1;
	getchar();
}

void E1513()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	char ch = ' ';
	std::cout << "Insira um caractere para ser colocado no inicio da palavra: ";
	std::cin >> ch; getchar();
	string1->pushFront(ch);
	string1->print();
	delete string1;
	getchar();
}

void E1514()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	string1->popFront();
	string1->print();
	delete string1;
	getchar();
}

void E1515()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	char ch = ' ';
	std::cout << "Insira um caractere para ser colocado no meio da palavra: ";
	std::cin >> ch; getchar();
	string1->pushMid(ch);
	string1->print();
	delete string1;
	getchar();
}

void E1516()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	string1->popMid();
	string1->print();
	delete string1;
	getchar();
}

void E1517()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	char ch = ' ';
	std::cout << "Insira um caractere para ser colocado na palavra: ";
	std::cin >> ch; getchar();
	int index = 0;
	std::cout << "Insira a posicao na palavra para inserir o caractere: ";
	std::cin >> index; getchar();
	string1->insert(ch, index);
	string1->print();
	delete string1;
	getchar();
}

void E1518()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	int index = 0;
	std::cout << "Insira a posicao na palavra para remover um caractere: ";
	std::cin >> index; getchar();
	string1->remove(index);
	string1->print();
	delete string1;
	getchar();
}

void E1519()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	char ch = ' ';
	std::cout << "Insira um caractere para ser procurado na palavra: ";
	std::cin >> ch; getchar();
	char* result= string1->searchptr(ch);
	if(result==nullptr) std::cout << "O caractere alvo nao foi encontrado. ";
	else std::cout << "Seguem os caracteres da palavra a partir do encontrado: " << result;
	delete string1;
	getchar();
}

void E1520()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	char ch = ' ';
	std::cout << "Insira um caractere para ser procurado na palavra: ";
	std::cin >> ch; getchar();
	char* result= string1->beforeptr(ch);
	if(result==nullptr) std::cout << "O caractere alvo nao foi encontrado. ";
	else std::cout << "Seguem os caracteres da palavra anteriores ao caractere alvo: " << result;
	delete string1;
	getchar();
}

void E15E1()
{
	char* input = new char[256];
	std::string target;
	int pos = 0;
	std::cout << "Insira uma frase: ";
	fgets(input, 256, stdin);
	Astring* string1 = new Astring(strlen(input));
	string1->string = input;
	std::cout << "\nInsira um prefixo para ser procurada na frase: ";
	std::cin >> target; getchar();
	char* result  = string1->searchPrefix(target.data());
	if(result == nullptr)
		std::cout << "O alvo nao pode ser encontrado. ";
	else std::cout << "Segue a frase apos o prefixo:\n" << result << "\n";
	getchar();
	delete string1;
}

void E15E2()
{
	char* input = new char[256];
	std::string target;
	int pos = 0;
	std::cout << "Insira uma frase: ";
	fgets(input, 256, stdin);
	Astring* string1 = new Astring(strlen(input));
	string1->string = input;
	std::cout << "\nInsira um sufixo para ser procurada na frase: ";
	std::cin >> target; getchar();
	char* result  = string1->searchSuffix(target.data());
	if(result == nullptr)
		std::cout << "O alvo nao pode ser encontrado. ";
	else std::cout << "Segue a frase apos o sufixo:\n" << result << "\n";
	getchar();
	delete string1;
}
