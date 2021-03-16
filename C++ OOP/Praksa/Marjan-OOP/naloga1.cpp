#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Tekmoavlec {
private:
    int stevilka_tekmovalca, tarca_zadetki, tarca_zgreseni;
    string ime, priimek;
    float cas_teka, skupni_cas;
public:
    Tekmoavlec(){}
    Tekmoavlec(int stevilka_tekmovalca, int tarca_zadetki, string ime, string priimek, float cas_teka) {
        this->stevilka_tekmovalca = stevilka_tekmovalca;
        this->tarca_zadetki = tarca_zadetki;
        this->ime = ime;
        this->priimek = priimek;
        this->cas_teka = cas_teka;
        this->tarca_zgreseni = 20 - this->tarca_zadetki;
        this->skupni_cas = izracun_skupnega_casa();
    }
    void vnosTekmovalca() {
        cout << "Podaj ime temovalca: ";
        cin >> this->ime;
        cout << "Podaj priimek tekmovalca: ";
        cin >> this->priimek;
        cout << "Podaj stevilko tekovalca: ";
        cin >> this->stevilka_tekmovalca;
        cout << "Podaj stevilo zadetih tarc: ";
        cin >> this->tarca_zadetki;
        cout << "Podaj cas teka: ";
        cin >> this->cas_teka;
        this->tarca_zgreseni = 20 - this->tarca_zadetki;
        this->skupni_cas = izracun_skupnega_casa();
    }
    void vnosTekmovalcaSamodejno(int stevilka_tekmovalca, int tarca_zadetki, string ime, string priimek, float cas_teka) {
        this->stevilka_tekmovalca = stevilka_tekmovalca;
        this->tarca_zadetki = tarca_zadetki;
        this->ime = ime;
        this->priimek = priimek;
        this->cas_teka = cas_teka;
        this->tarca_zgreseni = 20 - this->tarca_zadetki;
        this->skupni_cas = izracun_skupnega_casa();
    }
    void izpisTekmovalca() {
        cout << "Ime: " << this->ime << endl;
        cout << "Priimek: " << this->priimek << endl;
        cout << "Stevilka tekmovalca: "  << this->stevilka_tekmovalca << endl;
        cout << "Stevilo zadetih tarc: " << this->tarca_zadetki << endl;
        cout << "Cas teka: "  << this->cas_teka << "s " << endl;
        cout << "Skupni cas: " << this->skupni_cas << "s" << endl;
    }
    float izracun_skupnega_casa() {
        return 90 * this->tarca_zgreseni + this->cas_teka;
    }
    float getCas_teka() const {
        return cas_teka;
    }

    void setCas_teka(float cas_teka) {
        this->cas_teka = cas_teka;
    }

    string getIme() const {
        return ime;
    }

    void setIme(string ime) {
        this->ime = ime;
    }

    string getPriimek() const {
        return priimek;
    }

    void setPriimek(string priimek) {
        this->priimek = priimek;
    }

    float getSkupni_cas() const {
        return skupni_cas;
    }

    void setSkupni_cas(float skupni_cas) {
        this->skupni_cas = skupni_cas;
    }

    int getStevilka_tekmovalca() const {
        return stevilka_tekmovalca;
    }

    void setStevilka_tekmovalca(int stevilka_tekmovalca) {
        this->stevilka_tekmovalca = stevilka_tekmovalca;
    }

    int getTarca_zadetki() const {
        return tarca_zadetki;
    }

    void setTarca_zadetki(int tarca_zadetki) {
        this->tarca_zadetki = tarca_zadetki;
    }

    int getTarca_zgreseni() const {
        return tarca_zgreseni;
    }

    void setTarca_zgreseni(int tarca_zgreseni) {
        this->tarca_zgreseni = tarca_zgreseni;
    }


};


Tekmoavlec najhitrejsi(Tekmoavlec t[], int d) {
    Tekmoavlec najhitrejsi = t[0];

    for (int i = 0; i != 20; i++)
        if (t[i].izracun_skupnega_casa() < najhitrejsi.izracun_skupnega_casa())
            najhitrejsi = t[i];

    cout << "Ime: " << najhitrejsi.getIme() << endl;
    cout << "Priimek: " << najhitrejsi.getPriimek() << endl;
    cout << "Stevilka tekmovalca: " << najhitrejsi.getStevilka_tekmovalca() << endl;
    cout << "Stevilo zadetih tarc: " << najhitrejsi.getTarca_zadetki() << endl;
    cout << "Cas teka: "  << najhitrejsi.getCas_teka() << "s " << endl;
    cout << "Skupni cas: " << najhitrejsi.getSkupni_cas() << "s" << endl;

    return najhitrejsi;
}

int main() {

    srand(time(NULL));

    Tekmoavlec tekmovalci[20];

    for (int i = 0; i != 20; i++)
        tekmovalci[i].vnosTekmovalcaSamodejno(i + 1, rand() % 21, to_string(i + 1) + " Anej", "Predovnik", rand() % 5001 + 15000);

    for (int i = 0; i != 20; i++)
        tekmovalci[i].izpisTekmovalca();


    cout << endl << "Najhitrejsi tekmovalec: " << endl;
    najhitrejsi(tekmovalci, 20);

    return 0;
}
