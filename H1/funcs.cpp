#include "funcs.h"



void calcSum(int first, int second){
    
    cout << "Funktion tulostama summa: " << first << " + " << second << " = " << first + second << endl;

}
 

void calcDiv(int first, int second){
    if((first == 0) | (second == 0)){

        cout << "ei voi olla nolla" << endl; 

    }else{

        float result = (float)first / (float)second;
        cout << fixed << setprecision(2) << "Funktion tulostama jako: " << first << "/" << second << " = " << result << endl;

    }
}


int retSum(int first, int second){

    return (first + second);

}


float retDiv(int first, int second){

    return ((float)first / (float)second);

}

