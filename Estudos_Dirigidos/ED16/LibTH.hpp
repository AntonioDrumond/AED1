#include "LibAD.hpp"

void E1611()
{
	ARRint* arr1 = new ARRint(6);
	std::ifstream fil ("dados.txt");
	arr1->fread(fil);
	fil.close();
	std::cout << "Considere o arranjo: ";
	arr1->print();
	int x = 0;
	std::cout << "\nInsira um numero inteiro para ser inserido no final do arranjo: ";
	std::cin >> x; getchar();
	arr1->pushBack(x);
	std::cout << "Resultado: ";
	arr1->print();
	getchar();
	delete arr1;
}

void E1612()
{
	ARRint* arr1 = new ARRint(6);
	std::ifstream fil ("dados.txt");
	arr1->fread(fil);
	fil.close();
	std::cout << "Considere o arranjo: ";
	arr1->print();
	arr1->popBack();
	std::cout << "\nResultado: ";
	arr1->print();
	getchar();
	delete arr1;
}

void E1613()
{
	ARRint* arr1 = new ARRint(6);
	std::ifstream fil ("dados.txt");
	arr1->fread(fil);
	fil.close();
	std::cout << "Considere o arranjo: ";
	arr1->print();
	int x = 0;
	std::cout << "\nInsira um numero inteiro para ser inserido no inicio do arranjo: ";
	std::cin >> x; getchar();
	arr1->pushFront(x);
	std::cout << "Resultado: ";
	arr1->print();
	getchar();
	delete arr1;
}

void E1614(){
	ARRint* arr1 = new ARRint(6);
	std::ifstream fil ("dados.txt");
	arr1->fread(fil);
	fil.close();
	std::cout << "Considere o arranjo: ";
	arr1->print();
	arr1->popFront();
	std::cout << "\nResultado: ";
	arr1->print();
	getchar();
	delete arr1;
}

void E1615()
{
	ARRint* arr1 = new ARRint(6);
	std::ifstream fil ("dados.txt");
	arr1->fread(fil);
	fil.close();
	std::cout << "Considere o arranjo: ";
	arr1->print();
	int x = 0;
	std::cout << "\nInsira um numero inteiro para ser inserido no meio do arranjo: ";
	std::cin >> x; getchar();
	arr1->pushMid(x);
	std::cout << "Resultado: ";
	arr1->print();
	getchar();
	delete arr1;
}

void E1616(){
	ARRint* arr1 = new ARRint(6);
	std::ifstream fil ("dados.txt");
	arr1->fread(fil);
	fil.close();
	std::cout << "Considere o arranjo: ";
	arr1->print();
	arr1->popMid();
	std::cout << "\nResultado: ";
	arr1->print();
	getchar();
	delete arr1;
}

void E1617(){
	int s1 = 0,
		s2 = 0;
	std::cout << "Insira o tamanho dos dois arranjos: ";
	std::cin >> s1 >> s2; getchar();
	ARRint* arr1 = new ARRint(s1);
	ARRint* arr2 = new ARRint(s2);
	for(int i=0; i<s1; i++){
		std::cout << "Insira um valor para o primeiro arranjo: ";
		std::cin >> arr1->arr[i]; getchar();
	}
	for(int i=0; i<s2; i++){
		std::cout << "Insira um valor para o segundo arranjo: ";
		std::cin >> arr2->arr[i]; getchar();
	}
	std::cout << "\n\nConsidere os arranjos:\n";
	arr1->print();
	std::cout << "\n";
	arr2->print();
	std::cout << "\n";
	int result = arr1->compare(arr2);
	if(result == 0) std::cout << "Os arranjos eram iguais. ";
	else if (result > 0) std::cout << "A diferenca maior estava no primeiro arranjo. ";
	else if (result < 0) std::cout << "A diferenca menor estava no primeiro arranjo. ";
	getchar();
	delete arr1;
	delete arr2;
}

