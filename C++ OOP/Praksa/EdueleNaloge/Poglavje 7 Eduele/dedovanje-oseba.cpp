#include <cstdlib>
#include<iostream>

using namespace std;

class Oseba{
protected:
    string ime;
    string priimek;
    string emso;
    int starost;

public:

    Oseba() {
    }

    Oseba(string ime, string priimek, string emso, int starost) :
            ime(ime), priimek(priimek), emso(emso), starost(starost) {
    }


/*Oseba(string ime, string priimek, string emso, int starost){
this->ime=ime;
  }*/

    void Izpisi(){
        cout<< "Ime: " <<this->ime<<endl;
        cout<< "Priimek: " <<this->priimek<<endl;
        cout<< "Emso: " <<this->emso<<endl;
        cout<< "Starost: " <<this->starost<<endl;

    }

};

class Dijak: Oseba{

protected:
    string sola;
    string dij_izkaznica;


public:

    Dijak() :
            Oseba() {
    }

    Dijak(string sola, string dij_izkaznica) :
            sola(sola), dij_izkaznica(dij_izkaznica) {
    }

    Dijak(string ime, string priimek, string emso, int starost, string sola, string dij_izkaznica) :
            Oseba(ime, priimek, emso, starost), sola(sola), dij_izkaznica(dij_izkaznica) {
    }

    Dijak(Oseba o,string sola, string dij_izkaznica){
        this->sola=sola;
        this->dij_izkaznica=dij_izkaznica;

    }

    void Izpisi(){
        Oseba::Izpisi();
        cout << "Šola: " << this->sola <<endl;
        cout << "Dijaška izkaznica: " << this->dij_izkaznica <<endl;
    }

};

class Kosarkar : Oseba {

protected:
    string klub;
    string st_dres;

public:

    Kosarkar() : Oseba(){

    }

    Kosarkar(string ime, string priimek, string emso, int starost, string klub, string st_dres) :
    Oseba(ime, priimek, emso, starost), klub(klub), st_dres(st_dres){}

    void Izpisi(){

        Oseba::Izpisi();
        cout << "Klub: " << this->klub << endl;
        cout << "Dres: " << this->st_dres << endl;

    }

    const string &getKlub() const {
        return klub;
    }

    void setKlub(const string &klub) {
        Kosarkar::klub = klub;
    }

    const string &getStDres() const {
        return st_dres;
    }

    void setStDres(const string &stDres) {
        st_dres = stDres;
    }

};

int main(int argc, char** argv) {

/*
    Oseba o("Marko","Skace","253324623625645734",33);

    o.Izpisi();
*/
/*
    Dijak d("Miha", "Slep", "2707242132", 22, "Strojna", "13143");
    Dijak b(o, "Strojna", "13143");
    d.Izpisi();
*/

    Kosarkar k("Miha", "Slep", "2707242132", 22, "Drava", "12");
    k.Izpisi();

    return 0;
}