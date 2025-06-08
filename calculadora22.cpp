#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    inicio:
    system("cls");

    float n1=0, n2=0;
    int res;
    int opc;
    char son;

    cout << "\n============================\n";
    cout << "       CALCULADORA          \n";
    cout << "============================\n";

    cout << "Selecione um numero: \n";
    cout << "Numero: ";
    cin >> n1; 
    cout << "Selecione outro numero: \n";
    cout << "Numero: ";
    cin >> n2;

    cout << "\n\n" << "Selecione o Operador Matematico\n";
    cout << "[1]= Soma\n[2]= Subtracao\n[3]= Multiplicacao\n[4]= Divisao\n";
    cin >> opc;

    switch(opc)
    {
        case 1:
        {
            res=n1+n2;
            cout << "\n\n" << "O resultado de sua soma e: " << res;
            break; 
        }
        case 2:
        {
            res=n1-n2;
            cout << "\n\n" << "O resultado de sua subtracao e: " << res;
            break;
        }
        case 3:
        {
            res=n1*n2;
            cout << "\n\n" << "O resultado de sua multiplicacao e: " << res;
            break;
        }
        case 4: 
        {
            res=n1/n2;
            cout << "\n\n" << "O resultado de sua divisao e: " << res;
            break;
        }
    }

    cout << "\n\n" << "Voce deseja utilizar a calculadora novamente?: (s/n)";
    cout << "\nResposta: ";
    cin >> son;

    if(son == 'S' or son == 's')
    {
        goto inicio;
    }
    else
    {
        system("pause");
    }
    return 0;
}
