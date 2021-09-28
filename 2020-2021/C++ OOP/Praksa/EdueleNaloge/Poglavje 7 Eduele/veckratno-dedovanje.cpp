#include <iostream>
#include <cmath>

using namespace std;

class Coln {
protected:

    float dolzina;
    int steviloOseb;

public:

    Coln() {}
    ~Coln() {}
    Coln(float dolzina, int steviloOseb) {
        this->dolzina = dolzina;
        this->steviloOseb = steviloOseb;
    }

    virtual float getDolzina() {
        return dolzina;
    }

    virtual void setDolzina(float dolzina) {
        this->dolzina = dolzina;
    }

    virtual int getsteviloOseb() {
        return steviloOseb;
    }

    virtual void setsteviloOseb(int steviloOseb) {
        this->steviloOseb = steviloOseb;
    }

    virtual float hitrostTrupa() {
        return 1.34 * sqrt(this->dolzina / 30.48) * 1850;
    }
};

class MotColn : public Coln {
private:

    float moc;

public:

    MotColn() {}
    ~MotColn() {}
    MotColn(float dolzina, int steviloOseb, float moc) : Coln(dolzina, steviloOseb) {
        this->dolzina = dolzina;
        this->steviloOseb = steviloOseb;
        this->moc = moc;
    }

    virtual float getMoc() {
        return moc;
    }

    virtual void setMoc(float moc) {
        this->moc = moc;
    }
};

class Jadrnica : public Coln {
private:

    float povJader;

public:

    Jadrnica() {}
    ~Jadrnica() {}
    Jadrnica(float dolzina, int steviloOseb, float povJader) : Coln(dolzina, steviloOseb) {
        this->dolzina = dolzina;
        this->steviloOseb = steviloOseb;
        this->povJader = povJader;
    }

    virtual float getPovJader() {
        return povJader;
    }

    virtual void setPovJader(float povJader) {
        this->povJader = povJader;
    }
};

class MotornaJadrnica : public Jadrnica, public MotColn {
public:
    MotornaJadrnica() {}
    ~MotornaJadrnica() {}

};

class PotovalnaJadrnica : public MotornaJadrnica {
private:

    int steviloKabin;

public:

    PotovalnaJadrnica() {}
    ~PotovalnaJadrnica() {}


};

int main() {

    Coln a();
    a.izpis();

    MotColn b();
    b.izpis();

    Jadrnica c();
    c.izpis();

    MotornaJadrnica d();
    d.izpis();

    PotovalnaJadrnica e();
    e.izpis();

    return 0;

}