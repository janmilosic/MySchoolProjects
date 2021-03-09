#include <iostream>
#include <cstdlib>
using namespace std;

void obrni(char polje[]) {

    char temp[100];

    int i;

    for (i = 0; polje[i] != '\0'; i++) temp[i] = polje[i];

    for (int j = 0; i != 0; j++) polje[j] = temp[--i];

}

int main() {

    char polje[100];

    cout << "Podaj neko besedilo: ";
    cin.get(polje, 100);

    obrni(polje);

    cout << "Podano brnjeno polje: " << polje;

    return 0;
}
