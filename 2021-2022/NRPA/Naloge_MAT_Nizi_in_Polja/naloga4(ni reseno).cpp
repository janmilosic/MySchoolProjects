#include <iostream>
#include <ctime>

using namespace std;

void urediPadajoce(){
    int stevilka;
    int polje[20];
    for(int i=0;i<20;i++){
        polje[i] = rand()%50;
        cout<<polje[i]<<" ";
    }
    for(int a = 0;a < 20;a++){
        for (int j = a + 1;j < 20;j++){
            if (polje[a] > polje[j]){
                int tmp;
                tmp  = polje[a];
                polje[a] = polje[j];
                polje[j] = tmp;
            }
        }
    }
    cout<<" "<<endl;
    cout<<"UREJENO: "<<endl;
    for(int i = 0;i < 20;i++)
        cout<<polje[i]<<" ";
}

int main(){
srand(time(NULL));
urediPadajoce();

    return 0;
}