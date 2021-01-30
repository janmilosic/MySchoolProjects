#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void napolni(int polje[], int dolzina) {
    for (int i = 0; i < dolzina; i++) {
        polje[i] = rand() % 100;
    }
    for (int i = 0; i < dolzina; i++) {
        for (int j = 0; j < dolzina; j++) {
            if (polje[i] == polje[j]) {
                polje[i] = rand() % 100;
            }
        }
    }
}
void izpisi(int polje[], int dolzina) {
    for (int i = 0; i < dolzina; i++)
        cout << polje[i] << " ";
}
int main() {
    srand(time(NULL));
    int dolzina;
    cout << "Podaj dolzino polja: ";
    cin >> dolzina;
    int polje[dolzina];
    napolni(polje, dolzina);
    izpisi(polje, dolzina);
    return 0;
}