#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    int pol[7];
    for(int i=0;i<7;i++){
        pol[i]= 1 + rand()%39;
        cout<<"Dobitna stevilka je:  "<<pol[i]<<endl;
    }

    return 0;
}