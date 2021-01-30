/*Navodilo:
Naključno napolnite polje 500 števil. Polje uredite od najmanjpega števila do največjega in poiščite oziroma izpišite mediano polja.
*/

#include <iostream>
#include <ctime>

using namespace std;

void izpisipolje (int p[], int d){

    for(int i=0; i<d; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
void SortirajPolje (int p[], int  d){

    for(int i=0; i < d; i++){
        for(int j=i+1; j<d; j++){
            if(p[i] > p[j]){
                int tmp = p[i];
                p[i] = p[j];
                p[j] = tmp; 
}
    }
        }

}
int main(){
    srand(time(NULL));
    int pol[500];
    for(int i=0;i<500;i++){
        pol[i]=rand()%500;

}
    SortirajPolje(pol,500);
    izpisipolje(pol,500);
    cout<<endl;
    cout<<"1.mediana "<<pol[248]<<endl;
    cout<<"2.mediana "<<pol[249]<<endl;
    return 0;
}