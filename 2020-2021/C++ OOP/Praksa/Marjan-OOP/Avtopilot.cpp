#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Avtopilot {

private:
    int trenutna_visina;
    int max_visina;

public:
    Avtopilot(int max_visina) {
        this->trenutna_visina = 0;
        this->max_visina = max_visina;
    }
    void dvigniZa(int visina) {
        visina += this->trenutna_visina;
        if (visina > this->max_visina) {
            cout << "Nemorem prekoraciti max_visine" << endl;
            return;
        }
        this->trenutna_visina = visina;
    }
    void spustiZa(int visina) {
        visina -= this->trenutna_visina;
        if (visina <= 0) {
            cout << "Nemorem se spustiti pod 0" << endl;
            return;
        }
        this->trenutna_visina = visina;
    }
    float trenutnaVisina() {
        return this->trenutna_visina;
    }

};

int main() {

    srand(time(NULL));

    int max_visina = 2000;
    int odlocitev[10];
    int stevilke[10];

    for (int i = 0; i != 10; i++) {
        odlocitev[i] = rand() % 10;
        stevilke[i] = rand() % max_visina;
    }

    Avtopilot *avtopilot = new Avtopilot(max_visina);


    for (int i = 0; i != 10; i++)
        if (odlocitev[i] % 2 == 0)
            avtopilot->dvigniZa(stevilke[i]);
        else
            avtopilot->spustiZa(stevilke[i]);

    cout << "Zadnja visina: " << avtopilot->trenutnaVisina() << endl;

    return 0;
}