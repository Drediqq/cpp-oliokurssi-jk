
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include "funcs.h"
using namespace std;

int main() {
    int a;
    int b;

    cout << "Anna luku: ";
    cin >> a;
     
    cout << "Anna toinen luku: ";
    cin >> b;

    calcSum(a, b);
  try{
        float result = retDiv(a,b);
        cout << fixed << setprecision(2) << a << "/" << b << " = " << result << endl;
    } catch(runtime_error& e){
        cout << "Error: " << e.what() << endl;
    }

  return 0;

} 