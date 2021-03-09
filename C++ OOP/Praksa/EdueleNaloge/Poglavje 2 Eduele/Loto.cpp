#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    int pol[8];
    for(int i=0;i<8;i++){
        pol[i]= 1 + rand()%39;
        cout<<"Dobitna številka :  "<<pol[i]<<endl;
    }

    return 0;
}