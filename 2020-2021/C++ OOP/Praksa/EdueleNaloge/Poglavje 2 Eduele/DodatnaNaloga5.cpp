#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    char besedilo[100];
    char kopija[100];
    char nazaj[100];
    int i = 0;

    cin.getline(besedilo, 100);

    for (; besedilo[i] != '\0'; i++) {
        kopija[i] = besedilo[i];
        if (besedilo[i] == ' ') {
            besedilo[i] = '_';
            besedilo[i - 1] = toupper(besedilo[i - 1]);
        }
    }

    besedilo[i - 1] = toupper(besedilo[i - 1]); 

    cout << kopija << " -> " << besedilo;

    return 0;
}