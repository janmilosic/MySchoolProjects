#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class Coln{

protected:

    int dolzina;
    int nosilnost;

public:

    Coln(int dolzina, int nosilnost) :
    dolzina(dolzina), nosilnost(nosilnost) {
    }

    int GetDolzina() const {
        return dolzina;
    }

    void SetDolzina(int dolzina) {
        this->dolzina = dolzina;
    }

    int GetNosilnost() const {
        return nosilnost;
    }

    void SetNosilnost(int nosilnost) {
        this->nosilnost = nosilnost;
    }
    int teoreticnaHitrostTrupa(){
        return sqrt(this->dolzina)*1,34;
    }
    
    void izpis(){
        cout<<"Dolzina colna: "<<this->dolzina<<endl;
        cout<<"Nosilnost colna: "<<this->nosilnost<<endl;
}

};

class motorni_coln : Coln{

private:
    int mocMotorja;

public:
	motorni_coln(int dolzina, int nosilnost,int mocMotorja) :
    Coln(dolzina, nosilnost), mocMotorja(mocMotorja) {
    }
    
    int GetmocMotorja() const {
        return mocMotorja;
    }

    void SetmocMotorja(int mocMotorja) {
        this->mocMotorja = mocMotorja;
    }
    
    void izpis(){
        Coln::izpis();
        cout<<"Moc motorja:"<<this->mocMotorja<<endl;
    } 
};

class Jadrnica:Coln{
private:
	int povrsinaJader;  
public:
	Jadrnica(int dolzina, int nosilnost,int poversina_jader) :
    Coln(dolzina, nosilnost), povrsinaJader(povrsinaJader) {
    }
	
	int GetpovrsinaJader() const {
        return povrsinaJader;
    }

    void SetpovrsinaJader(int povrsinaJader) {
        this->povrsinaJader = povrsinaJader;
    }
	
	void izpis(){
        Coln::izpis();
        cout<<"Povrsina jader:"<<this->povrsinaJader<<endl;
    }	  
};

int main(int argc, char** argv) {

	Coln a (23,12);
    a.izpis();
    
    motorni_coln b (12,8,50);
    b.izpis();
    
    Jadrnica c (14,6,10);
    c.izpis();

    return 0;
}