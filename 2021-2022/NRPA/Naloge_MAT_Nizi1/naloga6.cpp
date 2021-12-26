#include <iostream>

using namespace std;

bool preveriEmso(string emso) {
    if (emso.length() < 13)
        return false;

    int faktor = 7;
    int vsota = 0;

    for (int i = 0; i <= emso.length() - 2; i++) {
        if (i == 6)
            faktor = 7;

        vsota += ((int) emso[i] - 48) * faktor;

        faktor--;
    }

    return (vsota + ((int) emso[12] - 48)) % 11 == 0 ;
}

int main() {
    string emso = "";

    cout << "Podaj emso: ";
    cin >> emso;

    if (preveriEmso(emso))
        cout << "EMSO je veljaven" << endl;
    else
        cout << "EMSO neveljaven" << endl;

    return 0;
}