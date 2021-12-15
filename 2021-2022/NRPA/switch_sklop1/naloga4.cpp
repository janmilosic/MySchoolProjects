#include <iostream>

using namespace std;

int main() {

    int stevilo1, stevilo2, rezultat;
    char operacija;

    cout << "Podaj prvo celo stevilo: ";
    cin >> stevilo1;
    cout << "Podaj drugo celo stevilo: ";
    cin >> stevilo2;
    cout << "Izberi racunsko operacijo(*,+,-): ";
    cin >> operacija;

    switch (operacija) {
        case '+':
            rezultat = stevilo1 + stevilo2;
            cout << "Sesteti stevili: "<< rezultat << endl;
            break;
        case '-':
            rezultat = stevilo1 - stevilo2;
            cout << "Odsteti stevili: "<< rezultat << endl;
            break;
        case '*':
            rezultat = stevilo1 * stevilo2;
            cout << "Zmnozeni stevili: "<< rezultat << endl;
            break;
        default:
            cout << "vnesen izraz je nepravilen poskusi znova" <<endl;
    }

    return 0;
}