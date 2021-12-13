#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float x, resitev;

    cout<<"Podaj vrednost x: "<<endl;
    cin>>x;


    if (x<0){
        resitev = x*x;
        cout<<"Rezultat za enacbo x>0 je: "<<resitev<<endl;
    }else if (x>0){
        resitev = sqrt(x);
        cout<<"Rezultat za enacbo sqrt(x)  je: "<<resitev<<endl;
    }else {
        cout<<"x ima vrednost 0"<<endl;
    }

    return 0;

}