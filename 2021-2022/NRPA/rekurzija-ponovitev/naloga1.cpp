#include <iostream>

using namespace std;

int i;
int b=1;
int a=i;
int j=1;

void fakulteta(){
    if(j<i+1){
        b=b*j;
        j++;
        fakulteta();
    }
}

int main(){

    cout<<"Podaj setvilo: "<<endl;
    cin>>i;

    fakulteta();

    cout<<"Fakulteta: "<<b<<endl;

    return 0;
}