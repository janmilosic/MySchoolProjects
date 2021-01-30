
/* 
NALOGA 1: Napiši program, ki izračuna in izpiše vrednosti funkcije f(x)= 1/x na intervalu [-10,10]
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    float y;
    for(int x=-10;x<11;x++){

    y= 1.0/( x);
    cout<<"ce je x="<<x<<"je f="<<y<<endl;
}

    return 0;
}