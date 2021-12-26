#include <iostream>

using namespace std;

int i;
int a=1;
int b=0;
int c=0;
int j=0;
void fibbo(){
    if (j<i){
        c=a+b;
        b=a;
        a=c;
        cout<<c<<", ";
        j++;
        fibbo();
    }
}

int main(){

    cout<<"Podaj koliko fibonacijevih stevil zelis izpisat: "<<endl;
    cin>>i;

    fibbo();

    return 0;
}