#include <iostream>

using namespace std;

float izracun(float stevilo1, float stevilo2) {
    return stevilo1 / stevilo2;
}
void izpisMeni(float stevilo1, float stevilo2, float rezultat) {
    cout << "--------------------------------------------------" << endl;
    cout << "|" << "Prvo stevilo: " << stevilo1 << " | " << "Drugo stevilo: " << stevilo2 << "|" << "Rezultat: " << rezultat << " | " << endl;
    cout << "--------------------------------------------------" << endl;
}
int main() {

    float stevilo1, stevilo2;

    cout << "Podaj prvo stevilo: ";
    cin >> stevilo1;
    cout << "Podaj drugo stevilo: ";
    cin >> stevilo2;

    float rezultat = izracun(stevilo1, stevilo2);
    izpisMeni(stevilo1, stevilo2, rezultat);

    return 0;
}