void E1618(){
	int s1 = 0,
		s2 = 0;
	std::cout << "Insira o tamanho dos dois arranjos: ";
	std::cin >> s1 >> s2; getchar();
	ARRint* arr1 = new ARRint(s1);
	ARRint* arr2 = new ARRint(s2);
	for(int i=0; i<s1; i++){
		std::cout << "Insira um valor para o primeiro arranjo: ";
		std::cin >> arr1->arr[i]; getchar();
	}
	for(int i=0; i<s2; i++){
		std::cout << "Insira um valor para o segundo arranjo: ";
		std::cin >> arr2->arr[i]; getchar();
	}
	std::cout << "\n\nConsidere os arranjos:\n";
	arr1->print();
	std::cout << "\n";
	arr2->print();
	arr1->concat(arr2);
	std::cout << "\nResultado: ";
	arr1->print();
	getchar();
	delete arr1;
	delete arr2;
}

void E1619()
{
	ARRint* arr1 = new ARRint(6);
	std::ifstream fil ("dados.txt");
	arr1->fread(fil);
	fil.close();
	std::cout << "Considere o arranjo: ";
	arr1->print();
	int x = 0;
	std::cout << "\nInsira um numero inteiro para ser procurado no arranjo: ";
	std::cin >> x; getchar();
	int* result = arr1->searchPointer(x);
	if(result != nullptr) std::cout << "O dado  " << *result << " esta no endereco: " << result;
	else std::cout << "O alvo nao pode ser encontrado. ";
	getchar();
	delete arr1;
}

void E1620(){
	ARRint* arr1 = new ARRint(15);
	std::ifstream fil ("dados.txt");
	arr1->fread(fil);
	fil.close();
	std::cout << "Considere o arranjo: ";
	arr1->print();
	int start = 0,
		size = 0;
	std::cout << "\nInsira a posicao inicial: ";
	std::cin >> start; getchar();
	std::cout << "Insira quantos elementos devem ser copiados: ";
	std::cin >> size; getchar();
	ARRint* result = arr1->subArray(start, size);
	if(result != nullptr){
	std::cout << "\nO resultado e: ";
	result->print();
	}
	else std::cout << "Dimensoes invalidas.\n";
	getchar();
	delete arr1;
	delete result;
}

void E16E1(){
	int s1 = 0,
		s2 = 0;
	std::cout << "Insira o tamanho dos dois arranjos: ";
	std::cin >> s1 >> s2; getchar();
	ARRint* arr1 = new ARRint(s1);
	ARRint* arr2 = new ARRint(s2);
	for(int i=0; i<s1; i++){
		std::cout << "Insira um valor para o primeiro arranjo: ";
		std::cin >> arr1->arr[i]; getchar();
	}
	for(int i=0; i<s2; i++){
		std::cout << "Insira um valor para o segundo arranjo: ";
		std::cin >> arr2->arr[i]; getchar();
	}
	std::cout << "\n\nConsidere os arranjos:\n";
	arr1->print();
	std::cout << "\n";
	arr2->print();
	ARRint* result = arr1->merge(arr2);
	std::cout << "\nResultado: ";
	result->print();
	getchar();
	delete arr1;
	delete arr2;
}

void E16E2(){
	int s1 = 0,
		s2 = 0;
	std::cout << "Insira o tamanho dos dois arranjos: ";
	std::cin >> s1 >> s2; getchar();
	ARRint* arr1 = new ARRint(s1);
	ARRint* arr2 = new ARRint(s2);
	for(int i=0; i<s1; i++){
		std::cout << "Insira um valor para o primeiro arranjo: ";
		std::cin >> arr1->arr[i]; getchar();
	}
	for(int i=0; i<s2; i++){
		std::cout << "Insira um valor para o segundo arranjo: ";
		std::cin >> arr2->arr[i]; getchar();
	}
	std::cout << "\n\nConsidere os arranjos:\n";
	arr1->print();
	std::cout << "\n";
	arr2->print();
	ARRint* result = arr1->mergeUp(arr2);
	std::cout << "\nResultado: ";
	result->print();
	getchar();
	delete arr1;
	delete arr2;
}
