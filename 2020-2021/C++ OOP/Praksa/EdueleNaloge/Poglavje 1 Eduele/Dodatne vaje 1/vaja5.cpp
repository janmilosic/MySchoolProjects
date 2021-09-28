#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int a;
	
	cout << "Prosimo Vas da vpisete celo stevilo " ;
	cin >> a;
	cout << "Binarna stevilka = ";
	
	while(a>0){
		cout << a % 2 ;
		a = a / 2;
	}
	
	
	return 0;
}
