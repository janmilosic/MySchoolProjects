#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float x, resitev;

    cout<<"Podaj vrednost x: "<<endl;
    cin>>x;

    if (-5<x && x<5){
        resitev = x*x*x + 3;
        cout<<"Izracun enacbe kadar je -5<x<5: "<<resitev<<endl;
    }else {
        if (x<0){
          x = x*-1;
        }
        resitev = sqrt(x+9);
        cout<<"Izracun enacbe: "<<resitev<<endl;
    }

    return 0;

}