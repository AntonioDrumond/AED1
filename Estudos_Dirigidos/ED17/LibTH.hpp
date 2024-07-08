#include "LibAD.hpp"
#include "Cells.hpp"

void E1711(){
	pill* stack = new pill();
	for(int i=0; i<5; i++){
		stack->push(i);
	}
	stack->print();
	getchar();
	delete stack;
}

void E1712(){
	pill* stack = new pill();
	for(int i=1; i<6; i++){
		stack->push(i);
	}
	std::cout << "Considere a seguinte pilha:\n";
	stack->print();
	std::cout << "\nSegue o resultado:\n";
	stack->pop();
	stack->print();
	getchar();
	delete stack;
}

void E1713(){
	pill* stack = new pill();
	for(int i=1; i<6; i++){
		stack->push(i);
	}
	std::cout << "Considere a seguinte pilha:\n";
	stack->print();
	std::cout << "\nSegue o resultado:\n";
	stack->dupTop();
	stack->print();
	getchar();
	delete stack;
}

void E1714(){
	pill* stack = new pill();
	for(int i=1; i<6; i++){
		stack->push(i);
	}
	std::cout << "Considere a seguinte pilha:\n";
	stack->print();
	std::cout << "\nSegue o resultado:\n";
	stack->swapTop();
	stack->print();
	getchar();
	delete stack;
}

void E1715(){
	pill* stack = new pill();
	for(int i=1; i<6; i++){
		stack->push(i);
	}
	std::cout << "Considere a seguinte pilha:\n";
	stack->print();
	std::cout << "\nSegue a sua inversao:\n";
	stack->invert();
	stack->print();
	getchar();
	delete stack;
}

void E1716(){
	line* lin1 = new line();
	for(int i=1; i<6; i++) lin1->push(i);
	std::cout << "Considere a seguinte fila:\n";
	lin1->print();
	getchar();
	delete lin1;
}

void E1717(){
	line* lin1 = new line();
	for(int i=1; i<6; i++) lin1->push(i);
	std::cout << "Considere a seguinte fila:\n";
	lin1->print();
	lin1->pop();
	std::cout << "Resultado:\n";
	lin1->print();
	getchar();
	delete lin1;
}

void E1718(){
	line* lin1 = new line();
	line* lin2 = new line();
	int rep = 0;
	int buffer = 0;
	std::cout << "Insira o tamanho da primeira fila: ";
	std::cin >> rep; getchar();
	for(int i=0; i<rep; i++){
		std::cout << "Insira um numero para a fila 1: ";
		std::cin >> buffer; getchar();
		lin1->push(buffer);
	}
	std::cout << "Insira o tamanho da segunda fila: ";
	std::cin >> rep; getchar();
	for(int i=0; i<rep; i++){
		std::cout << "Insira um numero para a fila 2: ";
		std::cin >> buffer; getchar();
		lin2->push(buffer);
	}
	int result = lin1->compare(lin2);
	if(result==0) std::cout << "As filas eram iguis. ";
	else if(result<0) std::cout << "A diferenca era menor na primeira fila. ";
	else std::cout << "A diferenca era maior na primeira fila. ";
	getchar();
	delete lin1;
	delete lin2;
}

void E1719(){
	line* lin1 = new line();
	line* lin2 = new line();
	for(int i=1; i<6; i++){
		lin1->push(i);
	}
	for(int i=10; i>4; i--){
		lin2->push(i);
	}
	std::cout << "Considere as seguintes filas:\n";
	lin1->print();
	std::cout << "\ne:\n";
	lin2->print();
	std::cout << "\nResultado:\n";
	lin1->concat(lin2);
	lin1->print();
	getchar();
	delete lin1;
	delete lin2;
}

void E1720(){
	line* lin1 = new line();
	for(int i=1; i<6; i++) lin1->push(i*5);
	std::cout << "Considere a seguinte fila:\n";
	lin1->print();
	int target = 0;
	std::cout << "\nInsira um numero para ser procurado na fila: ";
	std::cin >> target; getchar();
	bool result = lin1->searchBool(target);
	if(result) std::cout << "O alvo foi encontrado. ";
	else std::cout << "O alvo nao foi encontrado. ";
	getchar();
	delete lin1;
}

void E17E1(){
	line* lin1 = new line();
	line* lin2 = new line();
	for(int i=1; i<6; i++){
		lin1->push(i);
	}
	for(int i=10; i>4; i--){
		lin2->push(i);
	}
	std::cout << "Considere as seguintes filas:\n";
	lin1->print();
	std::cout << "\ne:\n";
	lin2->print();
	std::cout << "\nResultado:\n";
	line* result = lin1->merge(lin2);
	result->print();
	getchar();
	delete lin1;
	delete lin2;
	delete result;
}

void E17E2(){
	line* lin1 = new line();
	line* lin2 = new line();
	for(int i=6; i>1; i--){
		lin1->push(i);
	}
	for(int i=10; i>4; i--){
		lin2->push(i);
	}
	std::cout << "Considere as seguintes filas:\n";
	lin1->print();
	std::cout << "\ne:\n";
	lin2->print();
	std::cout << "\nResultado:\n";
	line* result = lin1->mergeUp(lin2);
	result->print();
	getchar();
	delete lin1;
	delete lin2;
	delete result;
}
