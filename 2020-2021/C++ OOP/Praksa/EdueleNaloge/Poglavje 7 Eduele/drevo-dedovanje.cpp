/*
napiši razred drevo z lastnostmi : starostDrevesa, vrsta, visina drevesa. podeduj razred drevo v razred 
hruska, ki ima lastnosti sadezi izracunaj z visono drevesa vsakih 20 cm dodatne 3kg sadezev
*/

#include <iostream>
#include <cstdlib>

using namespace std;

class Drevo{

protected:
    int starostDrevesa;
    int visinaDrevesa;
    string vrstaDrevesa;
    
public:
    Drevo(int starostDrevesa,string vrstaDrevesa, int visinaDrevesa) :
    starostDrevesa(starostDrevesa), vrstaDrevesa(vrstaDrevesa),visinaDrevesa(visinaDrevesa) {
    }

    int getstarostDrevesa() const {
        return starostDrevesa;
    }
    void setstarostDrevesa(int starostDrevesa){
        this->starostDrevesa=starostDrevesa;
    }
    string getvrstaDrevesa() const {
        return vrstaDrevesa;
    }
    void setvrstaDrevesa(string vrstaDrevesa){
        this->vrstaDrevesa=vrstaDrevesa;
    }
    int getvisinaDrevesa() const {
        return visinaDrevesa;
    }
    void setvisinaDrevesa(int visinaDrevesa){
        this->visinaDrevesa=visinaDrevesa;
    }

    void izpis(){

        cout<<"---------------------------------"<<endl;
        cout<<"Starost drevesa: "<<this->starostDrevesa << "let" <<endl;
        cout<<"Vrsta drevesa: "<<this->vrstaDrevesa <<endl;
        cout<<"Visina drevesa: "<<this->visinaDrevesa << "m" <<endl;
    }
};

class Hruska : Drevo{

private:
    int sadezi;

public:
    Hruska(int starostDrevesa,string vrstaDrevesa, int visinaDrevesa) :
    Drevo(starostDrevesa,vrstaDrevesa, visinaDrevesa), sadezi(sadezi) {
    }

    int GetSadezi() const {
        return sadezi;
    }

    void SetSadezi(int moc_motorja) {
        this->sadezi = sadezi ;
    }
        void izpis(){
        Drevo::izpis();
        cout<<"Sadezi:"<<(visinaDrevesa/20)*3 << "kg" <<endl<<endl;
    }


};
int main(int argc, char** argv) {

    Drevo a(12,"Jonagold",60);
    a.izpis();

    Hruska b(6,"Viljamovka",80);
    b.izpis();


    return 0;
}