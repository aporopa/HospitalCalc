#include <iostream>
#include <iomanip>
#include "validateUserInput.h"

using namespace std;

//Validates whether or not the values are either zero or above. Returns a bool.
bool validateUserInput(double determineZero)
{
    bool checkVar = true;
    if(determineZero >= 0){
        checkVar = true;
    }
    else{
        checkVar = false;
    }
    
    return checkVar;
}
