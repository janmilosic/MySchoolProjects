#include <iostream>
#include <cmath>
using namespace std;

class Pravokotnik{

private:
    int a;
    int b;

public:
    Pravokotnik(){
        this->a=1;
        this->b=1;
    }

    Pravokotnik(int p){
        this->a=p;
        this->b=p;
    }

    Pravokotnik(int p, int d){
        this->a=p;
        this->b=d;
    }

    void IzpisiDolzinoStranic(){
        cout << "To je stranica a: " <<this->a << endl;
        cout << "To je stranica b: " <<this->b << endl;
    }

    int Ploscina(){
        return this->a * this->b;
    }

    int Ploscina(int q, int w){
        return q * w;
    }

    int Obseg(){
        return 2* this->a + 2* this->b;
    }

    int Obseg(int r, int t){
        return 2* r + 2* t;
    }

    float Diagonala(){
        return sqrt(this->a*this->a + this->b*this->b);
    }

    float Diagonala(float n, float m){
        return sqrt(n*n + m*m);
    }

};

int main() {

    Pravokotnik prvi(1);
    Pravokotnik drugi(2);
    Pravokotnik tretji(2,4);

    prvi.IzpisiDolzinoStranic();
    drugi.IzpisiDolzinoStranic();
    tretji.IzpisiDolzinoStranic();

    cout << "1. obseg je: " << prvi.Obseg() << endl;
    cout << "2. obseg je: " << drugi.Obseg() << endl;
    cout << "3. obseg je: " << tretji.Obseg() << endl;

    cout << "1. ploscina je:" << prvi.Ploscina() << endl;
    cout << "2. ploscina je:" << drugi.Ploscina() << endl;
    cout << "3. ploscina je:" << tretji.Ploscina() << endl;

    cout << "1. diagonala je:" << prvi.Diagonala() << endl;
    cout << "2. diagonala je:" << drugi.Diagonala() << endl;
    cout << "3. diagonala je:" << tretji.Diagonala() << endl;


    return 0;
}