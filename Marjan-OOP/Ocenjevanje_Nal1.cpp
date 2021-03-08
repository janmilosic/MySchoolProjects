#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;


struct Trikotnik{

private:
    
    float a;
    float b;
    float c;
    float s;

public:

    Trikotnik(){}

    Trikotnik(int a, int b, int c, float s)

    {
        this->a=a;
        this->b=b;
        this->c=c;
        this->s=s;
    }


    float GetA() const {
        return a;
    }

    void SetA(int a) {
        this->a = a;
    }

    float GetB() const {
        return b;
    }

    void SetB(int b) {
        this->b = b;
    }

    float GetC() const {
        return c;
    }

    void SetC(int c) {
        this->c = c;
    }

    void Vnos()

    {
        this->a = rand()%10+1;
        this->b = rand()%10+1;
        this->c = rand()%10+1;
        this->s = Ploscina();
    }


    void Izpis()

    {
        cout<<" Dolzina stranice a: "<< this-> a <<endl;
        cout<<" Dolzina stranice b: "<< this-> b <<endl;
        cout<<" Dolzina stranice c: "<< this-> c <<endl;
        cout<<" Velikost ploscine : "<< this-> s <<endl;
    }


    int Obseg()

    {
        int obseg;

        obseg = this->a + this->b + this->c; //matematicna formula

        return obseg;
    }


    float Ploscina()
    {
        float s = (this->a + this->b + this->c) / 2;

        return sqrt(s * (s - this->a) * (s - this->b) *(s - this->c) ); //obrazec za ploscino(google)
    }

};



int main(int argc, char** argv){

    srand(time(NULL));

    Trikotnik t[10];


    for(int i=0; i<10; i++)

    {
        t[i].Vnos();
    }


    for(int i=0; i<10; i++)

    {
        cout<< i+1 << "." <<endl;
        t[i].Izpis();
    }


    return 0;
}