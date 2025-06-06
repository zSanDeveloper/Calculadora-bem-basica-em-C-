#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int val;

    cout << "\n\n" << "| CONCESSIONARIA |" "\n\n";
    cout << "Selecione um tipo de Veiculo: " << "\n\n";
    cout << "[1]=Carro\n[2]=Moto\n[3]=Aviao\n[4]=Helicoptero" << "\n\n";

    cin >> val;

    switch(val)
    {
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
                switch(val)
                {
                    case 1: 
                        cout << "Carro selecionado\n";
                        break;
                    case 2: 
                        cout << "Moto selecionada\n";
                        break;

                }
        case 3:
        case 4:
            cout << "\nTransporte Aereo\n";
                switch(val)
                {
                    case 3: 
                        cout << "Aviao selecionado\n";
                        break;
                    case 4: 
                        cout << "Helicoptero selecionado\n";
                        break;

                }
    }
    return 0;
}
