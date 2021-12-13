#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int stevilo1, stevilo2;

    cout<<"Podaj prvo celo stevilo: ";
    cin>>stevilo1;
    cout<<"Podaj drugo celo stevilo: ";
    cin>>stevilo2;

    if (stevilo1<stevilo2){
        cout<<"Vecje je drugo stevilo"<<endl;
    } else if (stevilo2<stevilo1){
        cout<<"Vecje je prvo stevilo"<<endl;
    } else if (stevilo2==stevilo1){
        cout<<"Stevili sta enaki"<<endl;
    }

    return 0;
}