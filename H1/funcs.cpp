#include "funcs.h"



void calcSum(int first, int second){
    
    cout << "Palautettu summa: " << first << " + " << second << " = " << first + second << endl;

}
 

void calcDiv(int first, int second){
    if(first == 0 | second == 0){

        throw runtime_error("ei voi olla nolla");

    }else{

        cout << (float)first / second;

    }
}


int retSum(int first, int second){

    return first + second;

}


float retDiv(int first, int second){

    if(first == 0 | second == 0){
        
        throw runtime_error("Ei voi olla nolla");
        
        return 0;
    } 
    
    return (float)first / second;

}

