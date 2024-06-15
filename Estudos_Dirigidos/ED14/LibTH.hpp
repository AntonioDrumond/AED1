#include "LibAD.hpp"

void E1411()
{
	std::string input;
	std::cout << "Insira um numero inteiro: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	std::cout << "Voce inseriu o numero " << string1->getInt();
	getchar();
	delete string1;
}

void E1412()
{
	std::string input;
	std::cout << "Insira um numero real: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	std::cout << "Voce inseriu o numero " << string1->getDouble();
	getchar();
	delete string1;
}

void E1413()
{
	std::string input;
	std::cout << "Insira um booleano: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	std::cout << "Voce inseriu o numero " << string1->getBool();
	getchar();
	delete string1;
}

void E1414()
{
	char* input = new char[256];
	std::string target;
	int pos = 0;
	std::cout << "Insira uma frase ou palavra: ";
	fgets(input, 256, stdin);
	Astring* string1 = new Astring(strlen(input));
	string1->string = input;
	std::cout << "\nInsira uma palavra para ser procurada na primeira frase/palavra: ";
	std::cin >> target; getchar();
	pos = string1->search(target);
	if(pos == -1)
		std::cout << "O alvo nao pode ser encontrado. ";
	else std::cout << "Voce foi encontrado na posicao:  " << pos << "\n";
	getchar();
	delete string1;
}

void E1415()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	std::cout << "Resultado: " << string1->makeUpper();
	getchar();
	delete string1;
}

void E1416()
{
	std::string input;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	std::cout << "Resultado: " << string1->makeLower();
	getchar();
	delete string1;
}

void E1417()
{
	std::string input;
	char original = ' ', subs = ' ';
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	std::cout << "Insira, nessa ordem, um caractere para ser substituido e o seu substituto: ";
	std::cin >> original >> subs; getchar();
	std::cout << "Resultado: " << string1->replace(original, subs);
	getchar();
	delete string1;
}

void E1418()
{
	std::string input;
	int k = 0;
	std::cout << "Insira uma palavra: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	std::cout << "Insira um numero para agir como chave de encriptacao: ";
	std::cin >> k; getchar();
	std::cout << "Resultado: " << string1->encrypt(k);
	getchar();
	delete string1;
}

void E1419()
{
	std::string input;
	int k = 0;
	std::cout << "Insira uma palavra encriptada: ";
	std::cin >> input; getchar();
	Astring* string1 = new Astring(input.size());
	strcpy(string1->string, input.data());
	std::cout << "Insira a chave de encriptacao: ";
	std::cin >> k; getchar();
	std::cout << "Resultado: " << string1->decrypt(k);
	getchar();
	delete string1;
}

void E1420()
{
	char* input = new char[256];
	std::cout << "Insira uma frase ou palavra: ";
	fgets(input, 256, stdin);
	Astring* string1 = new Astring(strlen(input));
	string1->string = input;
	int count = string1->split();
	std::cout << "Foram inseridas " << count << " palavras:";
	string1->printSplits();
	getchar();
	delete string1;
}

void E14E1()
{
	char sep = ' ';
	char* input = new char[256];
	std::cout << "Insira uma frase ou palavra: ";
	fgets(input, 256, stdin);
	Astring* string1 = new Astring(strlen(input));
	string1->string = input;
	std::cout << "Insira um caractere para agir como o separador: ";
	std::cin >> sep; getchar();
	int count = string1->split(sep);
	std::cout << "Foram inseridas " << count << " palavras:";
	string1->printSplits();
	getchar();
	delete string1;
}

void E14E2()
{
	char* input = new char[256];
	std::cout << "Insira uma frase ou palavra: ";
	fgets(input, 256, stdin);
	Astring* string1 = new Astring(strlen(input));
	string1->string = input;
	std::cout << "Segue a frase invertida:\n";
	string1->reversePrint();
	getchar();
	delete string1;
}
