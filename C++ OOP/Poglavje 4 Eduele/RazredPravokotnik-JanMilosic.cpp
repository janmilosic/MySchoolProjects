#include <iostream>
#include <cmath>

using namespace std; 

float a,b; 
float obseg; 
float diagonala;

class Pravokotnik{ 
public:
 
void IzracunObseg(){

obseg=2*a+2*b; 
	
}
void IzracunDiagonale(){ 

diagonala= sqrt(pow(a,2)+pow(b,2)); 

}
void VnosStranic(){ 

cout<<"Stranica a :"<<endl; 
cin>>a; 
cout<<"Stranica b :"<<endl; 
cin>>b;


}

void PravokotnikIzpis(){
	
cout<<"Obseg: "<<obseg<<"cm"<<endl;
cout<<"Diagonala: "<<diagonala<<"cm"<<endl;
}

};

int main(int argc, char** argv) {
	
	Pravokotnik st1;  
	st1.VnosStranic();
	st1.IzracunObseg(); 
	st1.IzracunDiagonale(); 
	st1.PravokotnikIzpis();
	
	return 0;
}
