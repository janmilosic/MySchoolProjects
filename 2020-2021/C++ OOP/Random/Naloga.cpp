/* Napišite funkcijo ki kot argument sprejme besedilo. Funkcija naj razvrsti znake v besedilu od a - z.
 Funkcijio prreizkusite v glavnem programu */

#include <iostream>
using namespace std;

void zamenjaj(char &a, char &b){
    int temp = a;
    a = b;
    b = temp;
}
 
 /*
void RazvrstiZnake(char niz[]){
    for(int i=0; niz[i] != '\0'; i++){
        for(int j = i + 1; niz[j] != '\0'; j++){
            if(niz[i] > niz[j]){
                zamenjaj(niz[i], & niz[j]);
            }
        }
    }
}

void Izpis(char niz[]){
    for (int i = 0; niz[i] != '\0'; i++) {
    cout << niz[i];
}

int main(int argc, char** argv){

    char pol[]= "Lepo je biti mlad";
    RazvrstiZnake(pol);

    return 0;
}

*/