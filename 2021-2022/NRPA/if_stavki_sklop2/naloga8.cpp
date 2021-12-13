#include <iostream>
using namespace std;

int main()
{

    float stevilo, rezultat;

    cout<<"Podaj neko stevilo: "<<endl;
    cin>>stevilo;

    if (stevilo<0){
        rezultat = stevilo +(-1);
        cout<<"Rezultat: "<<rezultat<<endl;
    }else if (stevilo>0){
        rezultat = stevilo + 1;
        cout<<"Rezultat: "<<rezultat<<endl;
    }else {
        cout<<"stevilo je enako 0"<<endl;
    }

    return 0;
}
