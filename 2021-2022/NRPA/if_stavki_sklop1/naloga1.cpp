#include <iostream>
using namespace std;

int main()
{
    float st1, st2, vst, raz, pro, kol ;

    cout<<"Vnesi stevilo ena ";
    cin>> st1;
    cout<<"Vnesi stevilo dva ";
    cin>> st2;
    vst=st1+st2;
    cout<<"Vsota stevil je "<<vst<<endl;
    raz=st1-st2;
    cout<<"Razlika stevil je "<<raz<<endl;
    pro=st1*st2;
    cout<<"Produkt stevil je "<<pro<<endl;
    kol=st1/st2;
    cout<<"Kolicnik stevil je "<<kol<< endl;

    return 0;
}
