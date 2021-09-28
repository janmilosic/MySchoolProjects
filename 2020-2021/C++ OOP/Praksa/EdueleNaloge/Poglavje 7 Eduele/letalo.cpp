#include <iostream>
#include <cmath>

using namespace std;

class Letalo {

protected:
    float dolzinaKril;
    float dolzina;

public:
    Letalo() {}
    ~Letalo() {}
    Letalo(float dolzinaKril, float dolzina) {
        this->dolzinaKril = dolzinaKril;
        this->dolzina = dolzina;
    }

    float getDolzinaKril() {
        return dolzinaKril;
    }

    void setDolzinaKril(float dolzinaKril) {
        this->dolzinaKril = dolzinaKril;
    }

    float getDolzina() {
        return dolzina;
    }

    void setDolzina(float dolzina) {
        this->dolzina = dolzina;
    }

    void izpis(){

        cout<<"Dolzina kril: "<<this->dolzinaKril << "m" <<endl;
        cout<<"Dolzina letala: "<<this->dolzina << "m" <<endl;

    }

};

class pLetalo : public Letalo {

private:
    int steviloOseb;

public:
    pLetalo() {}
    ~pLetalo() {}
    pLetalo(int steviloOseb) {
        this->steviloOseb = steviloOseb;
    }

    int getSteviloOseb() {
        return steviloOseb;
    }

    void setSteviloOseb(int steviloOseb) {
        this->steviloOseb = steviloOseb;
    }

    void izpis(){

        cout<<"Stevilo potnikov: "<<this->steviloOseb <<endl;

    }
};

class Jadrilica : public Letalo {
private:
    float teza;

public:
    Jadrilica() {}
    ~Jadrilica() {}
    Jadrilica(float teza) {
        this->teza = teza;
    }

    float getTeza() {
        return teza;
    }

    void setTeza(float teza) {
        this->teza = teza;
    }

    void izpis(){

        cout<<"Teza letala: "<<this->teza << "ton" <<endl;
    }
};

int main() {

    Letalo a(125,98);
    a.izpis();

    pLetalo b(1500);
    b.izpis();

    Jadrilica c(27);
    c.izpis();

    return 0;
}