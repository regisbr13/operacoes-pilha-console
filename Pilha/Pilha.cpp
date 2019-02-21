#include "pch.h"
#include <iostream>

using namespace std;

#define size 10

int pilha[size];
int top = 0;

bool PilhaVazia() {
	if (top == 0) {
		return true;
	}
	return false;
}

bool PilhaCheia() {
	if (top == size) {
		return true;
	}
	return false;
}

void Empilhar() {
	if (PilhaCheia()) {
		cout << "Erro: pilha cheia!" << endl;
	}
	else {
		int num;
		cout << "Entre com um valor inteiro: ";
		cin >> num;
		pilha[top] = num;
		top++;
	}
}

void ExibirTopo() {
	if (PilhaVazia()) {
		cout << "Erro: pilha vazia!" << endl;
	}
	else {
		cout << "Elemento [" << top << "] = " << pilha[top - 1] << endl;
	}
}

void MostrarPilha() {
	if (PilhaVazia()) {
		cout << "Erro: pilha vazia!" << endl;
	}
	else {
		for (int i = top - 1; i >= 0; i--) {
			cout << "Elemento [" << i + 1 << "] = " << pilha[i] << endl;
		}
	}
}

void Desempilhar() {
	if (PilhaVazia()) {
		cout << "Erro: pilha vazia!" << endl;
	}
	else {
		top--;
	}
}


int main()
{
	int opcao = 1;	

	while (opcao != 0) {

		cout << "####### Operacoes com Pilha #######\n \n";
		cout << "|||||||||||||||||||||||||||||||||||||\n\n";
		cout << "MENU\n\n";

		cout << "0 - Sair \n";
		cout << "1 - Empilhar \n";
		cout << "2 - Exibir topo \n";
		cout << "3 - Mostrar pilha \n";
		cout << "4 - Desempilhar \n";
		cout << "\n";
		cout << "Opcao: ";
		cin >> opcao;

		if (opcao == 0) {
			cout << "Fim do programa";
		}
		else if (opcao == 1) {
			Empilhar();
		}
		else if (opcao == 2) {
			ExibirTopo();
		}
		else if (opcao == 3) {
			MostrarPilha();
		}
		else if (opcao == 4) {
			Desempilhar();
		}
		else {
			cout << "Opçao Invalida";
		}
		system("PAUSE");
		system("cls");
	}
	return 0;
}

