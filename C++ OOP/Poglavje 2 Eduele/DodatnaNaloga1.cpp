#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int a=0;
    srand(time(NULL));
    int pol[30];
    for(int i=0;i<30;i++){

    pol[i]=rand()%500;
    cout<<pol[i]<<endl;
        a+=pol[i];
        }
    cout<<"Vsota vseh zgornjih števk je: "<<a<<endl;
    
    return 0;
}