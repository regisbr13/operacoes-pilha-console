#include "pch.h"
#include <iostream>

using namespace std;

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
		if (opcao == 1) {
		}
		if (opcao == 2) {
		}
		if (opcao == 3) {
		}
		if (opcao == 4) {
		}
		if (opcao > 4) {
			cout << "Opçao Invalida";
		}
		system("PAUSE");
		system("cls");
	}
	return 0;
}

