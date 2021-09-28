#include <iostream>
using namespace std;

//Monitor

class Monitor{

public:

    char znamka[20];
    int velikost;
    string serijska_st;
    string resolucija;
    int osvezitev;

public:

    void VnosMonitorja(){
        cout << "Vnesi znamko: "; cin.getline(znamka,20);
        cout << "Vnesi velikost (inch): "; cin >> velikost; cin.ignore();
        cout << "Vnesi serijsko stevilko: "; cin >> serijska_st; cin.ignore();
        cout << "Vnesi resolucijo: "; cin >> resolucija; cin.ignore();
        cout << "Vnesi osvezitev(Hz): "; cin >> osvezitev; cin.ignore();
    }

    void IzpisMonitorja(){
        cout << "\n\nZnamka: " << this->znamka << endl;
        cout << "Velikost (inch): " << this->velikost << endl;
        cout << "Serijska stevilka: " << this->serijska_st << endl;
        cout << "Resolucija: " << this->resolucija << endl;
        cout << "Osvezitev(Hz): " << this->osvezitev << endl;

    }
};


int main() {
    int a;
    Monitor b;
    b.VnosMonitorja();
    b.IzpisMonitorja();

    return 0;
}