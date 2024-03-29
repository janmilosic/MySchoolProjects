#include <iostream>
using namespace std;

class Telefon {

private:
    string znamka, model;
    int letoIzdaje, velikostBaterije;

public:
    Telefon() {}

    Telefon(string znamka, string model, int letoIzdaje, int velikostBaterije) {
        this->znamka = znamka;
        this->model = model;
        this->letoIzdaje = letoIzdaje;
        this->velikostBaterije = velikostBaterije;
    }

    const string &getZnamka() const {
        return znamka;
    }

    void setZnamka(const string &znamka) {
        Telefon::znamka = znamka;
    }

    const string &getModel() const {
        return model;
    }

    void setModel(const string &model) {
        Telefon::model = model;
    }

    int getLetoIzdaje() const {
        return letoIzdaje;
    }

    void setLetoIzdaje(int letoIzdaje) {
        Telefon::letoIzdaje = letoIzdaje;
    }

    int getVelikostBaterije() const {
        return velikostBaterije;
    }

    void setVelikostBaterije(int velikostBaterije) {
        Telefon::velikostBaterije = velikostBaterije;
    }

};

int main() {

    Telefon *telefon = new Telefon;

    telefon->setZnamka("Samsung");
    telefon->setModel("Galaxy Note 10");
    telefon->setLetoIzdaje(2019);
    telefon->setVelikostBaterije(3500);

    cout << telefon->getZnamka() << endl;
    cout << telefon->getModel() << endl;
    cout << telefon->getLetoIzdaje() << endl;
    cout << telefon->getVelikostBaterije() << endl;

    Telefon *telefon1 = new Telefon("Samsung", "Galaxy Note 10+", 2019, 4300);

    cout << telefon1->getZnamka() << endl;
    cout << telefon1->getModel() << endl;
    cout << telefon1->getLetoIzdaje() << endl;
    cout << telefon1->getVelikostBaterije() << endl;

    return 0;
}