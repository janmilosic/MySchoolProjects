#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int stevilo;

    cout<<"Podaj celo stevilo: ";
    cin>>stevilo;

    if (stevilo % 3 == 0 || stevilo % 5 == 0 ){
        cout<<"Podano stevilo je veckratnik stevila 3 ali 5";
    } else {
        cout<<"Podano stevilo ni veckratnik stevila 3 ali 5";
    }

    return 0;
}