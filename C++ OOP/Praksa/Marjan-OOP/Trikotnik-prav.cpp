#include <cmath>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;



class Trikotnik{
   
private:
    int a,b,c;
    float s;
   
public:
    Trikotnik(){}

    const int &getA() const {
        return a;
    }

    void setA(const int &a) {
        Trikotnik::a = a;
    }
    const int &getB() const {
        return b;
    }

    void setB(const int &b) {
        Trikotnik::b = b;
    }
    const int &getC() const {
        return c;
    }

    void setC(const int &c) {
        Trikotnik::c = c;
    }
    const float &getS() const {
        return s;
    }

    void setS(const float &s) {
        Trikotnik::s = s;
    }

    Trikotnik(int a,int b,int c,int ploscina){
        this->a=a;
        this->b=b;
        this->c=c;
        s=ploscina;
    }

    void izpisTrikotnik(){
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        cout<<"c:"<<c<<endl;
        cout<<"ploscina:"<<s<<endl;
    }

    int Obseg(){
        int o=a+b+c;
        return o;

    }
    float Ploscina(){
        float s1 = (a + b + c) / 2;
        s = sqrt(s1 * (s1 - a) *  (s1 - b) * (s1 - c));
        return s;
    }

    void napolniTrikotnik(Trikotnik trik[], int i){
        for(int j=0;j<i;j++){
            trik[j].a= rand()%10+1;
            trik[j].b= rand()%10+1;
            trik[j].c= rand()%10+1;
            trik[j].s=Ploscina();
        }
    }

    Trikotnik najvecjaPloscina(Trikotnik t[], int dolzina){
        Trikotnik trikotnik;
        for(int i=0;i<dolzina;i++){
            for(int j=i+1; j<dolzina;j++){
                if(t[i].getS()<t[j].getS()){
                    trikotnik = t[i];
                    t[i]=t[j];
                    t[j]=trikotnik;
                }
            }
        }

    }
};


int main() {
    srand(time(NULL));
   
    Trikotnik trikotnik[10];
    Trikotnik trikotnik1;
   

    trikotnik1.napolniTrikotnik(trikotnik,10);
    trikotnik1.najvecjaPloscina(trikotnik,10);
   
   
    cout <<"Najvecji trikotnik ima ploscino: "<< trikotnik[0].getS() << "cm" << endl;

    return 0;
}