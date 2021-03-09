#include <iostream>
using namespace std;

class Oseba {

    private:
        string ime;
        string priimek;
        float teza;
        int visina;
        float bmi;

    public:
        Oseba() {}
        Oseba(string ime, string priimek, float teza, int visina) {
            this->ime = ime;
            this->priimek = priimek;
            this->teza = teza;
            this->visina = visina;
            this->bmi = (teza / (visina * visina)) * 10000;
        }
        void izpisi() {
            cout << "Ime: " << ime << endl
                 << "Priimek: " << priimek << endl
                 << "Teza: " << teza << endl
                 << "Visina: " << visina << endl
                 << "BMI: " << bmi << endl;
        }

        void setIme(string ime) {
            this->ime = ime;
        }

        void setPriimek(string priimek) {
                this->priimek = priimek;
            }

        void setTeza(float teza) {
            this->teza = teza;
        }

        void setVisina(int visina) {
            this->visina = visina;
        }

        void setBmi(float bmi) {
            this->bmi = bmi;
        }

};


int main() {

    string ime, priimek;
    float teza;
    int visina;

    Oseba dijak;
    Oseba *dijak1 = new Oseba;

    cout << "Oseba dijak" << endl;
    cout << "Podaj ime: ";
    cin >> ime;
    cout << "Podaj priimek: ";
    cin >> priimek;
    cout << "Podaj tezo: ";
    cin >> teza;
    cout << "Podaj visino: ";
    cin >> visina;
    dijak.setIme(ime);
    dijak.setPriimek(priimek);
    dijak.setTeza(teza);
    dijak.setVisina(visina);
    dijak.setBmi((teza / (visina * visina)) * 10000);

    cout << "Oseba dijak1" << endl;
    cout << "Podaj ime: ";
    cin >> ime;
    cout << "Podaj priimek: ";
    cin >> priimek;
    cout << "Podaj tezo: ";
    cin >> teza;
    cout << "Podaj visino: ";
    cin >> visina;
    dijak1->setIme(ime);
    dijak1->setPriimek(priimek);
    dijak1->setTeza(teza);
    dijak1->setVisina(visina);
    dijak1->setBmi((teza / (visina * visina)) * 10000);

    cout << "Oseba dijak2" << endl;
    cout << "Podaj ime: ";
    cin >> ime;
    cout << "Podaj priimek: ";
    cin >> priimek;
    cout << "Podaj tezo: ";
    cin >> teza;
    cout << "Podaj visino: ";
    cin >> visina;
    Oseba *dijak2 = new Oseba(ime, priimek, teza, visina);

    dijak.izpisi();
    dijak1->izpisi();
    dijak2->izpisi();

    return 0;
}

