#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float stevilo, prej_stevilo;

    cout<<"Podaj neko stevilo: "<<endl;
    cin>>prej_stevilo;

    stevilo = ceil(prej_stevilo);
    if (prej_stevilo<stevilo){
        cout<<"to je realno stevilo"<<endl;
    } else {
        cout<<"to je celo stevilo"<<endl;
    }

    return 0;
}