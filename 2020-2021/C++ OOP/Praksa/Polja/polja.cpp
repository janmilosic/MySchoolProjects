#include <iostream>
#include<ctime>

using namespace std;

int Vsota(int a, int b, int c){

    int d;
    d= a + b + c;
    return d;

}

void Izpisi(int a){

    cout<< "To je a" << endl;

}

void test(int & o){
    o = o + 5;
}

void napolniPolje(int p[], int d, int nak){
    //vhod: polje celih stevil, dolzina polja, meja naključnega stevila

    for (int i = 0; i < d; i++)
    {
        p[i]=rand() % nak;
    }
    
}

void izpisiPolje(int pp[], int d){

    for(int i = 0; i< d; i++){
        cout << pp[i] << " ";
    }

    cout << endl;
}

int vsotaPolja(int p[], int d){

int vsota=0;
int max=0, min;
for(int i=0; i< d; i++){
vsota=vsota + p[i];

}

return vsota;

}

int maxpolja(int p[], int d){
        int max=0;

            for(int i=0;i<d;i++){
        if(max < p[i])max=p[i];

        }
        return max;
    }

        int minpolja(int p[], int d){
        int min=3000;
        for(int i=0;i<d;i++){
        if(min>p[i])min=p[i];
    }
        return min;
    }


int main(){

srand(time(NULL));
int dp;
cout << "Vnesi dolzino polja: "; cin >> dp;

int polje[dp];

napolniPolje(polje,dp,2000);

izpisiPolje(polje,dp);

cout << "Vsota polja je: " << vsotaPolja(polje,dp) <<endl;
cout << "max polja: " << maxpolja(polje,dp) <<endl;
cout << "min polja: " << minpolja <<(polje,dp) <<endl;

/*    
    int d=10, s=15, f=20;
    int aa =Vsota(s, d ,f);

    cout<< aa <<endl;

    Izpisi(s);
    int j=10;
    test(j);

    cout<< "j je: " <<  j <<endl;

*/

return 0;

}

