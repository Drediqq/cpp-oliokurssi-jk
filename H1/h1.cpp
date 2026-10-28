#include <iomanip>
#include <iostream>
#include <stdexcept>
#include "funcs.h"

using namespace std;



int main() {
	int a;
	int b;
	int op;
	float divres;
	int sumres;
	int status = 1;
	
	// pyöritetään looppia kunnes käyttäjä vastaa viimeiseen kysymykseen 0
	while(status != 0){
		
		// kysellään numeroita käyttäjältä ja tallennetaan ne muuttujiin
		cout << "Anna luku:" << endl << ">";
		cin >> a;
		
		cout << "Anna toinen luku:" << endl << ">";
		cin >> b;
		
		cout << "Mitä tehdään?" << endl << "calcSum = 1, calcDiv = 2, retSum = 3, retDiv = 4:" << endl << ">";
		cin >> op;
		
		cout << endl;
		
		// kutsutaan käyttäjän pyytämää funktiota, funktiot löytyvät "funcs.cpp" tiedostosta
		switch(op){
			case 1:
			
				calcSum(a, b);
				break;
			
			case 2:
			
				calcDiv(a, b);
				break;
			
			case 3:
			
				sumres = retSum(a,b);
				cout << "Palautettu summa: " << a << "+" << b << " = " << sumres << endl;
				break;
			
			case 4:
			
				try{
					
					if((a == 0) | (b == 0)){

						throw runtime_error("ei voi olla nolla");

					}

					divres = retDiv(a,b);
					cout << "Palautettu jako: " << fixed << setprecision(2) << a << "/" << b << " = " << divres << endl;
				
				} catch(runtime_error& e){
				
					cout << "Error: " << e.what() << endl;
				
				}
			
				break;
			
		}
		
		cout << endl << "Mitäs sitten tehdään?" << endl << "lopetus = 0, jatketaan = joku muu: " << endl << ">";
		cin >> status;
	}
	
	
	return 0;
	
} 