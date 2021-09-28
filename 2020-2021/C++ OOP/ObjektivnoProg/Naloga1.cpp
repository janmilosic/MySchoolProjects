#include <iostream>
using namespace std;


class/* struct*/ Dijak{

public:

    string ime;
    string priimek;
    int st_dijaka;
    string razred;
    string emso;
    //razred razred

public:
    //constructor //konstruktor

    Dijak(){
        cout<< "To je konstruktor" <<endl;
    }

    //kopirni konstruktor

    Dijak(string i, string p, int sd, string r, string emso){

        this->ime=i;
        this->priimek=p;
        this->razred=r;
        this->st_dijaka=sd;
        this->emso=emso;
    }

    void VnosDijaka(){
        cout << "Vnesi Ime: "; cin>>ime;
        cout << "Vnesi Priimek: ";getline(cin,priimek);
        cout << "Vnesi Stevilko dijaka: "; cin >> st_dijaka; cin.ignore();
        cout << "Vnesi Razred: ";getline(cin, razred);
        cout << "Vnesi Emso: ";getline(cin, emso);
    }

    void IzpisDijaka(){
        cout << "Ime: " << this->ime << endl <<
         "Priimek: " << this->priimek << endl <<
        "Stevilka dijaka: " << this->st_dijaka << endl <<
        "Razred: " << this->razred << endl <<
        "Emso: " << this->emso << endl;

    }
};


int main() {
    int a;
    cout << endl << sizeof(string) <<endl;
    Dijak b[10];
    cout << endl << sizeof(b) <<endl;
    Dijak * c= new Dijak();
    cout << endl << sizeof(c) <<endl;
    cout << endl << sizeof(*c) <<endl;
    Dijak * d= new Dijak("Marko","skace",23,"3a","2245633788");
    

    //c->VnosDijaka();
    d->IzpisDijaka();
    
    //b.st_dijaka= 2324;
    //b.VnosDijaka();
    b[0].IzpisDijaka();


    delete c,d;
    return 0;
}