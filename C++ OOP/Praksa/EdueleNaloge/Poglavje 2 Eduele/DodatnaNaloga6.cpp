#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    int pol[5];
    int p[2];
    for(int i=0;i<5;i++){
        pol[i]= 1 + rand()%51;
        cout<<"Dobitna stevilka je:  "<<pol[i]<<endl;
    }
    for(int i=0;i<2;i++){
        pol[i]= 1 + rand()%11;
        cout<<"Star stevilka je:  "<<pol[i]<<endl;
    }

    return 0;
}