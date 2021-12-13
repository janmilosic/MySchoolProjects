#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    const float pi = 3.14159265359;
    float ploscina, polmer;

    cout<<"Podaj ploscino kroga: "<<endl;
    cin>>ploscina;

    if (ploscina>0){

        polmer= sqrt(ploscina/pi);
        cout<<"Polmer: "<<polmer<<endl;

    } else{
        cout<<"Vnesena ploscina je nepravilna"<<endl;
    }

    return 0;
}