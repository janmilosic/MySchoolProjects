#include <iostream>
using namespace std;

class Oseba {

private:
    string ime, priimek;
    float visina;

public:

    Oseba() {}

    const string &getIme() const {
        return ime;
    }

    void setIme(const string &ime) {
        Oseba::ime = ime;
    }

    const string &getPriimek() const {
        return priimek;
    }

    void setPriimek(const string &priimek) {
        Oseba::priimek = priimek;
    }

    float getVisina() const {
        return visina;
    }

    void setVisina(float visina) {
        Oseba::visina = visina;
    }

};

int main() {

    string ime, priimek;
    float visina;

    Oseba *oseba = new Oseba;

    cout << "Podaj ime: ";
    cin >> ime;
    cout << "Podaj priimek: ";
    cin >> priimek;
    cout << "Podaj visino: ";
    cin >> visina;

    oseba->setIme(ime);
    oseba->setPriimek(priimek);
    oseba->setVisina(visina);

    cout << oseba->getIme() << endl;
    cout << oseba->getPriimek() << endl;
    cout << oseba->getVisina() << endl;


    return 0;
}