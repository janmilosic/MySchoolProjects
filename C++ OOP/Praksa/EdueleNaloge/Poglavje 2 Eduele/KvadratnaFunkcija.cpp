#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int a,b,c;
    float x=-10.0, y=0;

    cout << "Kvadratna funkcija"<< endl;
    cout << "Vpiši koeficient a : " ;
    cin >> a;
    cout << "Vpiši koeficient b : " ;
    cin >> b;
    cout << "Vpiši koeficient c : " ;
    cin >> c;

    while(x<=10){
        y=a*x*x+b*x+c;
        cout << "|" << x << "|\t" << y << endl;
        x += 0.5;
    }


    return 0;
}