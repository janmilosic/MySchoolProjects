#include <iostream>
using namespace std;

int main()
{

    int stevilo1, stevilo2, rezultat;

    cout<<"Podaj prvo stevilo: ";
    cin>>stevilo1;
    cout<<"Podaj drugo stevilo: ";
    cin>>stevilo2;

    if (stevilo1<stevilo2){
        rezultat=stevilo1-stevilo2;
        cout<<rezultat;

    } else if (stevilo2<stevilo1){
        rezultat=stevilo2-stevilo1;
        cout<<rezultat;
    }

    return 0;
}