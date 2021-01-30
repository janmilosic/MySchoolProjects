#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void napolni(int polje[], int dolzina) {

    for (int i = 0; i != dolzina; i++) polje[i] = rand() % 500;

}

void sodaLiha(int polje[], int dolzina) {

    int sodo = 0, liho = dolzina;
    int temp[dolzina];

    for (int i = 0; i != dolzina; i++) {

        if (polje[i] % 2 == 0) temp[sodo++] = polje[i];
        else temp[--liho] = polje[i];

    }

    for (int i = 0; i != dolzina; i++) polje[i] = temp[i];

}

int main() {

    srand(time(NULL));

    int dolzina = 10;
    int polje[dolzina];

    napolni(polje, dolzina);
    sodaLiha(polje, dolzina);

    for (int i = 0; i != dolzina; i++) cout << polje[i] << " ";


    return 0;
}







