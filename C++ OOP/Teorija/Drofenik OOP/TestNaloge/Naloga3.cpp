/*
NALOGA 3:
*/

#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"Vpisi stevilo: ";
    cin>>n;
    if(n>0){
        if(n%2==0){
        cout<<n<<endl;
        }
        else{
            cout<<n+1;
        }
    }
    else{
        cout<<2;
    }
    return 0;
}
