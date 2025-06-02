#include <iostream>
using namespace std;

int main()
{
	int numero, numera;
	cout << " | CALCULADORA | " << "\n" << "\n";
	cout << "Digite um Numero: ";
	cin >> numero;
	cout << "Digite outro Numero: ";
	cin >> numera;
	
	cout << "\n\n" << " | RESULTADOS | " << "\n\n";
	cout << "Soma: "<< numero + numera << "\n"; 
	cout << "Multiplicacao: " << numero * numera << "\n";
	cout << "Subtracao: " << numero - numera << "\n";
	cout << "Divisao: " << numero / numera << "\n";
	cout << "\n\n";
	system("pause");
	return 0;
	
}
