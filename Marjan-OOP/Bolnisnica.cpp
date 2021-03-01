#include <iostream>
using namespace std;

struct Bolnik {
    string ime;
    int starost;
};

class Bolnisnica {

private:
    Bolnik bolnik[10];
    int stevilo_bolnikov;

public:

    Bolnisnica() {
        this->stevilo_bolnikov = 0;
    }

    int steviloBolnikov() {
        return this->stevilo_bolnikov;
    }

    void dodajBolnika(string ime, int starost) {
        if (this->stevilo_bolnikov > 10) {
            cout << "Bolnisnica je polna" << endl;
            return;
        }
        this->stevilo_bolnikov++;
        int trenutni_bolnik = this->stevilo_bolnikov - 1;
        this->bolnik[trenutni_bolnik].ime = ime;
        this->bolnik[trenutni_bolnik].starost = starost;
    }

    void izbrisiBolnika() {
        if (this->stevilo_bolnikov == 0) {
            cout << "Bolnisnica je prazna" << endl;
            return;
        }
        this->stevilo_bolnikov--;
    }

    string iskanjeBolnika(string ime) {
        for (int i = 0; i != this->stevilo_bolnikov; i++) {
            if (this->bolnik[i].ime == ime) {
                return "Bolnik najden:\n" + to_string(i + 1) + " | Ime: " + this->bolnik[i].ime + " Starost: " + to_string(this->bolnik[i].starost);
            }
        }
        return "Bolnik ni bil najden";
    }

    void izpisBolnikov() {
        for (int i = 0; i != this->stevilo_bolnikov; i++) {
            cout << to_string(i + 1) + " | Ime: " + this->bolnik[i].ime + " Starost: " + to_string(this->bolnik[i].starost) << endl;
        }
    }

    void razvrstiPoStarosti() {
        for (int i = 0; i < this->stevilo_bolnikov; i++)
            for (int j = i + 1; j < this->stevilo_bolnikov; j++)
                if (bolnik[i].starost > bolnik[j].starost)
                    zamenjajBolnika(bolnik[i], bolnik[j]);
    }

    void zamenjajBolnika(Bolnik & bolnik1, Bolnik & bolnik2) {
        Bolnik temp = bolnik1;
        bolnik1 = bolnik2;
        bolnik2 = temp;
    }

};

void izpisMeni();
void meni_gl(int stevilka, Bolnisnica & bolnisnica);

int main() {

    Bolnisnica *bolnisnica = new Bolnisnica;

    int stevilka = 0;

    izpisMeni();

    do {
        cin >> stevilka;
        if (stevilka > 5 || stevilka < 1) continue;
        meni_gl(stevilka, *bolnisnica);
    } while(stevilka != 6);


    return 0;
}

void izpisMeni() {
    cout << "BOLNISNICA (podaj stevilko)" << endl;
    cout << "--------------------------------------" << endl;
    cout << "| 1 | DODAJ BOLNIKA" << endl;
    cout << "| 2 | IZBRISI ZADNJEGA BOLNIKA" << endl;
    cout << "| 3 | ISKANJE BOLNIKA PO IMENU" << endl;
    cout << "| 4 | IZPIS BOLNIKOV" << endl;
    cout << "| 5 | RAZVRSTI BOLNIKE PO STAROSTI" << endl;
    cout << "| 6 | IZHOD" << endl;
    cout << "--------------------------------------" << endl;
}

void meni_gl(int stevilka, Bolnisnica & bolnisnica) {

    switch (stevilka) {
        case 1: {
            string ime;
            int starost;
            cout << "Podaj ime: ";
            cin >> ime;
            cout << "Podaj starost: ";
            cin >> starost;
            bolnisnica.dodajBolnika(ime, starost);
            break;
        }
        case 2: {
            bolnisnica.izbrisiBolnika();
            break;
        }
        case 3: {
            if (bolnisnica.steviloBolnikov() == 0) {
                cout << "Bolnisnica je prazna" << endl;
                break;
            }
            string ime;
            cout << "Podaj ime: ";
            cin >> ime;
            cout << bolnisnica.iskanjeBolnika(ime) << endl;
            break;
        }
        case 4: {
            if (bolnisnica.steviloBolnikov() == 0) {
                cout << "Bolnisnica je prazna" << endl;
                break;
            }
            bolnisnica.izpisBolnikov();
            break;
        }
        case 5: {
            if (bolnisnica.steviloBolnikov() == 0) {
                cout << "Bolnisnica je prazna" << endl;
                break;
            }
            bolnisnica.razvrstiPoStarosti();
            break;
        }
    }
    izpisMeni();
}