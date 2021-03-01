#include <iostream>
using namespace std;

class Skoki {

private:
    int stevilka_tekmovalca;
    float dolzina_skoka;
    float ocene[5];
    float vetrna_izdravnava;
    float izdrnava_zaletisca;
    float kalkulacijska_razdalja;

public:
    Skoki() {}

    void stevilkaTekomalca(int stevilka)  {
        this->stevilka_tekmovalca = stevilka;
    }

    void dolzinaSkoka(float dolzina) {
        this->dolzina_skoka = dolzina;
    }

    void nastaviOcene(float ocena1, float ocena2, float ocena3, float ocena4, float ocena5) {
        this->ocene[0] = ocena1;
        this->ocene[1] = ocena2;
        this->ocene[2] = ocena3;
        this->ocene[3] = ocena4;
        this->ocene[4] = ocena5;
    }

    void nastaviVetrnoIzdravnava(float stevilka) {
        this->vetrna_izdravnava = stevilka;
    }

    void nastaviIzdravnavoZaletisca(float stevilka) {
        this->izdrnava_zaletisca = stevilka;
    }

    void nastaviKalkulacijskoRazdaljo(float stevilka) {
        this->kalkulacijska_razdalja = stevilka;
    }

    float vrniSkupneTocke(float razdalja) {
        return vrniTockeZaRazdaljo(razdalja) + vrniSestevekOcen() + this->vetrna_izdravnava + this->izdrnava_zaletisca;
    }

    float vrniTockeZaRazdaljo(float razdalja) {
        if (razdalja > this->kalkulacijska_razdalja)
            return 60 + (razdalja - this->kalkulacijska_razdalja) * 2;

        return 60 - (this->kalkulacijska_razdalja - razdalja) * 2;
    }

    float vrniSestevekOcen() {
        for (int i = 0; i < 5; i++)
            for (int j = i + 1; j < 5; j++)
                if (this->ocene[i] > this->ocene[j]) zamenjaj(this->ocene[i], this->ocene[j]);

        return this->ocene[1] + this->ocene[2] + this->ocene[3];
    }

    void zamenjaj(float & ocena1, float & ocena2) {
        float temp = ocena1;
        ocena1 = ocena2;
        ocena2 = temp;
    }


};

int main() {


    Skoki *skoki = new Skoki;

    skoki->nastaviKalkulacijskoRazdaljo(90);

    cout << skoki->vrniSkupneTocke(87);


    return 0;
}