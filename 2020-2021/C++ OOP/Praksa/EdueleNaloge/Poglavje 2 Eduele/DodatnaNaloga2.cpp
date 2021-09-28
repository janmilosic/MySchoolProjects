#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    int pol[30];
    int a=0;
    for(int i=0;i<30;i++){
        pol[i]=rand()%71;
        cout<<pol[i]<<endl;
        if(pol[i]%2!=0){
            a+=pol[i];
        }
    }
    cout<<"Sestevek vseh lihih stevil je: "<<a<<endl;

    return 0;
    }