#include <iostream>

using namespace std;

int main() {

   float stevilo1, stevilo2, rezultat;
   char operacija;

    cout << "Vnesite prvo stevilo: " <<endl;
    cin>>stevilo1;
    cout << "Vnesite drugo stevilo: " <<endl;
    cin>>stevilo2;
    cout << "Vnesite racunsko operacijo (+,-,/,*): " <<endl;
    cin>>operacija;

    if (operacija == '+'){
        rezultat= stevilo1 + stevilo2;
        cout << "Rezultat sestevanja je: "<< rezultat <<endl;
    } else if (operacija == '-'){
        rezultat= stevilo1 - stevilo2;
        cout << "Rezultat odstevanja je: "<< rezultat <<endl;
    } else if (operacija == '*'){
        rezultat= stevilo1 * stevilo2;
        cout << "Rezultat mnozenja je: "<< rezultat <<endl;
    } else if (operacija == '/'){
        rezultat= stevilo1 / stevilo2;
        cout << "Rezultat deljenja je: "<< rezultat <<endl;
    }


    return 0;

}