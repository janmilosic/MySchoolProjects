#include <iostream>
#include <cstdlib>
#include <cmath>
#include <time.h>
using namespace std;


struct Pravokotnik{
    private:
        int a;
        int b;

    public:
        Pravokotnik(){
            this->a=1;
            this->b=2;
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
            cout<<"stranica a= "<<this->a<<endl;
            cout<<"stranica b= "<<this->b<<endl;
        }
        int Ploscina(){
            return this->a*this->b;
        }
        int Ploscina(int a, int b){
            return a*b;
        }
        int Obseg(){
            return 2*this->a + 2*this->b;
        }
        int Obseg(int a, int b){
            return 2*a + 2*b;
        }
        float Diagonala(){
            return sqrt(this->a*this->a + this->b*this->b);
        }
        float Diagonala(int a, int b){
            return sqrt(a*a + b*b);
        }

        void NakljucnoDodajStranice(){
        this->a=rand()%30;
        this->b=rand()%20;
    }

    Pravokotnik VrniNajStranicoB(Pravokotnik pp[], int d){
        int maxb=pp[0].b;
        int index;
        for (int i = 0; i < d; i++) {
            if (pp[i].b > maxb) {
                maxb == pp[i].b;
                index=i;
            }
        }
        return pp[index];
    }

    Pravokotnik NakljucnoDodajPravokotnik(){
        Pravokotnik n;
        n.a = rand() % 80;
        n.b = rand() % 80;
        return n;
    }

};

int main(){

    srand(time(NULL));


 /*   Pravokotnik prvi;
    Pravokotnik drugi(2);
    Pravokotnik tretji(2,4);

    prvi.IzpisiDolzinoStranic();
    drugi.IzpisiDolzinoStranic();
    tretji.IzpisiDolzinoStranic();

    cout<<"1.obseg je: "<<prvi.Obseg()<<endl;
    cout<<"2.obseg je: "<<drugi.Obseg()<<endl;
    cout<<"3.obseg je: "<<tretji.Obseg()<<endl;

    cout<<"1.ploscina je: "<<prvi.Ploscina()<<endl;
    cout<<"2.ploscina je: "<<drugi.Ploscina()<<endl;
    cout<<"3.ploscina je: "<<tretji.Ploscina()<<endl;

    cout<<"1.diagonala je: "<<prvi.Diagonala()<<endl;
    cout<<"2.diagonala je: "<<drugi.Diagonala()<<endl;
    cout<<"3.diagonala je: "<<tretji.Diagonala()<<endl;
*/

    Pravokotnik p[10];

    for(int i=0;i<10;i++){
        p[i].NakljucnoDodajStranice();
    }

    for(int i=0;i<10;i++){
        cout <<i+1<<". pravokotnik: "<<endl;
        p[i].IzpisiDolzinoStranic();
    }

    Pravokotnik naj;
    naj=naj.VrniNajStranicoB(p,10);
    cout<<"Najvecji b stranica je v pravokotniku: "<<endl;

    naj.IzpisiDolzinoStranic();



return 0;
}