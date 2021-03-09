#include <iostream>
#include <math.h>
using namespace std;

float Nicle(int a, int b, int c){
    return (-b+sqrt(b*b-4*a*c))/(2*a);
}
float Nicle2(int a, int b, int c){
    return (-b-sqrt(b*b-4*a*c))/(2*a);
}
float Teme_p(int a, int b, int c){
    return -((b)/(2*a));
}
float Teme_q(int a, int b, int c){
    return -((b*b-4*a*c)/(4*a));
}
int main()
{
    int a, b, c;
    cout << "Vnesite a: ";
    cin >> a;
    cout << "Vnesite b: ";
    cin >> b;
    cout << "Vnesite c: ";
    cin >> c;
    cout << "x1: " << Nicle(a,b,c);
    cout << "\nx2: " << Nicle2(a,b,c);
    cout << "\np: " << Teme_p(a,b,c);
    cout << "\nq: " << Teme_q(a,b,c);
    cout << "\nPresečišče: " << a;
    return 0;
}