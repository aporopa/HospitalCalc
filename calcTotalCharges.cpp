#include <iostream>
#include <cmath>
#include "calcTotalCharges.h"

using namespace std;

//function for I
double calcTotalCharges(double days, double rate, double fees, double meds)
{
    double totalRate;

    totalRate = days * rate;

    return (totalRate + fees + meds);
}

//function for O
double calcTotalCharges(double fees, double meds)
{
    return(fees + meds);
}