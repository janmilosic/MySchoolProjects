#include <cstdlib>
#include <iostream>

using namespace std;

int i = 200;

void velika_zac(char besedilo[]) {
    for (int i = 0; besedilo[i] != '\0'; i++)
        besedilo[i] = tolower(besedilo[i]);

    besedilo[0] = toupper(besedilo[0]);
}

void male_crke(char besedilo[]) {
    for (int i = 0; besedilo[i] != '\0'; i++)
        besedilo[i] = tolower(besedilo[i]);
}

void vlke_crke(char besedilo[]) {
    for (int i = 0; besedilo[i] != '\0'; i++)
        besedilo[i] = toupper(besedilo[i]);
}

int main() {

    char besedilo[80];

    cout << "Podaj besedilo: ";
    cin.get(besedilo, 80);

    velika_zac(besedilo);
    cout << "Velika zacetnica: " << besedilo << endl;

    male_crke(besedilo);
    cout << "Male crke: " << besedilo << endl;

    vlke_crke(besedilo);
    cout << "Velike crke: " << besedilo << endl;


    return 0;
}


