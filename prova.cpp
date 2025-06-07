#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //Variaveis
    double nota;
    int qa;
    int qb;
    int qc;

    cout << "| PROVA DO KSS | " << "\n\n";
    cout << "Questao 1: Joao tinha 3 laranjas, chupou 1 e deu 1 pra sua mae, com quantas laranjas joao ficou?\n\n[1]= Uma Laranja\n[2]= Duas Laranjas\n[3]= Tres Laranjas\n\n";
    cin >> qa;

    switch(qa)
    {
        case 1:
        {
            cout << "Sua resposta foi armazenada, proxima etapa\n";
            nota+=1.5;
            break;
        }
        case 2:
        {
            cout << "\nSua resposta foi armazenada, proxima etapa\n";
            break;
        }
        case 3:
        {
            cout << "\nSua resposta foi armazenada, proxima etapa\n";
            break;
        }
    }

    cout << "\n" << "Questao 2: Qual e o nome do continente que fica localizado o Brasil?\n\n[1]= Europa\n[2]= America do Sul\n[3]=America Central\n\n";
    cin >> qb;

    switch(qb)
    {
        case 1:
        {
            cout << "\nSua resposta foi armazenada, proxima etapa\n";
            break;
        }
        case 2: 
        {
            cout << "\nSua resposta foi armazenada, proxima etapa\n";
            nota+=2;
            break;
        }
        case 3:
        {
            cout << "\nSua resposta foi armazenada, proxima etapa\n";
        }
    }

    cout << "\n" << "Questao 3: Qual e o nome do MOTOR GRAFICO que utiliza a linguagem CPP?\n\n[1]=Unity\n[2]=Unreal Engine\n[3]=Gamer Maker Studio\n\n ";
    cin >> qc;

    switch(qc)
    {
        case 1:
        {
            cout << "\nSua resposta foi armazenada, proxima etapa\n";
            break;
        }
        case 2:
        {
            cout << "\nSua resposta foi armazenada, proxima etapa\n";
            nota+=5;
            break;
        }
        case 3:
        {
            cout << "\nSua resposta foi armazenada, proxima etapa\n";
            break;
        }
    }

    cout << "Voce finalizou a prova e sua nota foi: " << nota << "\n\n";
    cout << " | AGUARDE O SISTEMA IRA VERIFICAR SE VOCE FOI APROVADO OU REPROVADO | \n\n";

    if(nota >= 7)
    {
        cout << "| RESULTADO |\n\nNOTA NECESSARIA: 7\nSUA NOTA: " << nota << "\nSUA SITUACAO: APROVADO\n\n";
    }
    else 
    {
        cout << " | RESULTADO |\n\nNOTA NECESSARIA: 7\nSUA NOTA: " << nota << "\nSUA SITUACAO: REPROVADO\n\n";
    }
    return 0;
}
