#include <iostream>
#include <cstdlib>

using namespace std;

void zamenjajZnake(char besedilo[])
{
    for(int i=0; besedilo[i]; i++){
        if(besedilo[i]=='a'||besedilo[i]=='e'||besedilo[i]=='i'||besedilo[i]=='o'||besedilo[i]=='u')
        {
            //  besedilo.replace(beseda);
        }
    }
}

string vnosBesede()
{
    string beseda;
    cout<<"Podaj besedo:" <<endl;
    cin>>beseda;

    return beseda;
}

int main() 
{
    string besedilo;

    cout<<"Podaj besedilo:" <<endl;
    cin>> besedilo;
    
    string beseda=vnosBesede();
    return 0;
}