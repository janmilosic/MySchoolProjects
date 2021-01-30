#include <cstdlib>
#include <iostream>

using namespace std;

void obrni(char polje[], char nazaj[]) {

    int i;

    for (i = 0; polje[i] != '\0'; i++);

    for (int j = 0; i > 0; j++) nazaj[j] = polje[--i];

}

int main() {

    char besedilo[100];

    cout << "Podaj besedilo: ";
    cin.get(besedilo, 100);

    char nazaj[100];
    obrni(besedilo, nazaj);

    cout << "Obrnjeno : " << nazaj;

    return 0;
}







