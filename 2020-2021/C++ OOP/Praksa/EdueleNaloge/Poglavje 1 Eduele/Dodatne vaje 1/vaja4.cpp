#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
		int st=356038, st2 = 0, st3 = 1, ost;
	
	
	while(st>0){
		ost = st % 10;
		st2 = st2 + ost;
		if(ost!=0){
			st3 = st3 * ost;
		}
		st = st / 10;
	}
	
	cout << "Vsota : " << st2 << endl;
	cout << "Produkt : " << st3;
	
	
	return 0;
}
