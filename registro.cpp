#include <iostream>
using namespace std;

int main()
{
	string nome;
	int idade;
	string nac;
	string sexo;
	
	cout << "| REGISTRO DO SUS |" << "\n\n";
	cout << "Qual e o seu nome: ";
	cin >> nome;
	cout << "Qual a sua idade: ";
	cin >> idade;
	cout << "Qual e o seu sexo: ";
	cin >> sexo;
	cout << "Qual a sua Nacionalidade: ";
	cin >> nac;
	cout << "\n\n";
	
	cout << "Ola " << nome << " voce tem " << idade << " anos " << " voce e um " << sexo << " e sua nacionalidade e " << nac << "\n\n";
	return 0;
}
