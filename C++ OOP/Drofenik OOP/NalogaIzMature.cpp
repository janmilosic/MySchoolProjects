#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>

using namespace std;

class naselje{
    private:
        string naselje[5]={"Banovci","Vransko","Trbovlje","Most na Soci","Cemsenik"};
        string statInput, statRegija[5]={"Pomurska","Savinjska","Zasavska","Goriska","Zasavska"};
        int postnaSt[5]={9241,3305,1420,5216,1413};
        double povrsina[5]={2.64,3.1,10.232,1.57,2.28};
        int x;
        int y,desna,leva = 0;

    public:

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

        int zanimivaVsotaStevk(){
            cout<<"Vpisi stiri mestno stevilo: " <<endl;
            cin >> y;
            desna = y % 100;
            leva= y / 100;
            
            return leva + desna;
        }
/*
        int kolikoZanimivihRegij(string imeRegije, Baje baje[]) {
        int koliko;
            for (int i = 0; i != 10; i++)
                if (baje[i].statRegija == imeRegije && zanimivaVsotaStevk(baje[i].postnaSt) > 100)
            koliko++;

        return koliko;
}
*/
        void najvecjeNaselje(){

        }
        
};

int main(){

    naselje ptuj;

    ptuj.ena();
    cout<<ptuj.zanimivaVsotaStevk();
    //cout<<ptuj.kolikoZanimivihRegij();
    return 0;
}
