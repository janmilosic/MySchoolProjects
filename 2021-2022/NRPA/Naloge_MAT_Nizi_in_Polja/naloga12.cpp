#include <iostream>

using namespace std;

int dan, mesec;
int a;

void danVLetu(){

    if (mesec == 1){
        a = dan;
    } else if (mesec == 2){
        a = dan+31;
    } else if (mesec == 3){
        a = dan+59;
    } else if (mesec == 4){
        a = dan+90;
    } else if (mesec == 5){
        a = dan+120;
    } else if (mesec == 6){
        a = dan+151;
    } else if (mesec == 7){
        a = dan+181;
    } else if (mesec == 8){
        a = dan+212;
    } else if (mesec == 9){
        a = dan+243;
    } else if (mesec == 10){
        a = dan+273;
    } else if (mesec == 11){
        a = dan+304;
    } else if (mesec == 12){
        a = dan+334;
    }

}



int main() {

    cout << "Podaj dan (numericno): " <<endl;
    cin >> dan;
    cout << "Podaj mesec (numericno): " <<endl;
    cin >> mesec;

    danVLetu();

    cout << dan << "." << mesec << " je: " << a << " dan v letu" <<endl;

    return 0;
}