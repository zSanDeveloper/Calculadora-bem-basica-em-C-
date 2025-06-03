#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n1, n2, res;
    char opc;

    inicio:
    system("cls");

    cout << "\n\n" << "| NOTAS | ";
    cout << "\n\n" << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    res=n1+n2;

    if(res >= 100)
    {
        cout << "\n\n" << "O Aluno tirou uma nota MAIOR ou IGUAL a 100, portando esta aprovado";
    }
    else if(res >= 40)
    {
        cout << "\n\n" << "O Aluno tirou uma nota INFERIOR a 100, portando esta de RECUPERACAO";
    }
    else 
    {
        cout << "\n\n" << "O Aluno tirou uma nota INFERIOR a 40, portanto esta reprovado";
    }

    cout << "\n" << "Deseja digitar outras notas (s/n): ";
    cin >> opc;

    if(opc == 'S' or opc == 's')
    {
        goto inicio;
    }
    return 0;
}
