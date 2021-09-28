/*
 * Vaja :
 * Napišite program, ki preko tipkovnice sprejme celo število. Program naj poišče
 * vsoto vseh števk podanega števila največje in najmanjše števko števila ter
 * program obrne število, ki ga shraniš v spremenlivko.
 */

#include <cstdlib>
#include <iostream>


using namespace std;


int main(int argc, char** argv) {
    
    int st, nazaj = 0, ostanek, vsota = 0;
    int najmanj, najvec = 0;
    
    cout << "Podaj stevilo : ";
    cin >> st;
    
    for (; st != 0; st/= 10) {
    	ostanek = st % 10;
        if (ostanek <= najmanj) najmanj = ostanek;
        if (ostanek >= najvec) najvec = ostanek;
        vsota = ostanek + vsota;
    	nazaj = nazaj * 10 + ostanek;
    }
    
    cout << "Vsota števk : " << vsota << endl;
    cout << "Najmanjse : " << najmanj << endl;
    cout << "Najvecje : " << najvec << endl;
    cout << "Obratno : " << nazaj << endl;

    system("pause");
    
    return 0;
}

