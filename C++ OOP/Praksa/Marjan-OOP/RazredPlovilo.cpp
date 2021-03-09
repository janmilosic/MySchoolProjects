#include <iostream>
using namespace std;

class Plovilo {

private:
    float dolzina;
    int stevilo_oseb;
    float najvecja_hitrost;
    string registerska_stevilka;
    string ime;

public:

    Plovilo() {}

    float getDolzina() const {
        return dolzina;
    }

    void setDolzina(float dolzina) {
        Plovilo::dolzina = dolzina;
    }

    int getSteviloOseb() const {
        return stevilo_oseb;
    }

    void setSteviloOseb(int steviloOseb) {
        stevilo_oseb = steviloOseb;
    }

    float getNajvecjaHitrost() const {
        return najvecja_hitrost;
    }

    void setNajvecjaHitrost(float najvecjaHitrost) {
        najvecja_hitrost = najvecjaHitrost;
    }

    const string &getRegisterskaStevilka() const {
        return registerska_stevilka;
    }

    void setRegisterskaStevilka(const string &registerskaStevilka) {
        registerska_stevilka = registerskaStevilka;
    }

    const string &getIme() const {
        return ime;
    }

    void setIme(const string &ime) {
        Plovilo::ime = ime;
    }

};

int main() {

    Plovilo *plovilo = new Plovilo;

    plovilo->setIme("Eno dobro ime");
    plovilo->setRegisterskaStevilka("Ena dobra registerska stevilka");
    plovilo->setNajvecjaHitrost(300);
    plovilo->setSteviloOseb(5);
    plovilo->setDolzina(50.6);

    cout << plovilo->getIme() << endl;
    cout << plovilo->getRegisterskaStevilka() << endl;
    cout << plovilo->getNajvecjaHitrost() << endl;
    cout << plovilo->getSteviloOseb() << endl;
    cout << plovilo->getDolzina() << endl;


    return 0;
}