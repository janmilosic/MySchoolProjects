#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

class Stavba{
	private:
		int dolzina;
		int sirina;
		int visina;
		string bar_fasade;
		string obl_strehe;
		int st_prebivalcev;
		string naslov;
	public:
		Stavba(){
		}	
		Stavba(int d,int s,int v,string b,string o,int p,string n){
        	this->dolzina=d;
        	this->sirina=s;
        	this->visina=v;
        	this->bar_fasade=b;
        	this->obl_strehe=o;
        	this->st_prebivalcev=p;
        	this->naslov=n;
    	}
    	void setDolzina(int dolzina){
    	this->dolzina=dolzina;
		}
		void setSirina(int sirina){
    	this->sirina=sirina;
		}
		void setVisina(int visina){
    	this->visina=visina;
		}
		void setBar_fasade(string bar_fasade){
    	this->bar_fasade=bar_fasade;
		}
		void setObl_strehe(string obl_strehe){
    	this->obl_strehe=obl_strehe;
		}
		void setSt_prebivalcev(int st_prebivalcev){
    	this->st_prebivalcev=st_prebivalcev;
		}
		void setNaslov(string naslov){
    	this->naslov=naslov;
		}
		int getDolzina(int dolzina){
    	return this->dolzina;
		}
		int getSirina(int sirina){
    	return this->sirina;
		}
		int getVisina(int visina){
    	return this->visina;
		}
		string getBar_fasade(string bar_fasade){
    	return this->bar_fasade;
		}
		string getObl_strehe(string obl_strehe){
    	return this->obl_strehe;
		}
		int getSt_prebivalcev(int st_prebivalcev){
    	return this->st_prebivalcev;
		}
		string getNaslov(string naslov){
    	return this->naslov;
		}
		float Prostornina(){
			return (dolzina * sirina * visina);
		}
		float Povrsina(){
			return ((2 * dolzina * sirina + 2 * dolzina * visina + 2 * sirina * visina)/st_prebivalcev);
		}
		void NakljucniPodatki(){
    	this->dolzina=1+rand()%40;
    	this->sirina=1+rand()%40;
    	this->visina=1+rand()%20;
    	this->st_prebivalcev=1+rand()%15;
		}
		void IzpisiPodatke(){
		cout << "Dolzina: " <<this->dolzina <<"m"<< endl;
        cout << "Sirina: " <<this->sirina <<"m"<< endl;
		cout << "Visina: " <<this->visina <<"m"<< endl;	
		cout << "Stevilo prebivalcev :"<<this->st_prebivalcev << endl;
		cout << "Prostornina: "<<this->Prostornina()<<"m3"<<endl;
		cout << "Povrsina: "<<this->Povrsina()<<"m2"<<endl;
		cout << "Barva fasade: "<<this->barva()<<endl;
		}
		string barva(){
			string bar_fasade[10]={"modra","rdeca","bela","rumena","rjava","zelena","roza","vijolcna","oranzna","temnomodra"};
			int nak=rand()%10;
			return bar_fasade[nak];
		}
};

int main(){
	srand(time(NULL));
	int i=0;
	int a=0;
Stavba p[20];
   while(i<20){
   	srand(time(NULL));
   	p[i].NakljucniPodatki();
	   cout<<a<<endl;
   	p[i].IzpisiPodatke();
    a++;   	
    i++;
   } 

return 0;
} 