#include <iostream>
#include <cstdlib>
using namespace std;

void obrni(char besedilo[]) {

    char beseda[100];

    int i;

    for (i = 0; besedilo[i] != '\0'; i++) beseda[i] = besedilo[i];

    for (int j = 0; i != 0; j++) besedilo[j] = beseda[--i];

}

int main() {

    char BesediloObrnjeno[100];

    cout << "Podaj neko besedilo: ";
    cin.get(BesediloObrnjeno, 100);

    obrni(BesediloObrnjeno);

    cout << "Podano brnjeno polje: " << BesediloObrnjeno;

    return 0;
}