#include <iostream>
using namespace std;

struct Baje {
    string naselje, statRegija;
    int postnaSt;
    float povrsina;
};

int zanimivaVsotaStevk(int stevilo);
int kolikoZanimivihRegij(string imeRegije, Baje baje[], int postnaSt, string statRegija);
void najvecjeNaselje(Baje baje[]);

int main() {

    Baje baje[10];

    int kje;
    string kaj;

    cin >> kje;
    cin >> kaj;

    baje[kje].statRegija = kaj;


    return 0;
}

int zanimivaVsotaStevk(int stevilo) {
    int desna = stevilo % 100;
    return ((int) stevilo / 100) + desna;
}

int kolikoZanimivihRegij(string imeRegije, Baje baje[]) {
    int koliko;
    for (int i = 0; i != 10; i++)
        if (baje[i].statRegija == imeRegije && zanimivaVsotaStevk(baje[i].postnaSt) > 100)
            koliko++;

    return koliko;
}

void najvecjeNaselje(Baje baje[]) {
    int kje;
    int najvecja = 0;
    int i;

    for (i = 0; i != 10; i++)
        if (baje[i].povrsina > najvecja)
            najvecja = baje[i++].povrsina;

    cout << baje[i].naselje;
}

