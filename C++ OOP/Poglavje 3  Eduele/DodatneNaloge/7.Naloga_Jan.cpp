#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void napolni(int polje[], int dolzina) {

    for (int i = 0; i != dolzina; i++) polje[i] = rand() % 500;

}

void razvrsti(int polje[], int dolzina) {

    for (int i = 0; i != dolzina; i++)
        for (int j = i + 1; j != dolzina; j++)
            if (polje[i] < polje[j]) {
                int temp = polje[i];
                polje[i] = polje[j];
                polje[j] = temp;
            }

}

int main() {

    srand(time(NULL));

    int dolzina = 10;
    int polje[dolzina];

    napolni(polje, dolzina);
    razvrsti(polje, dolzina);

    for (int i = 0; i != dolzina; i++) cout << polje[i] << " ";


    return 0;
}







