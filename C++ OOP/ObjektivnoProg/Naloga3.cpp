#include <iostream>
using namespace std;

//Kolo

class Kolo{

public:

    char znamka[20];
    char velikost_okvirja[3];
    string serijska_st;
    string znamka_br;
    char vrsta_k[15];

public:

    void VnosKolesa(){
        cout << "Vnesi znamko: "; cin.getline(znamka,20);
        cout << "Vnesi velikost okvirja (S/M/XL): "; cin.getline(velikost_okvirja,20);
        cout << "Vnesi serijsko stevilko: "; cin >> serijska_st; cin.ignore();
        cout << "Vnesi znamko zavor: "; cin >> znamka_br; cin.ignore();
        cout << "Vnesi vrsto kolesa: "; cin.getline(vrsta_k,15);
    }

    void IzpisKolesa(){
        cout << "\n\nZnamka: " << this->znamka << endl;
        cout << "Velikost okvirja (S/M/XL): " << this->velikost_okvirja << endl;
        cout << "Serijska stevilka: " << this->serijska_st << endl;
        cout << "Znamka zavor: " << this->serijska_st << endl;
        cout << "Vrsta kolesa: " << this->vrsta_k << endl;

    }
};


int main() {
    int a;
    Kolo b;
    b.VnosKolesa();
    b.IzpisKolesa();

    return 0;
}