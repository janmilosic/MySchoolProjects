#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    char pol[100];
    int a=0;
    int j=0;
    cin.getline(pol,100);
    for(int i=0;pol[i]!='\0';i++){

    if(pol[i]=='a'|pol[i]=='i'| pol[i]=='e'|pol[i]=='o'|pol[i]=='u'){
        a++;
      cout<<pol[i]<<" ";

     }
     j=i;
    }

    cout<<"\n Stevilo samoglasnikov : "<<a<<endl;
    for(int i=0;j>=0;i++)
        cout<<pol[j--];
    return 0;
    }