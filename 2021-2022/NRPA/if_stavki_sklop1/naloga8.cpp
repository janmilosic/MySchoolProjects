#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int stevilka = 0;
    int prava_stevilka = 42355123;

    cout<<"Vpisite vaso bancno stevilk: ";
    cin>>stevilka;

    if (stevilka==prava_stevilka){
        cout<<"DVIG DOVOLJEN";
    } else{
        cout<<"NAPACNA STEVILKA";
    }

    return 0;
}
