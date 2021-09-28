#include <iostream>

using namespace std;

void zamenjaj(char & a, char & b) {
    char temp = a;
    a = b;
    b = temp;
}

void obrniBesedeVBesedilu(char besedilo[]) {
    for (int i = 0; besedilo[i] != '\0'; i++) {
        for (int j = i + 1; besedilo[j] != '\0'; j++) {
            if (besedilo[i] == ' ' || besedilo[j] == ' ') {
                i = j;
                continue;
            }
            zamenjaj(besedilo[i], besedilo[j]);
        }
    }
}

int main() {

    char besedilo[100];

    cout << "Podaj besedilo: ";
    cin.getline(besedilo, 100);

    obrniBesedeVBesedilu(besedilo);

    cout << "Obrnjeno besedilo: " << besedilo;

    return 0;
}

