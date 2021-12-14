#include <iostream>

using namespace std;

int main()
{

    int stevilo1, stevilo2, stevilo3;
    int najvecje = 0;

    cout<<"Podaj stevilo1: "<<endl;
    cin>>stevilo1;
    cout<<"Podaj stevilo2: "<<endl;
    cin>>stevilo2;
    cout<<"Podaj stevilo3: "<<endl;
    cin>>stevilo3;

    if (stevilo1 > stevilo2){
        najvecje=stevilo1;
    }
    if (stevilo2 > najvecje){
        najvecje=stevilo2;
    }
    if(stevilo3 > najvecje){
        najvecje=stevilo3;
    }

    cout << "Najvecje stevilo je: "<< najvecje <<endl;

    return 0;
}