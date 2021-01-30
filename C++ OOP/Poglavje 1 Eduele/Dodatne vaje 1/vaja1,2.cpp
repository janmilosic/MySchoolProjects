#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	
	int a=0;
	
	while(a<10){
		a=a+1;
		cout << a << " " << a*a << " " << a*a*a << endl;
	}
	
	a=0;
	cout << "\n";
	
	do{
		a=a+1;
		cout << a << " " << a*a << " " << a*a*a << endl;
	}while(a<10);
	
	cout << "\n";
	
	for(a=1; a<=10; a++){
		cout << a << " " << a*a << " " << a*a*a << endl;
	}
	
	return 0;
}
