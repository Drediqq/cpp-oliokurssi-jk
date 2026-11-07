#include "src/car.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Luo vektori nimeltään carList. (Luo lista pinoon. Et siis tarvitse smart pointteria.)
  vector<Car> carList;

  // Lisää kolme Car-luokan oliota listaan (keksi itse merkit, mallit ja vuosimallit)
    carList.emplace_back("Audi", "A4", 2013);
    carList.emplace_back("Volkswagen", "Jetta", 2010);
    carList.emplace_back("Skoda", "Octavia", 2008);

    //Tulosta listan toisen alkion tiedot.
    cout << "Listan toinen auto: " << endl;
    carList[1].printData(); 

    // Tulosta kaikkien autojen tiedot käyttämällä for-silmukkaa.
    cout << "Kaikki: " << endl;
    for(Car car: carList){ 
        car.printData();
    }
  return 0;
}
