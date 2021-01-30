#include <iostream>

/* 
NAVODILO:
1. Vnos podatkov o sošolcih (ime, priimek, email, gsm, nickname, starost, razred)- namig- ustvari polje 29 struktur dijakov
2. Izpis vrednosti dijakov po priimku
*/

using namespace std;

struct dijak{                                       //definira podatkovvni tip(doda strukturo dijak)
    string ime;         
    string priimek;
    string email;
    string GSM;                                     //string- vnesemlo lahko črke in številke (podatkovni tip)
    string nickname;
    int starost;
    string razred;
};

//dijak polje[29];

void Polni(dijak polje[], int st){                  //funkcija z imenom polni
    for(int i=0; i<st; i++){                        //for zanka 
    cout<<"Ime: ";
    cin>>polje[i].ime;
    cout<<"Priimek: ";
    cin>>polje[i].priimek;
    cout<<"GSM: ";
    cin>>polje[i].GSM;
    cout<<"Email: ";
    cin>>polje[i].email;                            //sprašujemo in vpisujemo
    cout<<"Nickname: ";
    cin>>polje[i].nickname;
    cout<<"Starost: ";
    cin>>polje[i].starost;
    cout<<"Razred: ";
    cin>>polje[i].razred;
    system ("cls");                                 //izbriše celo stran 
    }
}

void Izpisi(dijak polje[], int st){                 //funkcija z imenom izpiši
    for(int i=0; i<st; i++){                        //for zanka 
        if(i!=0){                                   //zanka 
            cout<<endl;
        }

    cout<<i+1<<". Dijak"<<endl; 
    cout<<"Ime: "<<polje[i].ime<<endl;
    cout<<"Priimek: "<<polje[i].priimek<<endl;
    cout<<"GSM: "<<polje[i].GSM<<endl;
    cout<<"Email: "<<polje[i].email<<endl;           //izpisujemo naše odgovore
    cout<<"Nickname: "<<polje[i].nickname<<endl;
    cout<<"Starost: "<<polje[i].starost<<endl;
    cout<<"Razred: "<<polje[i].razred<<endl;
}
}

int main(int argc, char** argv) {                   //main funkcija (osnovna funkcija)

    //Koliko je dijakov v razredu
    //Polni(stevilodij);
    //Izpisi(stevilodij);
    int st;                 
    cout<<"Koliko dijakov zelite vnesti: ";
    cin>>st;
    system ("cls");                                //izbriše celo stran
    dijak dijak[st];                               //ustvariš polje dijak 
    Polni(dijak, st);                              //kličemo funkcijo Polni
    Izpisi(dijak, st);                             //kličemo funkcijo Izpisi

    return 0;
}