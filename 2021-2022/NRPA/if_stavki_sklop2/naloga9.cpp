#include <iostream>
using namespace std;

int main()
{

    float a, b, resitev;

    cout<<"Podaj vrednost a: "<<endl;
    cin>>a;
    cout<<"Podaj vrednost b: "<<endl;
    cin>>b;

    if (a<b){
        resitev = a + 2*b;
        cout<<"Rezultat za enacbo a<b je: "<<resitev<<endl;
    }else if (a>=b) {
        resitev = 2*a - 3*b;
        cout<<"Rezultat za enacbo a<=b je: "<<resitev<<endl;
    }

    return 0;

}