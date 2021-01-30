#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void napolni(int polje[], int dolzina) {

    for (int i = 0; i != dolzina; i++) polje[i] = rand() % 500;

}

int povprecje(int polje[], int dolzina) {

    int vsota = 0;

    for (int i = 0; i != dolzina; i++) vsota += polje[i];


    return vsota / dolzina;

}

int main() {

    srand(time(NULL));

    int dolzina = 10;
    int polje[dolzina];

    napolni(polje, dolzina);

    cout << "Povprecje polja: " << povprecje(polje, dolzina);

    return 0;
}







