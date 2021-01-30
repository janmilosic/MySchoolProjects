#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;


void NapolniPolje(int p[], int d, int ra);

void IzpisiPolje(int p[], int d);

void Zamenjaj(int & a, int & b);

void Sortiranje(int p[], int d);

int main(int argc, char** argv) {

	srand(time(NULL));
    int dolzina;
    
    cout << "Vnesi velikost polja: ";
    cin >> dolzina;
    
    int polje[dolzina];

    NapolniPolje(polje, dolzina, 1000);
    cout << "Nesortirano polje: ";
    IzpisiPolje(polje,dolzina);
    Sortiranje(polje,dolzina);
    cout << "\nSortirano polje: ";
    IzpisiPolje(polje,dolzina);

    return 0;
}



void NapolniPolje(int p[], int d, int ra) { 
    for(int i=0; i < d; i++) p[i] = rand() % ra;
}



void IzpisiPolje(int p[], int d) {
    for(int i=0;i<d;i++) cout << p[i] << " ";
}



void Zamenjaj(int & a, int & b) {
    int temp = a;
    a = b;
    b = temp;
}



void Sortiranje(int p[], int d){
    for (int i=0; i < d; i++) {
        for(int j=i + 1 ; j < d; j++) if(p[i] > p[j]) Zamenjaj(p[i], p[j]);
    }
}





