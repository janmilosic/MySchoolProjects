#include <iostream>

using namespace std;


float izracun(float st1, float st2) {
    return st1 / st2;
}
void izpisMeni(float st1, float st2, float rezultat) {
    cout << "---------------------------------------------------------" << endl;
    cout << "|" << "1. stevilo: " << st1 << " | " << "2. stevilo: " << st2 << "|" << "REZULTAT: " << rezultat << " | " << endl;
    cout << "---------------------------------------------------------" << endl;
}
int main() {

    float st1, st2;

    cout << "Podaj prvo stevilo: ";
    cin >> st1;
    cout << "Podaj drugo stevilo: ";
    cin >> st2;

    float rezultat = izracun(st1, st2);
    izpisMeni(st1, st2, rezultat);
    return 0;
}
