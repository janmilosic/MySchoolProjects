/*
Napište razred Stavba. Stavba ima lastnost: dolžina, širina, višina, barva_fasade, oblika_strehe,
st_prebivalcev, naslov. Napišite konstruktorje za podane atribute stavbe in set ter get metode.
Napišite metode za izpisStavbe,vnoosStavbe(metoda vrne stavbo), izračun prostorniStavbe,izračunPovrsineNa
Previlce v stavbi, Motedo za vnosStavbe naj naključno določijo vse atribute razreda Stavaba...
V glavnem programu deklarirajte polje 20 stavb. Sr+tavbe razvrstite po višini. Napišite tudi metodo za
iskanje stavb po naslovu. Metode preizkusite v glavnem programu.
 */

#include <iostream>
#include <time.h>
using namespace std;

class Hisa {

private:
    string barvaFasade, oblikaStrehe, naslov;
    float dolzina, sirina, visina, steviloPreb;

public:

    Hisa() {}

    const string &getBarvaFasade() const {
        return barvaFasade;
    }

    void setBarvaFasade(const string & barvaFasade) {
        Hisa::barvaFasade = barvaFasade;
    }

    const string &getOblikaStrehe() const {
        return oblikaStrehe;
    }

    void setOblikaStrehe(const string & oblikaStrehe) {
        Hisa::oblikaStrehe = oblikaStrehe;
    }

    const string &getNaslov() const {
        return naslov;
    }

    void setNaslov(const string & naslov) {
        Hisa::oblikaStrehe = naslov;
    }

    float getDolzina() const {
        return dolzina;
    }

    void setDolzina(float dolzina) {
        Hisa::dolzina = dolzina;
    }


    float getSirina() const {
        return sirina;
    }

    void setSirina(float sirina) {
        Hisa::sirina = sirina;
    }

    float getVisina() const {
        return visina;
    }

    void setVisina(float visina) {
        Hisa::visina = visina;
    }

    float getSteviloPreb() const {
        return steviloPreb;
    }

    void setSteviloPreb(float steviloPreb) {
        Hisa::steviloPreb = steviloPreb;
    }

    string barva(){
        string b[]={"rdeca", "modra", "rumena", "siva", "rjava", "tmodra"};

        int nak= -1+rand()%6;
        return b[nak];
    }

    void RandomPodatki(){
    this-> dolzina = 1 + rand()%40;
    this-> sirina = 1 + rand()%40;
    this-> visina = 1 + rand()%40;
    this-> steviloPreb = 1 + rand()%40;
    }

    void IzpisiPodatke(){
    /*
    cout << "Barva fasade: " << hisa->getBarvaFasade() << endl;
    cout << "Oblika strehe: " << hisa->getOblikaStrehe() << endl;
    cout << "Naslov: " << hisa->getNaslov() << endl;
    cout << "Stevilo prebivalcev: " << hisa->getSteviloPreb() << endl;
    cout << "Dolzina: " << hisa->getDolzina() << endl;
    cout << "Sirina: " << hisa->getSirina() << endl;
    cout << "Visina: " << hisa->getVisina() << endl;
    */
    }

};

int main() {

    string barvaFasade, oblikaStrehe;
    float dolzina, sirina, visina;

    srand(time(NULL));
    Hisa p[20];

    for(int i=0;i<20;i++){
    p[i].RandomPodatki();
    p[i].IzpisiPodatke();


    /*
    Hisa * hisa = new Hisa;

    hisa->setBarvaFasade("modra");
    hisa->setOblikaStrehe("spicasta");
    hisa->setNaslov("neki kraj");
    hisa->setSteviloPreb(10);
    hisa->setDolzina(10.1);
    hisa->setSirina(4.5);
    hisa->setVisina(2.21);

    cout << "Barva fasade: " << hisa->getBarvaFasade() << endl;
    cout << "Oblika strehe: " << hisa->getOblikaStrehe() << endl;
    cout << "Naslov: " << hisa->getNaslov() << endl;
    cout << "Stevilo prebivalcev: " << hisa->getSteviloPreb() << endl;
    cout << "Dolzina: " << hisa->getDolzina() << endl;
    cout << "Sirina: " << hisa->getSirina() << endl;
    cout << "Visina: " << hisa->getVisina() << endl;
    */

    /*
    cout << "Podaj barvo fasade: ";
    cin >> barvaFasade;
    cout << "Podaj obliko strehe: ";
    cin >> oblikaStrehe;
    cout << "Podaj dolzino: ";
    cin >> dolzina;
    cout << "Podaj sirino: ";
    cin >> sirina;
    cout << "Podaj visino: ";
    cin >> visina;

    hisa->setBarvaFasade(barvaFasade);
    hisa->setOblikaStrehe(oblikaStrehe);
    hisa->setDolzina(dolzina);
    hisa->setSirina(sirina);
    hisa->setVisina(visina);

    cout << "------------------------" << endl;
    cout << hisa->getBarvaFasade() << endl;
    cout << hisa->getOblikaStrehe() << endl;
    cout << hisa->getSirina() << endl;
    cout << hisa->getDolzina() << endl;
    cout << hisa->getVisina() << endl;
    */

    return 0;

}
