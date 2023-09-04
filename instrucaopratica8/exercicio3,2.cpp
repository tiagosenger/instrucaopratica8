#include <iostream>
#include <string>

using namespace std;

int main() {
    char date [11];
    char dia [3], mes [3], ano [5];
    int dia_int, mes_int, ano_int;
    cout <<"Informe a data: ";
    cin.getline (date, 11);
    cout << "Dia: " << date [0] << date [1] << endl;
    cout << "Mês: " << date [3] << date [4] << endl;
    cout << "Ano: " << date [6] << date [7] << date [8] << date [9] << endl;
    dia[0] = date [0];
    dia [1] = date [1];
    dia_int = stoi (dia);
    mes [0] = date [3];
    mes [1] = date [4];
    mes_int = stoi (mes);
    ano [0] = date [6];
    ano [1] = date [7];
    ano [2] = date [8];
    ano [3] = date [9];
    ano_int = stoi (ano);

    if (dia_int > 0 && dia_int < 32 &&
        mes_int > 0 && mes_int < 13 &&
        ano_int > 0){
            cout << "Data válida!" << endl;
        } else {
            cout << "Data inválida!" << endl;
        }

    return 0;
}