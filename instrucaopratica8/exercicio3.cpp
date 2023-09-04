#include <iostream>

using namespace std;

int main() {
    char date [11];
    cout <<"Informe a data: ";
    cin.getline (date, 11);
    cout << "Dia: " << date [0] << date [1] << endl;
    cout << "Mês: " << date [3] << date [4] << endl;
    cout << "Ano: " << date [6] << date [7] << date [8] << date [9] << endl;

    return 0;
}