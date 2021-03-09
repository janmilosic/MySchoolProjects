#include <iostream>
using namespace std;

void mojaFunkcija(int a, int & b) {

    a = 2019;
    b = 2022;

}


int main() {

    int a = 2020, b = 2021;

    mojaFunkcija(a, b);

    cout << "a: " << a << "\nb: " << b;

    /*
     * Opazimo da se spremenljivki a vrednost ne spremeni, spremenljivki b pa se vrednost spremeni.
     * To ze zgodi, ker je spremenljivka b podana po referenci.
     */


    return 0;
}