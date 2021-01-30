#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

class Dijak{
private:
    string ime;
    string priimek;
    int st_dijaka;
    string razred;
    string emso;
    float teza;
    int visina;
    float bmi;
public:

    Dijak(){
        cout<<"To je prevzeti konstruktor"<<endl;
    }


    Dijak(string i, string p, int sd, string r, string emso){

        this->ime=i;
        this->priimek=p;
        this->razred=r;
        this->st_dijaka=sd;
        this->emso=emso;
    }

    Dijak(string ime, float teza, int visina, float bmi){
        this->ime=ime;
        this->teza=teza;
        this->visina=visina;
        this->bmi=0.0;
    }

    void setIme(string ime){
        this->ime=ime;
    }

    void setPriimek(string priimek){
        this->priimek=priimek;
    }

    void setbmi(float bmi){
        this->bmi=bmi;
    }

    string getPriimek(){
        return this->priimek;
    }

    string getRazred(){
        return this->razred;
    }

    int getst_dijaka(){
        return this->st_dijaka;
    }

    string getIme(){
        return this->ime;
    }

    string getemso(){
        return this->emso;
    }

    float getteza(){
        return this->teza;
    }

    int getvisina(){
        return this->visina;
    }

    float getbmi(){
        return this->bmi;
    }

    void VnosDijaka() {

        cout<<"Vnesi ime: "; cin >>ime;
        cout<<"Vnesi priimek: ";cin>>priimek;
        cout<<"Vnesi stevilko: ";cin>>st_dijaka;cin.ignore();
        cout<<"Vnesi razred: ";getline(cin,razred);
        cout<<"Vnesi emso: ";cin>>emso;
    }

    void IzpisDijaka(){
        cout << "Ime: " << this->ime << endl <<
             "Priimek: " << this->priimek << endl <<
             "stevilka: " << this->st_dijaka << endl <<
             "Razred: " << this->razred << endl <<
             "Emso: " << this->emso << endl;

    }
    void IzpisBmi(){
        cout << "Ime: " << ime << endl <<
             "teza: " << teza << endl <<
             "visina: " << visina << endl <<
             "bmi: " << bmi << endl;

    }
};

int main() {
    /*int a;
    Dijak b[10];
    Dijak * c=new Dijak();
    Dijak * d= new Dijak("Marko","skace",23,"3a","2245633788");
    c->VnosDijaka();
    d->IzpisDijaka();
	b.VnosDijaka();
    b[0].IzpisDijaka();


    delete c,d;
    */


    Dijak a;
    Dijak * b = new Dijak("Jan",70,177,0.0);
    b->setPriimek("Milosic");

    float bmi = 10000 * b-> getteza()  / (b->getvisina() * b-> getvisina());
    b-> setbmi(bmi);

    b->IzpisDijaka();
    b->IzpisBmi();
    return 0;
}