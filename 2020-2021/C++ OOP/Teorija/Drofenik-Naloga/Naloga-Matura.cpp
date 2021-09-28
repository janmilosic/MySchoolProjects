//skupno delo Jan, Vito, Svarun

#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>

using namespace std;


class naselje{

	private:
		
		string naselje[5]={"Banovci","Vransko","Trbovlje","Most na Soci","Cemsenik"};//5 daj vun
		double povrsina[5]={2.64,3.1,10.232,1.57,2.28};
		string statInput, statRegija[5]={"Pomurska","Savinjska","Zasavska","Goriska","Zasavska"};
		int postnaSt[5]={9241,3305,1420,5216,1413};
		int x,y,m,desna,leva,st,stevec,j;
		
		
	public:
		//4.1
		void ena(){
			cout<<"Vpisi stevilo polja:"<<endl;
			cin>>x;
			cout<<"V tem polju je:"<<statRegija[x]<<endl;
			cout<<"Vpis novo statRegijo: "<<endl;
			cin>>statInput;
			statRegija[x]=statInput;
			cout<<"Vpisali ste: "<<statRegija[x]<<" v polje "<<x<<endl;
			for(int i=0;i<5;i++){
				cout<<statRegija[i]<<" | ";
			}
			cout<<endl;
		}
        //4.2
		int zanimivaVsotaStevk(int st){
			cout<<"Vpisi stiri mestno stevilo: "<<endl;
			cin>>st;
			desna=st%100;
			leva=st/100;
			return leva+desna;	
		}
		//4.3
		int kolikoZanimivihRegij(string statRegija[],int postnaSt[], double povrsina[], string naselje[]){
			for(x=0;x<5;x++){
				st=postnaSt[x];
						 if(zanimivaVsotaStevk(int st)>100){
							cout<<stevec<<endl;
						 }
				stevec++;		 
			}
			cout<<stevec<<endl;
		}
		//4.4
		void najvecjeNaselje(double povrsina[], string naselje[]){
				for(x=0;x<5;x++){
					if(povrsina[x]>y){
						y=povrsina[x];
					}
				}
				for(x=0;x<5;x++){
					if(povrsina[x]>m){
						m=povrsina[x];
					}	
				}		
		}

};


int main(){

	naselje ptuj;

	ptuj.ena();
	cout<<ptuj.zanimivaVsotaStevk();
	cout<<ptuj.kolikoZanimivihRegij();
	cout<<ptuj.najvecjeNaselje(povrsina[], naselje[]);
return 0;
}
