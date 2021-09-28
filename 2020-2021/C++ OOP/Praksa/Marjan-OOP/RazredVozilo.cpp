#include <iostream>
using namespace std;

class Vozilo {

private:
    string ime;
    string model;
    int leto_izdelave;
    string registerska_stevilka;

public:
    Vozilo() {}

    const string &getIme() const {
        return ime;
    }

    void setIme(const string &ime) {
        Vozilo::ime = ime;
    }

    const string &getModel() const {
        return model;
    }

    void setModel(const string &model) {
        Vozilo::model = model;
    }

    int getLetoIzdelave() const {
        return leto_izdelave;
    }

    void setLetoIzdelave(int letoIzdelave) {
        leto_izdelave = letoIzdelave;
    }

    const string &getRegisterskaStevilka() const {
        return registerska_stevilka;
    }

    void setRegisterskaStevilka(const string &registerskaStevilka) {
        registerska_stevilka = registerskaStevilka;
    }

};

int main() {

    Vozilo *vozilo1 = new Vozilo;
    Vozilo *vozilo2 = new Vozilo;

    vozilo1->setIme("Mercedes-Benz");
    vozilo1->setModel("S");
    vozilo1->setLetoIzdelave(2021);
    vozilo1->setRegisterskaStevilka("Ena dobra registerska stevilka");

    vozilo2->setIme("Mercedes-Benz");
    vozilo2->setModel("S Maybach");
    vozilo2->setLetoIzdelave(2021);
    vozilo2->setRegisterskaStevilka("Se ena dobra registerska stevilka");

    cout << vozilo1->getIme() << endl;
    cout << vozilo1->getModel() << endl;
    cout << vozilo1->getLetoIzdelave() << endl;
    cout << vozilo1->getRegisterskaStevilka() << endl;

    cout << vozilo2->getIme() << endl;
    cout << vozilo2->getModel() << endl;
    cout << vozilo2->getLetoIzdelave() << endl;
    cout << vozilo2->getRegisterskaStevilka() << endl;

    return 0;
}