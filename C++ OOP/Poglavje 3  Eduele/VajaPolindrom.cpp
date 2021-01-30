#include <iostream>

using namespace std;
void IzbrisiPresledke(char besedilo[]){
    char besedilo2[256];
    unsigned short i, a=0;
    for(i = 0;besedilo[i]!='\0';i++){
        besedilo2[i]=besedilo[i];
    }
    for(i = 0;besedilo[i]!='\0';i++){
        if(besedilo2[i]!=' '){
            besedilo[a]=besedilo2[i];
            a++;
        }
    }
    besedilo[a]='\0';
}
void MaleCrke(char besedilo[]){
    for(unsigned short i=0;besedilo[i]!='\0';i++){
        if(besedilo[i]<97) besedilo[i]+=32;
    }
}
bool PreveriPalindrom(char besedilo[]){
    bool palindrom=true;
    unsigned short a,i=0;
    for(a=0;besedilo[a]!='\0';a++);
    a--;
    do{
        if(besedilo[i]!=besedilo[a]) palindrom=false;
        a--;
        i++;
    } while((palindrom==true)&&(besedilo[i]!='\0'));
    return palindrom;
}
int main()
{
    char besedilo[256];
    cout << "Vpisite palindrom: ";
    cin.getline(besedilo,256);
    IzbrisiPresledke(besedilo);
    MaleCrke(besedilo);
    if(PreveriPalindrom(besedilo)==true){
        cout << "Je palindrom";
    } else{
        cout << "Ni palindrom";
    }

    return 0;
}